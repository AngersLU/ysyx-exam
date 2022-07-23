

`include "defines.v"
`timescale 1ns/1ns

module top (
    input wire clk,
    input wire rst,

    output wire isram_e,
    output wire [63: 0] isram_addr,
    input wire [31: 0] isram_rdata,

    output wire dsram_e,
    output wire dsram_we,
    // output wire [63: 0] dsram_addr,
    // output wire [63: 0] dsram_wdata,
    // output wire [ 7: 0] dsram_sel,
    // input wire  [63: 0] dsram_rdata

    output wire [63: 0] debug_wb_pc,
    output wire [63: 0] debug_wb_npc,
    output wire bubble
);

    import "DPI-C" function void mem_read (
        input longint raddr, output longint rdata );
    import "DPI-C" function void mem_write (
        input longint waddr, input longint wdata, input byte wmask ); 
    wire [63: 0] dsram_addr;
    wire [63: 0] dsram_wdata;
    wire [ 7: 0] dsram_sel;
    wire [63: 0] dsram_rdata;
    always @(*) begin
        mem_read(dsram_addr, dsram_rdata);
        mem_write(dsram_addr, dsram_wdata, dsram_sel);
    end

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
        .dsram_rdata    (dsram_rdata ),
        .debug_wb_pc    (debug_wb_pc ),
        .debug_wb_npc   (debug_wb_npc),
        .bubble         (bubble      )
    );


endmodule
