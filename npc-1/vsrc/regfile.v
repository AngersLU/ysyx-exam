//riscv64 regs


`include "defines.v"

//write back
module ysyx_2022040010_regfile (
    input wire clk,
    input wire rst,

    //write port
    input wire we,  //wire enable
    input wire[`RegAddrBus] waddr,
    input wire[`RegBus]     wdata,

    //read port 1
    input wire re1,
    input wire[`RegAddrBus] raddr1,
    output reg[`RegBus]     rdata1,  //TODO:why this line use reg?

    //read port 2
    input wire re2,
    input wire[`RegAddrBus] raddr2, //4:0
    output reg[`RegBus]     rdata2      //63:0
);
    //init number:32 bits:64 regs
    reg[`RegBus] regs[0:`RegNum-1];

    //write handle
    always @(posedge clk) begin
        if (rst == `RstDisable) begin
            if ((we == `WriteEnable) && (waddr != `RegNumLog2'h0)) begin
                regs[waddr] <= wdata;
                $display("rd = %h", wdata);
            end
        end
    end

    //read1 handle
    always @(*) begin
        if (rst == `RstEnable) begin
            rdata1 <= `ZeroWord;
        end
        else if (raddr1 == `RegNumLog2'h0) begin
            rdata1 <= `ZeroWord;
        end
        else if ((raddr1 == waddr) && (we == `WriteEnable) && (re1 == `ReadEnable)) begin
            rdata1 <= wdata;
        end
        else if (re1 == `ReadEnable) begin
            rdata1 <= regs[raddr1];
        end
        else begin
            rdata1 <= `ZeroWord;
        end
    end

    //read2 handle
    always @(*) begin
        if (rst == `RstEnable) begin
            rdata2 <= `ZeroWord;
        end
        else if (raddr2 == `RegNumLog2'h0) begin
            rdata2 <= `ZeroWord;
        end
        else if ((raddr2 == waddr) && (we == `WriteEnable) && (re2 == `ReadEnable)) begin
            rdata2 <= wdata;
        end
        else if (re2 == `ReadEnable) begin
            rdata2 <= regs[raddr2];
        end
        else begin
            rdata2 <= `ZeroWord;
        end
    end

endmodule
