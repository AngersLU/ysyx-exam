
`include "defines.v"
`timescale 1ns/1ns

module ysyx_2022040010_wb ( 
    input wire clk,
    input wire rst,

    input wire [`MEM_TO_WB_BUS]   mem_to_wb_bus,
//actually wb_to_id
    output wire [`BP_TO_RF_BUS]   wb_to_rf_bus, 
    output wire [63: 0] debug_wb_pc,
    output wire bubble
);

    reg [`MEM_TO_WB_BUS]   mem_to_wb_bus_r;

    always @( posedge clk ) begin
        if ( rst ) begin
            mem_to_wb_bus_r <= `MEM_TO_WB_WD'b0;
        end
        else begin
            mem_to_wb_bus_r <= mem_to_wb_bus;
        end
    end


    //pc-debug_tool
    wire [63: 0] wb_pc;
    wire rf_we;
    wire [ 4: 0] rf_waddr;
    wire [63: 0] rf_wdata;

    assign {    wb_pc,   
                rf_we,   
                rf_waddr,   
                rf_wdata
    }   =   mem_to_wb_bus_r;

    // difftest need pc  
    assign debug_wb_pc  = wb_pc;
    assign bubble = wb_pc[63] ? 1'b0 : 1'b1;

    assign wb_to_rf_bus = {
        rf_we,
        rf_waddr,
        rf_wdata
    };



endmodule


