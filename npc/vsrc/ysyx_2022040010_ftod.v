
`include "defines.v"
`timescale 1ns / 1ps
module ysyx_2022040010_ftod (
    input wire clk,
    input wire rst,
    input wire [`StallBus] stall,
    input wire [`IF_TO_ID_BUS] if_to_id_bus_i,
    input wire [63:0] inst_i,

    output wire [`IF_TO_ID_BUS] if_to_id_bus_o,
    output wire [31:0] inst_o

);

    reg [31:0] buf_inst;
    reg [`IF_TO_ID_BUS] buf_if_to_id_bus;

    always @(posedge clk) begin
        if (rst) begin
            buf_if_to_id_bus  <= `IF_TO_ID_WD'b0;
            buf_inst          <= 32'b0; 
        end
        else begin
            if (stall[3]) begin
                // keep
                buf_inst <= (inst_i!=32'b0) ? inst_i : buf_inst;
            end
            else if (stall[2]) begin
                buf_if_to_id_bus <= `IF_TO_ID_WD'b0;
                buf_inst         <= 32'b0;
            end
            else begin
                buf_if_to_id_bus <= if_to_id_bus_i;
                buf_inst         <= inst_i;
            end
        end
    end
    
    assign if_to_id_bus_o = buf_if_to_id_bus;
    assign inst_o = buf_inst;
    
endmodule