`include "defines.h"
`timescale 1ns/1ns
module icache_tag (
    input wire clk,
    input wire rst,
    input wire [`StallBus] stall,
    // input wire flush,
    
    // output wire stallreq,
    input wire cache,

    input wire sram_e,
    input wire sram_addr,

    input wire refresh,   //refresh after miss 
    output wire miss,

    output wire [`HIT_WIDTH-1:0] hit,
    output wire lru
);

    reg [`TAG_WIDTH-1:0] tag_way0 [`INDEX_WIDTH-1:0];  //cache tag      lines 64 
    reg [`TAG_WIDTH-1:0] tag_way1 [`INDEX_WIDTH-1:0];
    // contrul tow cache lines a cache set
    reg [`INDEX_WIDTH-1:0] lru_r; //least rencently used
    wire [`TAG_WIDTH-1:0] tag;  // 55
    wire [5:0] index;           // 6 64lines 
    wire [2:0] offset;          // 3 2^3=8 8*8 = 64bits
    wire hit_way0;            // cache == 1 & tag == tag 
    wire hit_way1;

    wire cache_v;
    assign cache_v = cache;

    // 64bits
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
            lru_r[index] <= 1'b1;              //1 lru index way1 
        end
        else if (~hit_way0 & hit_way1) begin
            lru_r[index] <= 1'b0;              //0 lru index way0 
        end
        else if (refresh) begin
            lru_r[index] <= ~lru_r[index];   // ?
        end
    end

    always @(posedge clk) begin
        if(rst) begin
            tag_way1[ 0] <= `TAR_WIDTH'b0;
            tag_way0[ 1] <= `TAR_WIDTH'b0;
            tag_way0[ 2] <= `TAR_WIDTH'b0;
            tag_way0[ 3] <= `TAR_WIDTH'b0;
            tag_way0[ 4] <= `TAR_WIDTH'b0;
            tag_way0[ 5] <= `TAR_WIDTH'b0;
            tag_way0[ 6] <= `TAR_WIDTH'b0;
            tag_way0[ 7] <= `TAR_WIDTH'b0;
            tag_way0[ 8] <= `TAR_WIDTH'b0;
            tag_way0[ 9] <= `TAR_WIDTH'b0;
            tag_way0[10] <= `TAR_WIDTH'b0;
            tag_way0[11] <= `TAR_WIDTH'b0;
            tag_way0[12] <= `TAR_WIDTH'b0;
            tag_way0[13] <= `TAR_WIDTH'b0;
            tag_way0[14] <= `TAR_WIDTH'b0;
            tag_way0[15] <= `TAR_WIDTH'b0;
            tag_way0[16] <= `TAR_WIDTH'b0;
            tag_way0[17] <= `TAR_WIDTH'b0;
            tag_way0[18] <= `TAR_WIDTH'b0;
            tag_way0[19] <= `TAR_WIDTH'b0;
            tag_way0[20] <= `TAR_WIDTH'b0;
            tag_way0[21] <= `TAR_WIDTH'b0;
            tag_way0[22] <= `TAR_WIDTH'b0;
            tag_way0[23] <= `TAR_WIDTH'b0;
            tag_way0[24] <= `TAR_WIDTH'b0;
            tag_way0[25] <= `TAR_WIDTH'b0;
            tag_way0[26] <= `TAR_WIDTH'b0;
            tag_way0[27] <= `TAR_WIDTH'b0;
            tag_way0[28] <= `TAR_WIDTH'b0;
            tag_way0[29] <= `TAR_WIDTH'b0;
            tag_way0[30] <= `TAR_WIDTH'b0;
            tag_way0[31] <= `TAR_WIDTH'b0;
            tag_way0[32] <= `TAR_WIDTH'b0;
            tag_way0[33] <= `TAR_WIDTH'b0;
            tag_way0[34] <= `TAR_WIDTH'b0;
            tag_way0[35] <= `TAR_WIDTH'b0;
            tag_way0[36] <= `TAR_WIDTH'b0;
            tag_way0[37] <= `TAR_WIDTH'b0;
            tag_way0[38] <= `TAR_WIDTH'b0;
            tag_way0[39] <= `TAR_WIDTH'b0;
            tag_way0[40] <= `TAR_WIDTH'b0;
            tag_way0[41] <= `TAR_WIDTH'b0;
            tag_way0[42] <= `TAR_WIDTH'b0;
            tag_way0[43] <= `TAR_WIDTH'b0;
            tag_way0[44] <= `TAR_WIDTH'b0;
            tag_way0[45] <= `TAR_WIDTH'b0;
            tag_way0[46] <= `TAR_WIDTH'b0;
            tag_way0[47] <= `TAR_WIDTH'b0;
            tag_way0[48] <= `TAR_WIDTH'b0;
            tag_way0[49] <= `TAR_WIDTH'b0;
            tag_way0[50] <= `TAR_WIDTH'b0;
            tag_way0[51] <= `TAR_WIDTH'b0;
            tag_way0[52] <= `TAR_WIDTH'b0;
            tag_way0[53] <= `TAR_WIDTH'b0;
            tag_way0[54] <= `TAR_WIDTH'b0;
            tag_way0[55] <= `TAR_WIDTH'b0;
            tag_way0[56] <= `TAR_WIDTH'b0;
            tag_way0[57] <= `TAR_WIDTH'b0;
            tag_way0[58] <= `TAR_WIDTH'b0;
            tag_way0[59] <= `TAR_WIDTH'b0;
            tag_way0[60] <= `TAR_WIDTH'b0;
            tag_way0[61] <= `TAR_WIDTH'b0;
            tag_way0[62] <= `TAR_WIDTH'b0;
            tag_way0[63] <= `TAR_WIDTH'b0;
        end
        else if (refresh & ~lru_r[index]) begin  // lru cache 0
            tag_way0[index] <= {cache_v, tag};   // 
        end
    end

    always @(posedge clk) begin
        if(rst) begin
            tag_way1[ 0] <= `TAR_WIDTH'b0;
            tag_way1[ 1] <= `TAR_WIDTH'b0;
            tag_way1[ 2] <= `TAR_WIDTH'b0;
            tag_way1[ 3] <= `TAR_WIDTH'b0;
            tag_way1[ 4] <= `TAR_WIDTH'b0;
            tag_way1[ 5] <= `TAR_WIDTH'b0;
            tag_way1[ 6] <= `TAR_WIDTH'b0;
            tag_way1[ 7] <= `TAR_WIDTH'b0;
            tag_way1[ 8] <= `TAR_WIDTH'b0;
            tag_way1[ 9] <= `TAR_WIDTH'b0;
            tag_way1[10] <= `TAR_WIDTH'b0;
            tag_way1[11] <= `TAR_WIDTH'b0;
            tag_way1[12] <= `TAR_WIDTH'b0;
            tag_way1[13] <= `TAR_WIDTH'b0;
            tag_way1[14] <= `TAR_WIDTH'b0;
            tag_way1[15] <= `TAR_WIDTH'b0;
            tag_way1[16] <= `TAR_WIDTH'b0;
            tag_way1[17] <= `TAR_WIDTH'b0;
            tag_way1[18] <= `TAR_WIDTH'b0;
            tag_way1[19] <= `TAR_WIDTH'b0;
            tag_way1[20] <= `TAR_WIDTH'b0;
            tag_way1[21] <= `TAR_WIDTH'b0;
            tag_way1[22] <= `TAR_WIDTH'b0;
            tag_way1[23] <= `TAR_WIDTH'b0;
            tag_way1[24] <= `TAR_WIDTH'b0;
            tag_way1[25] <= `TAR_WIDTH'b0;
            tag_way1[26] <= `TAR_WIDTH'b0;
            tag_way1[27] <= `TAR_WIDTH'b0;
            tag_way1[28] <= `TAR_WIDTH'b0;
            tag_way1[29] <= `TAR_WIDTH'b0;
            tag_way1[30] <= `TAR_WIDTH'b0;
            tag_way1[31] <= `TAR_WIDTH'b0;
            tag_way1[32] <= `TAR_WIDTH'b0;
            tag_way1[33] <= `TAR_WIDTH'b0;
            tag_way1[34] <= `TAR_WIDTH'b0;
            tag_way1[35] <= `TAR_WIDTH'b0;
            tag_way1[36] <= `TAR_WIDTH'b0;
            tag_way1[37] <= `TAR_WIDTH'b0;
            tag_way1[38] <= `TAR_WIDTH'b0;
            tag_way1[39] <= `TAR_WIDTH'b0;
            tag_way1[40] <= `TAR_WIDTH'b0;
            tag_way1[41] <= `TAR_WIDTH'b0;
            tag_way1[42] <= `TAR_WIDTH'b0;
            tag_way1[43] <= `TAR_WIDTH'b0;
            tag_way1[44] <= `TAR_WIDTH'b0;
            tag_way1[45] <= `TAR_WIDTH'b0;
            tag_way1[46] <= `TAR_WIDTH'b0;
            tag_way1[47] <= `TAR_WIDTH'b0;
            tag_way1[48] <= `TAR_WIDTH'b0;
            tag_way1[49] <= `TAR_WIDTH'b0;
            tag_way1[50] <= `TAR_WIDTH'b0;
            tag_way1[51] <= `TAR_WIDTH'b0;
            tag_way1[52] <= `TAR_WIDTH'b0;
            tag_way1[53] <= `TAR_WIDTH'b0;
            tag_way1[54] <= `TAR_WIDTH'b0;
            tag_way1[55] <= `TAR_WIDTH'b0;
            tag_way1[56] <= `TAR_WIDTH'b0;
            tag_way1[57] <= `TAR_WIDTH'b0;
            tag_way1[58] <= `TAR_WIDTH'b0;
            tag_way1[59] <= `TAR_WIDTH'b0;
            tag_way1[60] <= `TAR_WIDTH'b0;
            tag_way1[61] <= `TAR_WIDTH'b0;
            tag_way1[62] <= `TAR_WIDTH'b0;
            tag_way1[63] <= `TAR_WIDTH'b0;
        end
        else if (refresh & lru_r[index]) begin    // only one line is replaced after a miss
            tag_way1[index] <= {cache_v, tag};   // replacement strategy for write back
        end
    end

    assign hit_way0 = ~flush & cache_v & sram_e & ({1'b1, tag} == tag_way0[index]);
    assign hit_way1 = ~flush & cache_v & sram_e & ({1'b1, tag} == tag_way1[index]);
    assign lru      = lru_r[index];
    assign hit      = {hit_way1, hit_way0};
    assign miss     = cache_v & sram_e & ~(hit_way0|hit_way1) & ~flush;
    assign stallreq = miss;

    
endmodule





