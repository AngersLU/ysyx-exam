

`include "defines.v"
`timescale 1ns / 1ps

module ysyx_2022040010_dcache_tag (
    input  wire                     clk,
    input  wire                     rst,

    input  wire                     flush,
    output wire                     stallreq,
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
            tag_way0[30] <= 56'b0;
            tag_way0[31] <= 56'b0;
            tag_way0[32] <= 56'b0;
            tag_way0[33] <= 56'b0;
            tag_way0[34] <= 56'b0;
            tag_way0[35] <= 56'b0;
            tag_way0[36] <= 56'b0;
            tag_way0[37] <= 56'b0;
            tag_way0[38] <= 56'b0;
            tag_way0[39] <= 56'b0;
            tag_way0[40] <= 56'b0;
            tag_way0[41] <= 56'b0;
            tag_way0[42] <= 56'b0;
            tag_way0[43] <= 56'b0;
            tag_way0[44] <= 56'b0;
            tag_way0[45] <= 56'b0;
            tag_way0[46] <= 56'b0;
            tag_way0[47] <= 56'b0;
            tag_way0[48] <= 56'b0;
            tag_way0[49] <= 56'b0;
            tag_way0[50] <= 56'b0;
            tag_way0[51] <= 56'b0;
            tag_way0[52] <= 56'b0;
            tag_way0[53] <= 56'b0;
            tag_way0[54] <= 56'b0;
            tag_way0[55] <= 56'b0;
            tag_way0[56] <= 56'b0;
            tag_way0[57] <= 56'b0;
            tag_way0[58] <= 56'b0;
            tag_way0[59] <= 56'b0;
            tag_way0[60] <= 56'b0;
            tag_way0[61] <= 56'b0;
            tag_way0[62] <= 56'b0;
            tag_way0[63] <= 56'b0;
        end
        else if (refresh & ~lru_r[index]) begin  // lru cache 0
            tag_way0[index] <= {1'b0, cache_v, tag};
        end
        else if (~lru_r[index] & store_dirty) begin
            tag_way0[index][56] <= store_dirty;
        end
    end



    always @(posedge clk) begin
        if(rst) begin
            tag_way1[ 0] <= 56'b0;
            tag_way1[ 1] <= 56'b0;
            tag_way1[ 2] <= 56'b0;
            tag_way1[ 3] <= 56'b0;
            tag_way1[ 4] <= 56'b0;
            tag_way1[ 5] <= 56'b0;
            tag_way1[ 6] <= 56'b0;
            tag_way1[ 7] <= 56'b0;
            tag_way1[ 8] <= 56'b0;
            tag_way1[ 9] <= 56'b0;
            tag_way1[10] <= 56'b0;
            tag_way1[11] <= 56'b0;
            tag_way1[12] <= 56'b0;
            tag_way1[13] <= 56'b0;
            tag_way1[14] <= 56'b0;
            tag_way1[15] <= 56'b0;
            tag_way1[16] <= 56'b0;
            tag_way1[17] <= 56'b0;
            tag_way1[18] <= 56'b0;
            tag_way1[19] <= 56'b0;
            tag_way1[20] <= 56'b0;
            tag_way1[21] <= 56'b0;
            tag_way1[22] <= 56'b0;
            tag_way1[23] <= 56'b0;
            tag_way1[24] <= 56'b0;
            tag_way1[25] <= 56'b0;
            tag_way1[26] <= 56'b0;
            tag_way1[27] <= 56'b0;
            tag_way1[28] <= 56'b0;
            tag_way1[29] <= 56'b0;
            tag_way1[30] <= 56'b0;
            tag_way1[31] <= 56'b0;
            tag_way1[32] <= 56'b0;
            tag_way1[33] <= 56'b0;
            tag_way1[34] <= 56'b0;
            tag_way1[35] <= 56'b0;
            tag_way1[36] <= 56'b0;
            tag_way1[37] <= 56'b0;
            tag_way1[38] <= 56'b0;
            tag_way1[39] <= 56'b0;
            tag_way1[40] <= 56'b0;
            tag_way1[41] <= 56'b0;
            tag_way1[42] <= 56'b0;
            tag_way1[43] <= 56'b0;
            tag_way1[44] <= 56'b0;
            tag_way1[45] <= 56'b0;
            tag_way1[46] <= 56'b0;
            tag_way1[47] <= 56'b0;
            tag_way1[48] <= 56'b0;
            tag_way1[49] <= 56'b0;
            tag_way1[50] <= 56'b0;
            tag_way1[51] <= 56'b0;
            tag_way1[52] <= 56'b0;
            tag_way1[53] <= 56'b0;
            tag_way1[54] <= 56'b0;
            tag_way1[55] <= 56'b0;
            tag_way1[56] <= 56'b0;
            tag_way1[57] <= 56'b0;
            tag_way1[58] <= 56'b0;
            tag_way1[59] <= 56'b0;
            tag_way1[60] <= 56'b0;
            tag_way1[61] <= 56'b0;
            tag_way1[62] <= 56'b0;
            tag_way1[63] <= 56'b0;
        end
        else if (refresh & lru_r[index]) begin
            tag_way1[index] <= {1'b0, cache_v, tag};   // replacement strategy for write back
        end
        else if (lru_r[index] & store_dirty) begin
            tag_way1[index][56] <= store_dirty;
        end
    end


    wire store_dirty;
    // assign hit_way0 = ~flush & cache_v & sram_e & ({1'b1, tag} == tag_way0[index][55:0]);
    // assign hit_way1 = ~flush & cache_v & sram_e & ({1'b1, tag} == tag_way1[index][55:0]);
    assign hit_way0 = cache_v & sram_e & ({1'b1, tag} == tag_way0[index][55:0]);
    assign hit_way1 = cache_v & sram_e & ({1'b1, tag} == tag_way1[index][55:0]);

    assign miss = cache_v & sram_e & ~(hit_way0|hit_way1) & ~flush;
    assign store_dirty = miss & sram_we;  // store

    assign write_back_way0 = cache_v & sram_e & miss & tag_way0[index][`DTAG_WIDTH-1]; // dirty
    assign write_back_way1 = cache_v & sram_e & miss & tag_way1[index][`DTAG_WIDTH-1];
    assign write_back = write_back_way0 | write_back_way1;

    assign stallreq = miss | (cache & sram_e);


endmodule





