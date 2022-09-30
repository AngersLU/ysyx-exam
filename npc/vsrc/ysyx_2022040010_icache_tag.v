
`include "defines.v"
`timescale 1ns / 1ps

module ysyx_2022040010_icache_tag (
    input wire clk,
    input wire rst,
    input wire flush,
    
    output wire stallreq,
    input wire cache,

    input wire sram_e,
    input wire [63:0] sram_addr,

    input wire refresh,   //refresh after miss 
    output wire miss,

    output wire [`HIT_WIDTH-1:0] hit,
    output wire lru
);

    reg [`TAG_WIDTH-1:0] tag_way0 [`INDEX_WIDTH-1:0];  //cache tag      lines 64 
    reg [`TAG_WIDTH-1:0] tag_way1 [`INDEX_WIDTH-1:0];
    // contrul tow cache lines a cache set
    reg [`INDEX_WIDTH-1:0] lru_r; //least rencently used
    wire [`TAG_WIDTH-2:0] tag;  // 55
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
            lru_r[index] <= ~lru_r[index];   
        end
    end

    always @(posedge clk) begin
        if(rst) begin
            tag_way1[ 0] <= `TAG_WIDTH'b0;
            tag_way0[ 1] <= `TAG_WIDTH'b0;
            tag_way0[ 2] <= `TAG_WIDTH'b0;
            tag_way0[ 3] <= `TAG_WIDTH'b0;
            tag_way0[ 4] <= `TAG_WIDTH'b0;
            tag_way0[ 5] <= `TAG_WIDTH'b0;
            tag_way0[ 6] <= `TAG_WIDTH'b0;
            tag_way0[ 7] <= `TAG_WIDTH'b0;
            tag_way0[ 8] <= `TAG_WIDTH'b0;
            tag_way0[ 9] <= `TAG_WIDTH'b0;
            tag_way0[10] <= `TAG_WIDTH'b0;
            tag_way0[11] <= `TAG_WIDTH'b0;
            tag_way0[12] <= `TAG_WIDTH'b0;
            tag_way0[13] <= `TAG_WIDTH'b0;
            tag_way0[14] <= `TAG_WIDTH'b0;
            tag_way0[15] <= `TAG_WIDTH'b0;
            tag_way0[16] <= `TAG_WIDTH'b0;
            tag_way0[17] <= `TAG_WIDTH'b0;
            tag_way0[18] <= `TAG_WIDTH'b0;
            tag_way0[19] <= `TAG_WIDTH'b0;
            tag_way0[20] <= `TAG_WIDTH'b0;
            tag_way0[21] <= `TAG_WIDTH'b0;
            tag_way0[22] <= `TAG_WIDTH'b0;
            tag_way0[23] <= `TAG_WIDTH'b0;
            tag_way0[24] <= `TAG_WIDTH'b0;
            tag_way0[25] <= `TAG_WIDTH'b0;
            tag_way0[26] <= `TAG_WIDTH'b0;
            tag_way0[27] <= `TAG_WIDTH'b0;
            tag_way0[28] <= `TAG_WIDTH'b0;
            tag_way0[29] <= `TAG_WIDTH'b0;
            tag_way0[30] <= `TAG_WIDTH'b0;
            tag_way0[31] <= `TAG_WIDTH'b0;
            tag_way0[32] <= `TAG_WIDTH'b0;
            tag_way0[33] <= `TAG_WIDTH'b0;
            tag_way0[34] <= `TAG_WIDTH'b0;
            tag_way0[35] <= `TAG_WIDTH'b0;
            tag_way0[36] <= `TAG_WIDTH'b0;
            tag_way0[37] <= `TAG_WIDTH'b0;
            tag_way0[38] <= `TAG_WIDTH'b0;
            tag_way0[39] <= `TAG_WIDTH'b0;
            tag_way0[40] <= `TAG_WIDTH'b0;
            tag_way0[41] <= `TAG_WIDTH'b0;
            tag_way0[42] <= `TAG_WIDTH'b0;
            tag_way0[43] <= `TAG_WIDTH'b0;
            tag_way0[44] <= `TAG_WIDTH'b0;
            tag_way0[45] <= `TAG_WIDTH'b0;
            tag_way0[46] <= `TAG_WIDTH'b0;
            tag_way0[47] <= `TAG_WIDTH'b0;
            tag_way0[48] <= `TAG_WIDTH'b0;
            tag_way0[49] <= `TAG_WIDTH'b0;
            tag_way0[50] <= `TAG_WIDTH'b0;
            tag_way0[51] <= `TAG_WIDTH'b0;
            tag_way0[52] <= `TAG_WIDTH'b0;
            tag_way0[53] <= `TAG_WIDTH'b0;
            tag_way0[54] <= `TAG_WIDTH'b0;
            tag_way0[55] <= `TAG_WIDTH'b0;
            tag_way0[56] <= `TAG_WIDTH'b0;
            tag_way0[57] <= `TAG_WIDTH'b0;
            tag_way0[58] <= `TAG_WIDTH'b0;
            tag_way0[59] <= `TAG_WIDTH'b0;
            tag_way0[60] <= `TAG_WIDTH'b0;
            tag_way0[61] <= `TAG_WIDTH'b0;
            tag_way0[62] <= `TAG_WIDTH'b0;
            tag_way0[63] <= `TAG_WIDTH'b0;
        end
        else if (refresh & ~lru_r[index]) begin  // lru cache 0
            tag_way0[index] <= {cache_v, tag};  
        end
    end

    always @(posedge clk) begin
        if(rst) begin
            tag_way1[ 0] <= `TAG_WIDTH'b0;
            tag_way1[ 1] <= `TAG_WIDTH'b0;
            tag_way1[ 2] <= `TAG_WIDTH'b0;
            tag_way1[ 3] <= `TAG_WIDTH'b0;
            tag_way1[ 4] <= `TAG_WIDTH'b0;
            tag_way1[ 5] <= `TAG_WIDTH'b0;
            tag_way1[ 6] <= `TAG_WIDTH'b0;
            tag_way1[ 7] <= `TAG_WIDTH'b0;
            tag_way1[ 8] <= `TAG_WIDTH'b0;
            tag_way1[ 9] <= `TAG_WIDTH'b0;
            tag_way1[10] <= `TAG_WIDTH'b0;
            tag_way1[11] <= `TAG_WIDTH'b0;
            tag_way1[12] <= `TAG_WIDTH'b0;
            tag_way1[13] <= `TAG_WIDTH'b0;
            tag_way1[14] <= `TAG_WIDTH'b0;
            tag_way1[15] <= `TAG_WIDTH'b0;
            tag_way1[16] <= `TAG_WIDTH'b0;
            tag_way1[17] <= `TAG_WIDTH'b0;
            tag_way1[18] <= `TAG_WIDTH'b0;
            tag_way1[19] <= `TAG_WIDTH'b0;
            tag_way1[20] <= `TAG_WIDTH'b0;
            tag_way1[21] <= `TAG_WIDTH'b0;
            tag_way1[22] <= `TAG_WIDTH'b0;
            tag_way1[23] <= `TAG_WIDTH'b0;
            tag_way1[24] <= `TAG_WIDTH'b0;
            tag_way1[25] <= `TAG_WIDTH'b0;
            tag_way1[26] <= `TAG_WIDTH'b0;
            tag_way1[27] <= `TAG_WIDTH'b0;
            tag_way1[28] <= `TAG_WIDTH'b0;
            tag_way1[29] <= `TAG_WIDTH'b0;
            tag_way1[30] <= `TAG_WIDTH'b0;
            tag_way1[31] <= `TAG_WIDTH'b0;
            tag_way1[32] <= `TAG_WIDTH'b0;
            tag_way1[33] <= `TAG_WIDTH'b0;
            tag_way1[34] <= `TAG_WIDTH'b0;
            tag_way1[35] <= `TAG_WIDTH'b0;
            tag_way1[36] <= `TAG_WIDTH'b0;
            tag_way1[37] <= `TAG_WIDTH'b0;
            tag_way1[38] <= `TAG_WIDTH'b0;
            tag_way1[39] <= `TAG_WIDTH'b0;
            tag_way1[40] <= `TAG_WIDTH'b0;
            tag_way1[41] <= `TAG_WIDTH'b0;
            tag_way1[42] <= `TAG_WIDTH'b0;
            tag_way1[43] <= `TAG_WIDTH'b0;
            tag_way1[44] <= `TAG_WIDTH'b0;
            tag_way1[45] <= `TAG_WIDTH'b0;
            tag_way1[46] <= `TAG_WIDTH'b0;
            tag_way1[47] <= `TAG_WIDTH'b0;
            tag_way1[48] <= `TAG_WIDTH'b0;
            tag_way1[49] <= `TAG_WIDTH'b0;
            tag_way1[50] <= `TAG_WIDTH'b0;
            tag_way1[51] <= `TAG_WIDTH'b0;
            tag_way1[52] <= `TAG_WIDTH'b0;
            tag_way1[53] <= `TAG_WIDTH'b0;
            tag_way1[54] <= `TAG_WIDTH'b0;
            tag_way1[55] <= `TAG_WIDTH'b0;
            tag_way1[56] <= `TAG_WIDTH'b0;
            tag_way1[57] <= `TAG_WIDTH'b0;
            tag_way1[58] <= `TAG_WIDTH'b0;
            tag_way1[59] <= `TAG_WIDTH'b0;
            tag_way1[60] <= `TAG_WIDTH'b0;
            tag_way1[61] <= `TAG_WIDTH'b0;
            tag_way1[62] <= `TAG_WIDTH'b0;
            tag_way1[63] <= `TAG_WIDTH'b0;
        end
        else if (refresh & lru_r[index]) begin    // only one line is replaced after a miss
            tag_way1[index] <= {cache_v, tag};   // replacement strategy for write back
        end
    end

    // assign hit_way0 = ~flush & cache_v & sram_e & ({1'b1, tag} == tag_way0[index]);
    // assign hit_way1 = ~flush & cache_v & sram_e & ({1'b1, tag} == tag_way1[index]);
    // wire [55:0] tag_test = tag_way0[index];
    assign hit_way0 = cache_v & sram_e & ({1'b1, tag} == tag_way0[index]);
    assign hit_way1 = cache_v & sram_e & ({1'b1, tag} == tag_way1[index]);
    assign lru      = lru_r[index];
    assign hit      = {hit_way1, hit_way0};
    assign miss     = cache_v & sram_e & ~(hit_way0|hit_way1) & ~flush;

    // assign stallreq = miss | (cache & sram_e); // miss need refresh , so sram_e need rw_over
    assign stallreq = miss; //stall whole fsl
    // wire bubble = cache_o & sram_e; // bubble  

    
endmodule





