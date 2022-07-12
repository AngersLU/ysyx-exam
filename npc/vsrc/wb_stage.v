//write back

//`include "defines.v"

// module wbu (
//     input wire clk,
//     input wire rst,

//     input reg[`RegAddrBus] wb_w_rd_addr,
//     input reg              wb_w_reg_e,
//     input reg[`RegBus]     wb_w_data

// );

//     regfiel regfile0(.clk(clk),
//                      .rst(rst),
//                      .we(wb_w_reg_e),
//                      .waddr(wb_w_rd_addr),
//                      .re1(),
//                      .raddr1(),
//                      .rdata1());

// endmodule

`include "defines.v"
`timescale 1ns/1ns

module ysyx_2022040010_wb ( 
    input wire clk,
    input wire rst,

    input wire [`MEM_TO_WB_BUS]   mem_to_wb_bus,
//actually wb_to_id
    output wire [`BP_TO_RF_BUS]   wb_to_rf_bus 
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

    assign wb_to_rf_bus = {
        rf_we,
        rf_waddr,
        rf_wdata
    };



endmodule


