
`include "defines.v"
`timescale 1ns/1ns

module ysyx_2022040010_arbit (
    input  wire         clk,
    input  wire         rst,
    output wire         stallreq_for_cache,

    // icache interface  // miss  
    input  wire         icache_re_i,    
    input  wire [31:0]  icache_addr_i,
    output wire [63:0]  icache_data_o,  // send to icache
    output wire         icache_refresh_o,

    // dcache interface   // miss & dirty
    input  wire         dcache_re_i,
    input  wire         dcache_we_i,
    input  wire [ 7:0]  dcache_mask_i, // from where
    input  wire [31:0]  dcache_addr_i,
    input  wire [63:0]  dcache_olddata_i,
    output wire [63:0]  dcache_newdata_o,
    output wire         dcache_refresh_o,

    //uncache interface
    input  wire         uncache_re_i,
    input  wire         uncache_we_i,
    input  wire [ 7:0]  uncache_mask_i,
    input  wire [31:0]  uncache_addr_i,
    output wire [63:0]  uncache_rdata_o,  // device read
    input  wire [63:0]  uncache_wdata_i, // device write
    output wire         uncache_refresh_o,

    //axi-rw
    output wire             rw_valid_o,
    input  wire             rw_ready_i, // restart and refresh
    output wire             rw_req_o,
    input  wire [63:0]      data_read_i,
    output wire [63:0]      data_write_o,
    output wire [63:0]      rw_addr_o,
    output wire [1:0]       rw_size_o,
    // input  wire [1:0]       rw_resp_i,
    output wire [3:0]       rw_id_o, // icache / dcache / uncache
    input  wire [3:0]       rw_id_i,
    output wire [7:0]       w_mask_o,

    output wire         stallreq_for_cache // 
);

    // r & refresh
    assign rw_valid_o       =   icache_re_i | dcache_re_i | dcache_we_i | uncache_re_i | uncache_we_i;

    wire   rw_r             =   icache_re_i | dcache_re_i | uncache_re_i;
    wire   rw_w             =   dcache_we_i | uncache_we_i;
    assign rw_req_o         =   rw_r ? 1'b0
                            :   rw_w ? 1'b1;

    assign rw_id_o          =   icache_re_i                 ? 4'b0000
                            :   dcache_re_i  | dcache_we_i  ? 4'b0001
                            :   uncache_re_i | uncache_we   ? 4'b0010; 
    //TODO: no data process
    assign rw_addr_o        =   icache_e_i ? icache_addr_i 
                            :   dcache_e_i ? dcache_addr_i
                            :   uncache_e_i? uncache_addr_i;
    assign rw_size_o        =   size_i; // TODO:
    assign w_mask_o         =   dcache_we_i ? dcache_mask_i
                            :   uncache_we_i? uncache_mask_i;

    assign icache_data_o    =   (~r_id_i[0] & rw_ready_i) ? data_read_i : 64'b0; 
    assign dcache_newdata_o =   ( r_id_i[0] & rw_ready_i) ? data_read_i : 64'b0;
    assign uncache_rdata_o  =   ( r_id_i[1] & rw_ready_i) ? data_read_i : 64'b0;

    assign icache_refresh   =   ~r_id_i[0] ? rw_ready_i : 1'b0; 
    assign dcache_refresh   =    r_id_i[0] ? rw_ready_i : 1'b0;
    assign uncache_refresh  =    r_id_i[1] ? rw_ready_i : 1'b0;

    assign stallreq_for_cache   = rw_r | rw_w; // stall 


endmodule



