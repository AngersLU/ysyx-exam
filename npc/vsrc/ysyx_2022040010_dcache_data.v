
`include "defines.v"
`timescale 1ns / 1ps
module ysyx_2022040010_dcache_data (
    input wire clk, 
    input wire rst,

    input wire write_back,
    input wire [`HIT_WIDTH-1:0] hit,
    input wire lru,  //least rencently used
    input wire cache,
    input wire dirty,

    //sram_interface
    input wire sram_e,
    input wire sram_we,
    // input wire [ 7:0] sram_sel,
    input wire  [63:0] sram_addr,
    input wire  [63:0] sram_wdata,
    output wire [63:0] sram_rdata,
    output wire        dcache_rw_over,

    //axi
    input wire refresh,
    input wire [63:0] cacheline_new,
    output wire [63:0] cacheline_old
);

    wire [63:0] rdata_way0 [63:0]; //8B*64=2^9B*2=2^10B=1KB   cache line 8bytes 
    wire [63:0] rdata_way1 [63:0]; 
    wire [`TAG_WIDTH-1:0]   tag; // 64-6-3=55
    wire [5:0]              index;            // 6  cache index 64 lines
    wire [2:0]              offset;           // 3  cache lines 8bytes
    reg  [`HIT_WIDTH-1:0]   hit_r; //
    reg                     lru_r;
    reg                     cache_r; 
    

    assign {
        tag,
        index,
        offset 
    } = sram_addr;

    wire [63:0] bank_sel;
    reg  [63:0] bank_sel_r;

    ysyx_2022040010_decoder_6_64 u_decoder_6_64(
        .in     (index   ),
        .out    (bank_sel)
    );

    always @(posedge clk) begin
        if (rst) begin
            hit_r       <= 2'b0;
            lru_r       <= 1'b0;
            cache_r     <= 1'b1;
            bank_sel_r  <= 64'b0;
        end
        else begin
            hit_r       <= hit;
            lru_r       <= lru;
            cache_r     <= cache;
            bank_sel_r  <= bank_sel;
        end
    end

    genvar gv_w0;
    generate
        for(gv_w0 = 0; gv_w0 < 64; gv_w0 = gv_w0 + 1)
            begin: dloopway0
                ysyx_2022040010_cache_bank bankx_way0(
                    .clk    (clk),
                    .en     (cache & sram_e & bank_sel[gv_w0] & hit[0] | write_back),
                    .we     (refresh?~lru_r?1'b1:1'b0:write_back?1'b0:sram_we), 
                    .addr   (index==gv_w0),
                    .in     (refresh?cacheline_new:sram_wdata),
                    .out    (rdata_way0[gv_w0])
                );
            end
    endgenerate
    
    //write_back read refresh write
    genvar gv_w1;
    generate
        for(gv_w1 = 0; gv_w1 < 64; gv_w1 = gv_w1 + 1)
            begin: dloopway1
                ysyx_2022040010_cache_bank bankx_way1( 
                    .clk    (clk),
                    .en     (cache & sram_e & bank_sel[gv_w1] & hit[1] | write_back),
                    .we     (refresh?lru_r?1'b1:1'b0:write_back?1'b0:sram_we),       // refresh w write_bakc r store w 
                    .addr   (index==gv_w1),
                    .in     (refresh?cacheline_new:sram_wdata),
                    .out    (rdata_way1[gv_w1])
                );
            end
    endgenerate

    wire [63:0] sram_rdata_way0, sram_rdata_way1;

    assign sram_rdata_way0 =    ~cache_r        ? 64'b0 :
                                bank_sel_r[ 0]  ? rdata_way0[ 0] :
                                bank_sel_r[ 1]  ? rdata_way0[ 1] :
                                bank_sel_r[ 2]  ? rdata_way0[ 2] :
                                bank_sel_r[ 3]  ? rdata_way0[ 3] :
                                bank_sel_r[ 4]  ? rdata_way0[ 4] :
                                bank_sel_r[ 5]  ? rdata_way0[ 5] :
                                bank_sel_r[ 6]  ? rdata_way0[ 6] :
                                bank_sel_r[ 7]  ? rdata_way0[ 7] :
                                bank_sel_r[ 8]  ? rdata_way0[ 8] :
                                bank_sel_r[ 9]  ? rdata_way0[ 9] :
                                bank_sel_r[10]  ? rdata_way0[10] :
                                bank_sel_r[11]  ? rdata_way0[11] :
                                bank_sel_r[12]  ? rdata_way0[12] :
                                bank_sel_r[13]  ? rdata_way0[13] :
                                bank_sel_r[14]  ? rdata_way0[14] :
                                bank_sel_r[15]  ? rdata_way0[15] :
                                bank_sel_r[16]  ? rdata_way0[16] :
                                bank_sel_r[17]  ? rdata_way0[17] :
                                bank_sel_r[18]  ? rdata_way0[18] :
                                bank_sel_r[19]  ? rdata_way0[19] :
                                bank_sel_r[20]  ? rdata_way0[20] :
                                bank_sel_r[21]  ? rdata_way0[21] :
                                bank_sel_r[22]  ? rdata_way0[22] :
                                bank_sel_r[23]  ? rdata_way0[23] :
                                bank_sel_r[24]  ? rdata_way0[24] :
                                bank_sel_r[25]  ? rdata_way0[25] :
                                bank_sel_r[26]  ? rdata_way0[26] :
                                bank_sel_r[27]  ? rdata_way0[27] :
                                bank_sel_r[28]  ? rdata_way0[28] :
                                bank_sel_r[29]  ? rdata_way0[29] :
                                bank_sel_r[30]  ? rdata_way0[30] :
                                bank_sel_r[31]  ? rdata_way0[31] :
                                bank_sel_r[32]  ? rdata_way0[32] :
                                bank_sel_r[33]  ? rdata_way0[33] :
                                bank_sel_r[34]  ? rdata_way0[34] :
                                bank_sel_r[35]  ? rdata_way0[35] :
                                bank_sel_r[36]  ? rdata_way0[36] :
                                bank_sel_r[37]  ? rdata_way0[37] :
                                bank_sel_r[38]  ? rdata_way0[38] :
                                bank_sel_r[39]  ? rdata_way0[39] :
                                bank_sel_r[40]  ? rdata_way0[40] :
                                bank_sel_r[41]  ? rdata_way0[41] :
                                bank_sel_r[42]  ? rdata_way0[42] :
                                bank_sel_r[43]  ? rdata_way0[43] :
                                bank_sel_r[44]  ? rdata_way0[44] :
                                bank_sel_r[45]  ? rdata_way0[45] :
                                bank_sel_r[46]  ? rdata_way0[46] :
                                bank_sel_r[47]  ? rdata_way0[47] :
                                bank_sel_r[48]  ? rdata_way0[48] :
                                bank_sel_r[49]  ? rdata_way0[49] :
                                bank_sel_r[50]  ? rdata_way0[50] :
                                bank_sel_r[51]  ? rdata_way0[51] :
                                bank_sel_r[52]  ? rdata_way0[52] :
                                bank_sel_r[53]  ? rdata_way0[53] :
                                bank_sel_r[54]  ? rdata_way0[54] :
                                bank_sel_r[55]  ? rdata_way0[55] :
                                bank_sel_r[56]  ? rdata_way0[56] :
                                bank_sel_r[57]  ? rdata_way0[57] :
                                bank_sel_r[58]  ? rdata_way0[58] :
                                bank_sel_r[59]  ? rdata_way0[59] :
                                bank_sel_r[60]  ? rdata_way0[60] :
                                bank_sel_r[61]  ? rdata_way0[61] :
                                bank_sel_r[62]  ? rdata_way0[62] :
                                bank_sel_r[63]  ? rdata_way0[63] : 64'b0;




    assign sram_rdata_way1 =    ~cache_r       ? 64'b0 :
                                bank_sel_r[ 0]  ? rdata_way1[ 0] :
                                bank_sel_r[ 1]  ? rdata_way1[ 1] :
                                bank_sel_r[ 2]  ? rdata_way1[ 2] :
                                bank_sel_r[ 3]  ? rdata_way1[ 3] :
                                bank_sel_r[ 4]  ? rdata_way1[ 4] :
                                bank_sel_r[ 5]  ? rdata_way1[ 5] :
                                bank_sel_r[ 6]  ? rdata_way1[ 6] :
                                bank_sel_r[ 7]  ? rdata_way1[ 7] :
                                bank_sel_r[ 8]  ? rdata_way1[ 8] :
                                bank_sel_r[ 9]  ? rdata_way1[ 9] :
                                bank_sel_r[10]  ? rdata_way1[10] :
                                bank_sel_r[11]  ? rdata_way1[11] :
                                bank_sel_r[12]  ? rdata_way1[12] :
                                bank_sel_r[13]  ? rdata_way1[13] :
                                bank_sel_r[14]  ? rdata_way1[14] :
                                bank_sel_r[15]  ? rdata_way1[15] :
                                bank_sel_r[16]  ? rdata_way1[16] :
                                bank_sel_r[17]  ? rdata_way1[17] :
                                bank_sel_r[18]  ? rdata_way1[18] :
                                bank_sel_r[19]  ? rdata_way1[19] :
                                bank_sel_r[20]  ? rdata_way1[20] :
                                bank_sel_r[21]  ? rdata_way1[21] :
                                bank_sel_r[22]  ? rdata_way1[22] :
                                bank_sel_r[23]  ? rdata_way1[23] :
                                bank_sel_r[24]  ? rdata_way1[24] :
                                bank_sel_r[25]  ? rdata_way1[25] :
                                bank_sel_r[26]  ? rdata_way1[26] :
                                bank_sel_r[27]  ? rdata_way1[27] :
                                bank_sel_r[28]  ? rdata_way1[28] :
                                bank_sel_r[29]  ? rdata_way1[29] :
                                bank_sel_r[30]  ? rdata_way1[30] :
                                bank_sel_r[31]  ? rdata_way1[31] :
                                bank_sel_r[32]  ? rdata_way1[32] :
                                bank_sel_r[33]  ? rdata_way1[33] :
                                bank_sel_r[34]  ? rdata_way1[34] :
                                bank_sel_r[35]  ? rdata_way1[35] :
                                bank_sel_r[36]  ? rdata_way1[36] :
                                bank_sel_r[37]  ? rdata_way1[37] :
                                bank_sel_r[38]  ? rdata_way1[38] :
                                bank_sel_r[39]  ? rdata_way1[39] :
                                bank_sel_r[40]  ? rdata_way1[40] :
                                bank_sel_r[41]  ? rdata_way1[41] :
                                bank_sel_r[42]  ? rdata_way1[42] :
                                bank_sel_r[43]  ? rdata_way1[43] :
                                bank_sel_r[44]  ? rdata_way1[44] :
                                bank_sel_r[45]  ? rdata_way1[45] :
                                bank_sel_r[46]  ? rdata_way1[46] :
                                bank_sel_r[47]  ? rdata_way1[47] :
                                bank_sel_r[48]  ? rdata_way1[48] :
                                bank_sel_r[49]  ? rdata_way1[49] :
                                bank_sel_r[50]  ? rdata_way1[50] :
                                bank_sel_r[51]  ? rdata_way1[51] :
                                bank_sel_r[52]  ? rdata_way1[52] :
                                bank_sel_r[53]  ? rdata_way1[53] :
                                bank_sel_r[54]  ? rdata_way1[54] :
                                bank_sel_r[55]  ? rdata_way1[55] :
                                bank_sel_r[56]  ? rdata_way1[56] :
                                bank_sel_r[57]  ? rdata_way1[57] :
                                bank_sel_r[58]  ? rdata_way1[58] :
                                bank_sel_r[59]  ? rdata_way1[59] :
                                bank_sel_r[60]  ? rdata_way1[60] :
                                bank_sel_r[61]  ? rdata_way1[61] :
                                bank_sel_r[62]  ? rdata_way1[62] :
                                bank_sel_r[63]  ? rdata_way1[63] : 64'b0;
    
    assign sram_rdata = hit_r[0] ? sram_rdata_way0 : 
                        hit_r[1] ? sram_rdata_way1 : 64'b0;

    assign cacheline_old = write_back? lru_r ? sram_rdata_way1 : sram_rdata_way0 : 64'b0;

    assign dcache_rw_over = hit_r[0] | hit[1]; 
 
endmodule



