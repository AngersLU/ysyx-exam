
`include "defines.v"
`timescale 1ns / 1ps

module ysyx_2022040010_icache_data (
    input wire clk, 
    input wire rst,

    input wire [`HIT_WIDTH-1:0] hit,    //way sel
    input wire lru,  //least rencently used
    input wire cache,

    //isram_interface
    input wire sram_e,
    input wire [63:0] sram_addr,
    output wire [63:0] sram_rdata_o,
    output wire       icache_r_over_o,

    //axi
    input wire refresh,
    input wire [63:0] cacheline_new
    //output wire [63:0] cacheline_old,
);

    wire [63:0] rdata_way0 [63:0]; //8B*64=2^9B*2=2^10B=1KB   cache line 8bytes 
    wire [63:0] rdata_way1 [63:0]; 
    wire [`TAG_WIDTH-1:0]   tag; // 64-6-3=55
    wire [5:0] index;            // 6  cache index 64 lines
    wire [2:0] offset;           // 3  cache lines 8bytes     0->3'b000 / 4->3'b100


    assign {
        tag,
        index,
        offset
    } = sram_addr;

    wire [63:0] bank_sel;

    ysyx_2022040010_decoder_6_64 u_decoder_6_64(
        .in     (index   ),
        .out    (bank_sel)
    );


    genvar gv_w0;
    generate
        for(gv_w0 = 0; gv_w0 < 64; gv_w0 = gv_w0 + 1)
            begin: icacheloopway0
                ysyx_2022040010_cache_bank bankx_way0(
                    .clk    (clk),
                    .en     (cache & refresh  | sram_e & bank_sel[gv_w0] & hit[0]),
                    .we     (refresh?~lru?1'b1:1'b0:1'b0),
                    .addr   (index==gv_w0),
                    .in     (refresh?cacheline_new:64'b0),
                    .out    (rdata_way0[gv_w0])
                );
            end
    endgenerate

    genvar gv_w1;
    generate
        for(gv_w1 = 0; gv_w1 < 64; gv_w1 = gv_w1 + 1)
            begin: icacheloopway1
                ysyx_2022040010_cache_bank bankx_way1( 
                    .clk    (clk),
                    .en     (cache & refresh | sram_e & bank_sel[gv_w1] & hit[1]),
                    .we     (refresh?lru?1'b1:1'b0:1'b0),
                    .addr   (index==gv_w1),
                    .in     (refresh?cacheline_new:64'b0),
                    .out    (rdata_way1[gv_w1])
                );
            end
    endgenerate

    wire [63:0] sram_rdata_way0, sram_rdata_way1;

    assign sram_rdata_way0 =    ~cache        ? 64'b0 :
                                bank_sel[ 0]  ? rdata_way0[ 0] :
                                bank_sel[ 1]  ? rdata_way0[ 1] :
                                bank_sel[ 2]  ? rdata_way0[ 2] :
                                bank_sel[ 3]  ? rdata_way0[ 3] :
                                bank_sel[ 4]  ? rdata_way0[ 4] :
                                bank_sel[ 5]  ? rdata_way0[ 5] :
                                bank_sel[ 6]  ? rdata_way0[ 6] :
                                bank_sel[ 7]  ? rdata_way0[ 7] :
                                bank_sel[ 8]  ? rdata_way0[ 8] :
                                bank_sel[ 9]  ? rdata_way0[ 9] :
                                bank_sel[10]  ? rdata_way0[10] :
                                bank_sel[11]  ? rdata_way0[11] :
                                bank_sel[12]  ? rdata_way0[12] :
                                bank_sel[13]  ? rdata_way0[13] :
                                bank_sel[14]  ? rdata_way0[14] :
                                bank_sel[15]  ? rdata_way0[15] :
                                bank_sel[16]  ? rdata_way0[16] :
                                bank_sel[17]  ? rdata_way0[17] :
                                bank_sel[18]  ? rdata_way0[18] :
                                bank_sel[19]  ? rdata_way0[19] :
                                bank_sel[20]  ? rdata_way0[20] :
                                bank_sel[21]  ? rdata_way0[21] :
                                bank_sel[22]  ? rdata_way0[22] :
                                bank_sel[23]  ? rdata_way0[23] :
                                bank_sel[24]  ? rdata_way0[24] :
                                bank_sel[25]  ? rdata_way0[25] :
                                bank_sel[26]  ? rdata_way0[26] :
                                bank_sel[27]  ? rdata_way0[27] :
                                bank_sel[28]  ? rdata_way0[28] :
                                bank_sel[29]  ? rdata_way0[29] :
                                bank_sel[30]  ? rdata_way0[30] :
                                bank_sel[31]  ? rdata_way0[31] :
                                bank_sel[32]  ? rdata_way0[32] :
                                bank_sel[33]  ? rdata_way0[33] :
                                bank_sel[34]  ? rdata_way0[34] :
                                bank_sel[35]  ? rdata_way0[35] :
                                bank_sel[36]  ? rdata_way0[36] :
                                bank_sel[37]  ? rdata_way0[37] :
                                bank_sel[38]  ? rdata_way0[38] :
                                bank_sel[39]  ? rdata_way0[39] :
                                bank_sel[40]  ? rdata_way0[40] :
                                bank_sel[41]  ? rdata_way0[41] :
                                bank_sel[42]  ? rdata_way0[42] :
                                bank_sel[43]  ? rdata_way0[43] :
                                bank_sel[44]  ? rdata_way0[44] :
                                bank_sel[45]  ? rdata_way0[45] :
                                bank_sel[46]  ? rdata_way0[46] :
                                bank_sel[47]  ? rdata_way0[47] :
                                bank_sel[48]  ? rdata_way0[48] :
                                bank_sel[49]  ? rdata_way0[49] :
                                bank_sel[50]  ? rdata_way0[50] :
                                bank_sel[51]  ? rdata_way0[51] :
                                bank_sel[52]  ? rdata_way0[52] :
                                bank_sel[53]  ? rdata_way0[53] :
                                bank_sel[54]  ? rdata_way0[54] :
                                bank_sel[55]  ? rdata_way0[55] :
                                bank_sel[56]  ? rdata_way0[56] :
                                bank_sel[57]  ? rdata_way0[57] :
                                bank_sel[58]  ? rdata_way0[58] :
                                bank_sel[59]  ? rdata_way0[59] :
                                bank_sel[60]  ? rdata_way0[60] :
                                bank_sel[61]  ? rdata_way0[61] :
                                bank_sel[62]  ? rdata_way0[62] :
                                bank_sel[63]  ? rdata_way0[63] : 64'b0;




    assign sram_rdata_way1 =    ~cache        ? 64'b0 :
                                bank_sel[ 0]  ? rdata_way1[ 0] :
                                bank_sel[ 1]  ? rdata_way1[ 1] :
                                bank_sel[ 2]  ? rdata_way1[ 2] :
                                bank_sel[ 3]  ? rdata_way1[ 3] :
                                bank_sel[ 4]  ? rdata_way1[ 4] :
                                bank_sel[ 5]  ? rdata_way1[ 5] :
                                bank_sel[ 6]  ? rdata_way1[ 6] :
                                bank_sel[ 7]  ? rdata_way1[ 7] :
                                bank_sel[ 8]  ? rdata_way1[ 8] :
                                bank_sel[ 9]  ? rdata_way1[ 9] :
                                bank_sel[10]  ? rdata_way1[10] :
                                bank_sel[11]  ? rdata_way1[11] :
                                bank_sel[12]  ? rdata_way1[12] :
                                bank_sel[13]  ? rdata_way1[13] :
                                bank_sel[14]  ? rdata_way1[14] :
                                bank_sel[15]  ? rdata_way1[15] :
                                bank_sel[16]  ? rdata_way1[16] :
                                bank_sel[17]  ? rdata_way1[17] :
                                bank_sel[18]  ? rdata_way1[18] :
                                bank_sel[19]  ? rdata_way1[19] :
                                bank_sel[20]  ? rdata_way1[20] :
                                bank_sel[21]  ? rdata_way1[21] :
                                bank_sel[22]  ? rdata_way1[22] :
                                bank_sel[23]  ? rdata_way1[23] :
                                bank_sel[24]  ? rdata_way1[24] :
                                bank_sel[25]  ? rdata_way1[25] :
                                bank_sel[26]  ? rdata_way1[26] :
                                bank_sel[27]  ? rdata_way1[27] :
                                bank_sel[28]  ? rdata_way1[28] :
                                bank_sel[29]  ? rdata_way1[29] :
                                bank_sel[30]  ? rdata_way1[30] :
                                bank_sel[31]  ? rdata_way1[31] :
                                bank_sel[32]  ? rdata_way1[32] :
                                bank_sel[33]  ? rdata_way1[33] :
                                bank_sel[34]  ? rdata_way1[34] :
                                bank_sel[35]  ? rdata_way1[35] :
                                bank_sel[36]  ? rdata_way1[36] :
                                bank_sel[37]  ? rdata_way1[37] :
                                bank_sel[38]  ? rdata_way1[38] :
                                bank_sel[39]  ? rdata_way1[39] :
                                bank_sel[40]  ? rdata_way1[40] :
                                bank_sel[41]  ? rdata_way1[41] :
                                bank_sel[42]  ? rdata_way1[42] :
                                bank_sel[43]  ? rdata_way1[43] :
                                bank_sel[44]  ? rdata_way1[44] :
                                bank_sel[45]  ? rdata_way1[45] :
                                bank_sel[46]  ? rdata_way1[46] :
                                bank_sel[47]  ? rdata_way1[47] :
                                bank_sel[48]  ? rdata_way1[48] :
                                bank_sel[49]  ? rdata_way1[49] :
                                bank_sel[50]  ? rdata_way1[50] :
                                bank_sel[51]  ? rdata_way1[51] :
                                bank_sel[52]  ? rdata_way1[52] :
                                bank_sel[53]  ? rdata_way1[53] :
                                bank_sel[54]  ? rdata_way1[54] :
                                bank_sel[55]  ? rdata_way1[55] :
                                bank_sel[56]  ? rdata_way1[56] :
                                bank_sel[57]  ? rdata_way1[57] :
                                bank_sel[58]  ? rdata_way1[58] :
                                bank_sel[59]  ? rdata_way1[59] :
                                bank_sel[60]  ? rdata_way1[60] :
                                bank_sel[61]  ? rdata_way1[61] :
                                bank_sel[62]  ? rdata_way1[62] :
                                bank_sel[63]  ? rdata_way1[63] : 64'b0;
    
    wire [63:0] icache_inst_way0    = (offset==3'b000) ? {32'b0, sram_rdata_way0[31:0]} 
                                    : (offset==3'b100) ? {32'b0, sram_rdata_way0[63:32]}
                                    : 64'b0;
    wire [63:0] icache_inst_way1    = (offset==3'b000) ? {32'b0, sram_rdata_way1[31:0]} 
                                    : (offset==3'b100) ? {32'b0, sram_rdata_way1[63:32]}
                                    : 64'b0;
    wire icache_r_over;
    wire [63:0] sram_rdata;
    assign {icache_r_over, sram_rdata}  =   hit[0] ? {1'b1, icache_inst_way0} 
                                        :   hit[1] ? {1'b1, icache_inst_way1} : 64'b0;

    // reg icache_r_over_r;
    // reg [63:0] sram_rdata_r;
    // always @(posedge clk) begin
    //     if (rst) begin
    //         icache_r_over_r   <= 1'b0;
    //         sram_rdata_r      <= 64'b0;
    //     end
    //     else begin
    //         icache_r_over_r   <= icache_r_over;
    //         sram_rdata_r      <= sram_rdata;
    //     end
    // end
    assign icache_r_over_o = icache_r_over;
    assign sram_rdata_o = sram_rdata;
    //TODO: icache_dirty & dcache_dirty sram_rdata need buffer wait dsram_rdata


endmodule



