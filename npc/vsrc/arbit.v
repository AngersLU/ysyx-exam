

`include "defines.v"
`timescale 1ns/1ns

module arbit (
    input wire          clk,
    input wire          rst,

    // icache interface  // miss  
    input  wire         icache_re_i,
    input  wire [31:0]  icache_addr_i,
    output wire [63:0]  icache_data_o,  // send to icache


    // dcache interface   // miss & dirty
    input  wire         dcache_re_i,
    input  wire         dcache_we_i,
    input  wire [ 7:0]  dcache_mask_i, // from where
    input  wire [31:0]  dcache_addr_i,
    input  wire [63:0]  dcache_olddata_i,
    output wire [63:0]  dcache_newdata_o,

    //uncache interface
    input  wire         uncache_re_i,
    input  wire         uncache_we_i,
    input  wire [ 7:0]  uncache_mask_i,
    input  wire [31:0]  uncache_addr_i,
    input  wire [63:0]  uncache_writedata_i, // device write
    output wire [63:0]  uncache_readdata_o,  // device read

    output wire         ar_e_o, 
    output wire         ar_id_o,
    output wire [31:0]  ar_addr_o,
    input  wire [63:0]  r_data_i, // from axi4 -> icache_data_o
    input  wire         r_id_i,
    input  wire         r_over_i, 

    output wire         aw_e_o,
    output wire [31:0]  aw_addr_o,
    output wire [63:0]  w_data_o,
    output wire [ 7:0]  w_mask_o

);

    // r
    assign ar_e_o           =   icache_re_i | dcache_re_i | uncache_re_i;
    assign ar_id_o          =   icache_re_i ? 1'b0
                            :   dcache_re_i ? 1'b1
                            :   uncache_re_i? 1'b1;
    assign ar_addr_o        =   icache_re_i ? icache_addr_i 
                            :   dcache_re_i ? dcache_addr_i
                            :   uncache_re_i? uncache_addr_i;
    assign icache_data_o    =   (~r_id_i & r_over_i) ? r_data_i : 64'b0; 
    assign dcache_newdata_o =   ( r_id_i & r_over_i) ? r_data_i : 64'b0;
    assign uncache_readdata_o = ( r_id_i & r_over_i) ? r_data_i : 64'b0;

    // w
    assign aw_e_o           =   dcache_we_i | uncache_we_i;
    assign aw_addr_o        =   dcache_we_i ? dcache_addr_i
                            :   uncache_we_i? uncache_addr_i;
    assign w_data_o         =   dcaache_we_i? dcache_olddata_i
                            :   uncache_we_i? uncache_writedata_i;
    assign w_mask_o         =   dcache_we_i ? dcache_mask_i
                            |   uncache_we_i? uncache_mask_i;

    
endmodule



