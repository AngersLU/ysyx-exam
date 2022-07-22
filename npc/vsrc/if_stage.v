
`include "defines.v"
`timescale 1ns/1ns
module ysyx_2022040010_if (
    input wire clk,
    input wire rst,
    input wire [`StallBus] stall,

    input wire [`BR_TO_IF_BUS]   br_bus,

    output wire [`IF_TO_ID_BUS] if_to_id_bus,

    output wire isram_e,
    output wire [63: 0] isram_addr
);

    reg [63: 0] pc_reg;
    reg ce_reg;
    wire [63: 0] next_pc;
    wire br_e;
    wire [63: 0] br_addr;

    assign {    br_e,
                br_addr
    }   =   br_bus;

    assign isram_e  = ce_reg;
    assign isram_addr  = pc_reg;

    always @( posedge clk ) begin
        if ( rst ) begin
            pc_reg <= `PC_START;
            ce_reg <= 1'b0;
        end
        else begin
            // pc_reg <= 64'h0000_0000_8000_0000
            pc_reg <= next_pc;
            ce_reg <= 1'b1;
        end
        // else if(stall[5] == 1'b0 ) begin
        //     pc_reg <= next_pc;
        //     ce_reg <= 1'b1;
        //     next_pc <= br_e ? br_addr : pc_reg + 64'h4;
        // end
    end

    assign next_pc = br_e ? br_addr : pc_reg + 64'h4;





    // assign  next_pc = br_e ? br_addr : (pc_reg + 64'h4);    

    wire [63: 0] if_pc;
    assign if_pc = (pc_reg == `PC_START) ? 64'b0 : pc_reg;
    assign if_to_id_bus = {
        ce_reg,    //   64
        if_pc     //63: 0
    };


       
    
    
endmodule


