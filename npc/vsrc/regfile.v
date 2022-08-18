//riscv64 regs


`include "defines.v"
`timescale 1ns/1ns
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
    output reg [`RegBus]        rdata2      //63:0
);

    //init number:32 bits:64 regs
    reg[`RegBus] regs[0:`RegNum-1];

    import "DPI-C" function void set_gpr_ptr(input logic [63:0] a [] );
    initial set_gpr_ptr(regs);


    //write handle
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

    // import "DPI-C" function void pc_print(input longint pc);

    // always @(posedge clk) begin
    //     pc_print({59'b0, waddr});
    // end 

    //read1 handle
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

    //read2 handle
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

endmodule
