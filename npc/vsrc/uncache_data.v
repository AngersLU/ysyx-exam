
`include "defines.v"
`timescale 1ns/1ns

module ysyx_2022040010_uncache_data (
    input  wire         clk,
    input  wire         rst,

    input  wire         hit,
    input  wire         uncache,

    input  wire         refresh,
    input  wire [63:0]  axi_rdata, // device reg
    
    output wire [63:0]  device_rdata // send to device / mem
);

    reg [63:0] sram_rdata_r;
    reg hit_r;
    reg uncache_r;

    always @(posedge clk) begin
        if (rst) begin
            hit_r <= 1'b0;
            uncache_r <= 1'b1;
            sram_rdata_r <= 64'b0;
        end
        else begin
            hit_r <= hit;
            uncache_r <= cache;
            sram_rdata_r <= axi_rdata;
        end
    end

    // TODO: is sequential logic required?
    assign sram_rdata = (hit_r & uncache_r) ? sram_rdata_r : 64'b0;

    
endmodule


