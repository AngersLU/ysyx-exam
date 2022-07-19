
/*
    memu
    read dsram(load instruction)
    dsram need to update data before memu
    so, exu nee to output dsram(store instruction)
*/
`include "defines.v"
`timescale 1ns/1ns

module ysyx_2022040010_mem (
    input wire clk,
    input wire rst,

    // input wire [`StallBus] stall,

//this input data depend on C++ code judgement
    // input wire [63: 0] dsram_rdata,

    input  wire [`EX_TO_MEM_BUS] ex_to_mem_bus, 

    output wire [`MEM_TO_WB_BUS] mem_to_wb_bus,

    output wire [`BP_TO_RF_BUS]  mem_to_rf_bus

);

    reg [`EX_TO_MEM_BUS] ex_to_mem_bus_r;


    //TODO:not understand stall & flag
    reg flag;
    // reg [31: 0] dsram_rdata_buffer; 


    always @(posedge clk) begin
        if (rst) begin
            ex_to_mem_bus_r     <= `EX_TO_MEM_WD'b0;
        end
        else begin
            ex_to_mem_bus_r     <= ex_to_mem_bus;
        end
    end

    wire [63: 0] dsram_rdata;
    wire [ 6: 0] load_op;
    wire [63: 0] mem_pc;
    wire dram_e;
    wire dram_we;
    wire [ 3: 0] sel_lsu_byte;
    wire sel_rf_sel;
    wire rf_we;
    wire [ 4: 0] rf_waddr;
    wire [63: 0] ex_result;
// 0 regfiel res from alu_res ; 1 form ld_res
    wire sel_rf_res;    
    wire [63: 0] mem_pc;

    assign  {
        dsram_rdata,
        load_op,     //143:137
        mem_pc,      //136:73 
        dram_e,     //    72
        dram_we,    //    71 TODO:NOT USE
        sel_lsu_byte,//70:67
        //0 form alu_res, 1 from ld_res
        sel_rf_res, //    66
        rf_we,      //    65
        rf_waddr,   // 68:64
        ex_result   // 63: 0
    }   = ex_to_mem_bus_r;

// load part
    wire inst_lb,   inst_lh,    inst_lw,    inst_ld;    
    wire inst_lbu,  inst_lhu,   inst_lwu;

    assign {    inst_lb,    inst_lh,    inst_lw,        inst_ld,
                inst_lbu,   inst_lhu,   inst_lwu
    }   =   load_op;

    wire [ 7: 0] b_data;
    wire [15: 0] h_data;
    wire [31: 0] w_data;
    wire [63: 0] d_data;
    wire [63: 0] mem_result;
    wire [63: 0] rf_wdata;

    assign b_data = sel_lsu_byte[0] ? dsram_rdata[ 7: 0] : 8'b0;
    assign h_data = sel_lsu_byte[1] ? dsram_rdata[15: 0] : 16'b0;
    assign w_data = sel_lsu_byte[2] ? dsram_rdata[31: 0] : 32'b0;
    assign d_data = sel_lsu_byte[3] ? dsram_rdata[63: 0] : 64'b0;

    assign mem_result = inst_lb     ?   { {56{b_data[7]}} , b_data} :
                        inst_lbu    ?   { {56'b0},b_data } :
                        inst_lh     ?   { {48{h_data[15]}}, h_data} :
                        inst_lhu    ?   { {48'b0},h_data } :
                        inst_lw     ?   { {32{w_data[31]}}, w_data} :
                        inst_lwu    ?   { {32'b0},w_data } :
                        inst_ld     ?   d_data  : 64'b0;

    assign rf_wdata = sel_rf_res & dram_e ? mem_result : ex_result;

    assign mem_to_wb_bus = {
        mem_pc,     //133:70
        rf_we,      //    69
        rf_waddr,   // 68:64
        rf_wdata    // 63: 0
    };

    assign mem_to_rf_bus = {
        rf_we,
        rf_waddr,
        rf_wdata
    };


    
endmodule




