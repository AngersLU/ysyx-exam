//riscv64 regs


`include "defines.v"
`timescale 1ns / 1ps
//write back
module ysyx_2022040010_regfile (
    input wire                  clk,
    input wire                  rst,
    input wire [`StallBus]      stall,
    //write port
    input wire                  we,  //wire enable
    input wire [`RegAddrBus]    waddr,
    input wire [`RegBus]        wdata,

    //read port 1
    input wire                  re1,
    input wire [`RegAddrBus]    raddr1,
    output reg [`RegBus]        rdata1,  

    //read port 2
    input wire                  re2,
    input wire [`RegAddrBus]    raddr2, //4:0
    output reg [`RegBus]        rdata2,      //63:0

    output wire [63:0]          regs_o [0:31]
);

    //init number:32 bits:64 regs
    reg[`RegBus] regs[0:`RegNum-1];

    //write handler
    always @(posedge clk) begin
        if (rst == `RstDisable) begin
            if (stall[3]) begin
                // keep
            end
            else if ((we == `WriteEnable) && (waddr != `RegNumLog2'h0)) begin
                regs[waddr] <= wdata;
                // $display("npc-regfile-rd = %x", waddr);
                // $display("npc-regfile-wdata = %x", wdata);
            end
        end
    end

    //read1 handler
    always @(*) begin
        if (rst == `RstEnable) begin
            rdata1 = `ZeroWord;
        end
        else if (raddr1 == `RegNumLog2'h0) begin
            rdata1 = `ZeroWord;
        end
        else if ((raddr1 == waddr) && (we == `WriteEnable) && (re1 == `ReadEnable)) begin//correlation resolution with interal of 2 (RAW)
            rdata1 = wdata;
        end
        else if (re1 == `ReadEnable) begin
            rdata1 = regs[raddr1];
        end
        else begin
            rdata1 = `ZeroWord;
        end
    end

    //read2 handler
    always @(*) begin
        if (rst == `RstEnable) begin
            rdata2 = `ZeroWord;
        end
        else if (raddr2 == `RegNumLog2'h0) begin
            rdata2 = `ZeroWord;
        end
        else if ((raddr2 == waddr) && (we == `WriteEnable) && (re2 == `ReadEnable)) begin
            rdata2 = wdata;
        end
        else if (re2 == `ReadEnable) begin
            rdata2 = regs[raddr2];
        end
        else begin
            rdata2 = `ZeroWord;
        end
    end

    //difftest assignment
	genvar i;
	generate
		for (i = 0; i < 32; i = i + 1) begin
			assign regs_o[i] = (we & waddr == i & i != 0) ? wdata : regs[i];
		end
	endgenerate

endmodule
