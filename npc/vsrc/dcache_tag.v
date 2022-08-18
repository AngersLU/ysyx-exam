`include "defines.h"
`timescale 1ns/1ns
module dcache_tag (
    input  wire                     clk,
    input  wire                     rst,
    input  wire [`StallBus]         stall,

    input  wire                     flush,

    input  wire                     cache,

    input  wire                     sram_e,
    input  wire                     sram_we, // 0 load 1 store
    input  wire                     sram_addr,

    input  wire                     refresh,
    output wire                     miss,
    output wire                     dirty,
    output wire                     write_back,

    output wire [`HIT_WIDTH-1:0]    hit,
    output wire                     lru
);

    reg [`DTAG_WIDTH-1:0] tag_way0 [`INDEX_WIDTH-1:0];
    reg [`DTAG_WIDTH-1:0] tag_way1 [`INDEX_WIDTH-1:0];   // dirty + cache + tag
    reg [`INDEX_WIDTH-1:0] lru_r;
    wire [54:0] tag;            // 55
    wire [5:0] index;           // 6 64lines 
    wire [2:0] offset;          // 3 2^3=8 8*8 = 64bits
    wire cache_v;

    wire hit_way0;          
    wire hit_way1;

    wire write_back_way0;  
    wire write_back_way1;

    assign cache_v = cache;

    assign {
        tag,
        index,
        offset
    } = sram_addr;

    always @(posedge clk) begin
        if (rst) begin
            lru_r <= `INDEX_WIDTH'b0;
        end
        else if (hit_way0 & ~hit_way1) begin
            lru_r[index] <= 1'b1;
        end
        else if (~hit_way0 & hit_way1) begin
            lru_r[index] <= 1'b0;            
        end
        else if (refresh) begin
            lru_r[index] <= ~lru_r[index];   
        end
    end

    always @(posedge clk) begin
        if(rst) begin
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 1] <= 56'b0;
            tag_way0[ 2] <= 56'b0;
            tag_way0[ 3] <= 56'b0;
            tag_way0[ 4] <= 56'b0;
            tag_way0[ 5] <= 56'b0;
            tag_way0[ 6] <= 56'b0;
            tag_way0[ 7] <= 56'b0;
            tag_way0[ 8] <= 56'b0;
            tag_way0[ 9] <= 56'b0;
            tag_way0[10] <= 56'b0;
            tag_way0[11] <= 56'b0;
            tag_way0[12] <= 56'b0;
            tag_way0[13] <= 56'b0;
            tag_way0[14] <= 56'b0;
            tag_way0[15] <= 56'b0;
            tag_way0[16] <= 56'b0;
            tag_way0[17] <= 56'b0;
            tag_way0[18] <= 56'b0;
            tag_way0[19] <= 56'b0;
            tag_way0[20] <= 56'b0;
            tag_way0[21] <= 56'b0;
            tag_way0[22] <= 56'b0;
            tag_way0[23] <= 56'b0;
            tag_way0[24] <= 56'b0;
            tag_way0[25] <= 56'b0;
            tag_way0[26] <= 56'b0;
            tag_way0[27] <= 56'b0;
            tag_way0[28] <= 56'b0;
            tag_way0[29] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;
            tag_way0[ 0] <= 56'b0;




        end
        else if (refresh & ~lru_r[index]) begin  // lru cache 0
            tag_way0[index] <= {1'b0, cache_v, tag};
        end
    end



    always @(posedge clk) begin
        if(rst) begin
            tag_way1[ 0] <= 56'b0;



        end
        else if (refresh & lru_r[index]) begin
            tag_way1[index] <= {1'b0, cache_v, tag};   // replacement strategy for write back
        end
    end


    wire store_dirty;
    assign hit_way0 = ~flush & cache_v & sram_e & ({1'b1, tag} == tag_way0[index][55:0]);
    assign hit_way1 = ~flush & cache_v & sram_e & ({1'b1, tag} == tag_way1[index][55:0]);
    assign miss = cache_v & sram_e & ~(hit_way0|hit_way1) & ~flush;
    assign store_dirty = miss & sram_we;  // store

    always @(*) begin
        if (store_dirty) begin
            if (lru_r[index]) begin
                tag_way1[index][56] = store_dirty;
            end
            else if (~lru_r[index]) begin
                tag_way0[index][56] = store_dirty;
            end
        end
    end

    assign write_back_way0 = cache_v & sram_e & miss & tag_way0[index][`DTAG_WIDTH-1]; // dirty
    assign write_back_way1 = cache_v & sram_e & miss & tag_way1[index][`DTAG_WIDTH-1];
    assign write_back = write_back_way0 | write_back_way1;




endmodule





