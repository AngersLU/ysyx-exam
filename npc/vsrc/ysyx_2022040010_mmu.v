
`include "defines.v"
`timescale 1ns / 1ps
// virtual address -> physical address
// memory manage unit
module ysyx_2022040010_mmu (
    input  wire         rst, 
    input  wire  [63:0] addr_i,
    output wire         cache_o,
    output wire         uncache_o
);

    //the mmu needs to be modified after adding peripheral device
    // assign addr_o = addr_i - `CONFIG_MBASE;
    wire high ,low;
    wire cache;
    wire start = addr_i == `PC_START;

    assign high = addr_i >= `CONFIG_MBASE;
    assign low  = addr_i <= (`CONFIG_MBASE + `CONFIG_MSIZE);
    assign cache = high & low;
    assign cache_o = cache;
    assign uncache_o = ~cache & ~start;
    
endmodule

