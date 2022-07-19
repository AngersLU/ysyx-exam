
`include "defines.v"
`timescale 1ns/1ns
module ysyx_2022040010_if (
    input wire clk,
    input wire rst,
    input wire [`StallBus] stall,

    input wire [`BR_TO_IF_BUS]   br_bus,

    output wire [`IF_TO_ID_BUS] if_to_id_bus,

    output wire isram_e,
    // output wire [ 4: 0] isram_we,
    output wire [63: 0] isram_addr
    // output wire [63: 0] isram_wdata 
);

    reg [63: 0] pc_reg;
    reg ce_reg;
    wire [63: 0] next_pc;
    wire br_e;
    wire [63: 0] br_addr;

    assign {    br_e,
                br_addr
    }   =   br_bus;

    always @( posedge clk ) begin
        if ( rst == 1'b1 ) begin
            pc_reg <= `PC_MBASE;
            ce_reg <= 1'b0;
        end
        else if(stall[5] == 1'b0 ) begin
            pc_reg <= next_pc;
            ce_reg <= 1'b1;
        end
    end

    assign  next_pc = br_e ? br_addr : pc_reg + 64'h4;

    assign isram_e  = ce_reg;
    // assign isram_we = 5'b0;
    assign isram_addr  = pc_reg;
    // assign isram_wdata = 64'b0; 
    assign if_to_id_bus = {
        ce_reg,    //    64
        pc_reg     //63: 0
    };


    
endmodule


