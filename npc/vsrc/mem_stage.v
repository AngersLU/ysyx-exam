//visit memory

// module memu (
//     input wire rst,

//     //information for executing state
//     input wire[`RegAddrBus] w_rd_addr_i,
//     input wire              w_reg_e_i,
//     input wire[`RegBus]     w_data_i,

//     ///mem
//     output reg[`RegAddrBus] wb_w_rd_addr,
//     output reg              wb_w_reg_e,
//     output reg[`RegBus]     wb_w_data
// );

// endmodule


`include "defines.v"

// module ysyx_2022040010_mem (
//     input wire rst,

//     //information for executing state
//     input wire[`RegAddrBus] w_rd_addr_i,
//     input wire              w_reg_e_i,
//     input wire[`RegBus]     w_data_i,

//     //result from mem state
//     output reg[`RegAddrBus] w_rd_addr_o,
//     output reg              w_reg_e_o,
//     output reg[`RegBus]     w_data_o
// );

//     always @(*) begin
//         if (rst == `RstEnable) begin
//             w_rd_addr_o <= `ZeroRegAddr;
//             w_reg_e_o   <= `WriteDisable;
//             w_data_o    <= `ZeroWord;
//         end
//         else begin
//             w_rd_addr_o <= w_rd_addr_i;
//             // $display("%h",w_rd_addr_o);
//             w_reg_e_o   <= w_reg_e_i;
//             w_data_o    <= w_data_i;
//         end
//     end

// endmodule

// module ysyx_2022040010_mem_wb (
//     input wire clk,
//     input wire rst,

//     //result from mem state
//     input wire[`RegAddrBus] mem_w_rd_addr,
//     input wire              mem_w_reg_e,
//     input wire[`RegBus]     mem_w_data,

//     output reg[`RegAddrBus] wb_w_rd_addr,
//     output reg              wb_w_reg_e,
//     output reg[`RegBus]     wb_w_data
// );

//     always @(posedge clk) begin
//         if (rst == `RstEnable) begin
//             wb_w_rd_addr <= `ZeroRegAddr;
//             wb_w_reg_e   <= `WriteDisable;
//             wb_w_data    <= `ZeroWord;
//         end
//         else begin
//             wb_w_rd_addr <= mem_w_rd_addr;
//             // $display("%h",wb_w_rd_addr);
//             wb_w_reg_e   <= mem_w_reg_e;
//             // $display("%h",wb_w_reg_e);
//             wb_w_data    <= mem_w_data;
//             // $display("%h",wb_w_data);
//         end
//     end

// endmodule


/*
    memu
    read dsram(load instruction)
    dsram need to update data before memu
    so, exu nee to output dsram(store instruction)
*/


module ysyx_2022040010_mem (
    input wire clk,
    input wire rst,

    // input wire [`StallBus] stall,

//this input data depend on C++ code judgement
    input wire [63: 0] dsram_rdata,

    input  wire [`EX_TO_MEM_BUS] ex_to_mem_bus, 

    output wire [`MEM_TO_WB_BUS] mem_to_wb_bus,

    output wire [`BS_RF_BUS]     mem_to_rf_bus
);

    reg [`MEM_TO_WB_BUS] ex_to_mem_bus_r;
    reg [63: 0] data_sram_rdata_r; 


    //TODO:not understand stall & flag
    reg flag;
    reg [31: 0] dsram_rdata_buffer; 


    always @(posedge clk) begin
        if ( rst ) begin
            ex_to_mem_bus_r     <= `EX_TO_MEM_WD'b0;
            dsram_rdata_r       <= 64'b0; 
        end
        else begin
            ex_to_mem_bus_r     <= ex_to_mem_bus;
            dsram_rdata_r       <= dsram_rdata;
        end
    end

    wire [ 6: 0] load_op;
    wire [31: 0] mem_pc;
    wire dram_e;
    wire dram_we;
    wire [ 3: 0] sel_lsu_byte;
    wire sel_rf_sel;
    wire rf_we;
    wire [ 4: 0] rf_waddr;
    wire [63: 0] ex_result;
// 0 regfiel res from alu_res ; 1 form ld_res
    wire sel_rf_res;

    assign  {
        load_op,     //143:137
        ex_pc,      //136:73 
        dram_e,     //    72
        dram_we,    //    71 TODO:NOT USE
        sel_lsu_byte,//70:67
        //0 form alu_res, 1 from ld_res
        sel_rf_res, //    66
        rf_we,      //    65
        rf_waddr,   // 68:64
        ex_result   // 63: 0
    }   = ex_to_mem_bus;

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

    assign b_data = sel_lsu_byte[0] ? dsram_rdata[ 7: 0] : 8'b0;
    assign h_data = sel_lsu_byte[1] ? dsram_rdata[15: 0] : 16'b0;
    assign w_data = sel_lsu_byte[2] ? dsram_rdata[31: 0] : 32'b0;
    assign d_data = sel_lsu_byte[3] ? dsram_rdata[63: 0] : 64'b0;

    assign mem_result = inst_lb     ?   { {56{b_data[7]}} , b_data} :
                        inst_lbu    ?   { {56'b0},b_data } :
                        inst_lh     ?   { {48{h_data[15]}}, h_data} :
                        inst_lhu    ?   { {48'b0},h_data } :
                        inst_lw     ?   { {32{w_data[31]}, w_data}} :
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




