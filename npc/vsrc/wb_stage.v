
`include "defines.v"
`timescale 1ns/1ns

module ysyx_2022040010_wb ( 
    input wire clk,
    input wire rst,

    input wire [`MEM_TO_WB_BUS]   mem_to_wb_bus,
//actually wb_to_id
    output wire [`BP_TO_RF_BUS]   wb_to_rf_bus, 
    output wire [63: 0] debug_wb_pc,
    output wire [63: 0] debug_wb_npc,
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

    wire rf_we;
    wire [ 4: 0] rf_waddr;
    wire [63: 0] rf_wdata;
    wire [ 1: 0] sp_bus;
    wire op_sp;


    //pc-debug_tool
    wire [63: 0] wb_pc;
    wire [63: 0] next_pc;

    assign { 
        sp_bus, //  sp_bus[0] ebreak() sp_bus[1] ecall()
        op_sp,  //  sp_e
        next_pc,
        wb_pc,   
        rf_we,   
        rf_waddr,   
        rf_wdata
    }   = mem_to_wb_bus_r;

    // difftest need pc  
    assign debug_wb_pc  = wb_pc;
    assign debug_wb_npc = next_pc;
    assign bubble = (wb_pc == 64'b0) ? 1'b1 : 1'b0;

    assign wb_to_rf_bus = {
        rf_we,
        rf_waddr,
        rf_wdata
    };



    //sp_handle
    import "DPI-C" function void ebreak;
    always @ (*) begin
        if(op_sp == 1 & sp_bus[0] == 1) begin
            ebreak();
        end
        else if ( op_sp == 1 & sp_bus[1] == 1) begin
            // ecall();//TODO: no finished yet
        end
    end



endmodule


