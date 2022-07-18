

`include "defines.v"
`timescale 1ns/1ns

module top (
    input wire clk,
    input wire rst,

    output wire isram_e,
    // output wire isram_we,
    output wire [63: 0] isram_addr,
    // output wire [63: 0] isram_wdata,
    input wire [31: 0] isram_rdata,

    output wire dsram_e,
    output wire dsram_we,
    output wire [63: 0] dsram_addr,
    // software selects the bit width for storage
    // dsram_we == 4'b0001  dsram_wdata[ 7: 0] 
    // dsram_we == 4'b0010  dsram_wdata[16: 0]
    // dsram_we == 4'b0100  dsram_wdata[31: 0]
    // dsram_we == 4'b1000  dsram_wdata[64: 0]
    output wire [63: 0] dsram_wdata,
    output wire [ 3: 0] dsram_sel,
    input wire  [63: 0] dsram_rdata

    // output wire [63: 0] debug_wb_pc,
    // output wire [ 3: 0] debug_wb_rf_we,
    // output wire [ 4: 0] debug_wb_rf_waddr,
    // output wire [63: 0] debug_wb_rf_wdata 
);

    // wire [63: 0] isram_addr_v, dsram_addr_v; 

    ysyx_2022040010_fsl fslu (
        .clk            (clk         ),
        .rst            (rst         ),
        .isram_e        (isram_e     ),
        .isram_addr     (isram_addr  ),
        .isram_rdata    (isram_rdata ),
        .dsram_e        (dsram_e     ),
        .dsram_we       (dsram_we    ),
        .dsram_addr     (dsram_addr  ),
        .dsram_wdata    (dsram_wdata ),
		.dsram_sel		(dsram_sel	 ),
        .dsram_rdata    (dsram_rdata )
    );


endmodule
