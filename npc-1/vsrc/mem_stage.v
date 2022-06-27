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

module ysyx_2022040010_mem (
    input wire rst,

    //information for executing state
    input wire[`RegAddrBus] w_rd_addr_i,
    input wire              w_reg_e_i,
    input wire[`RegBus]     w_data_i,

    //result from mem state
    output reg[`RegAddrBus] w_rd_addr_o,
    output reg              w_reg_e_o,
    output reg[`RegBus]     w_data_o
);

    always @(*) begin
        if (rst == `RstEnable) begin
            w_rd_addr_o <= `ZeroRegAddr;
            w_reg_e_o   <= `WriteDisable;
            w_data_o    <= `ZeroWord;
        end
        else begin
            w_rd_addr_o <= w_rd_addr_i;
            // $display("%h",w_rd_addr_o);
            w_reg_e_o   <= w_reg_e_i;
            w_data_o    <= w_data_i;
        end
    end

endmodule

module ysyx_2022040010_mem_wb (
    input wire clk,
    input wire rst,

    //result from mem state
    input wire[`RegAddrBus] mem_w_rd_addr,
    input wire              mem_w_reg_e,
    input wire[`RegBus]     mem_w_data,

    output reg[`RegAddrBus] wb_w_rd_addr,
    output reg              wb_w_reg_e,
    output reg[`RegBus]     wb_w_data
);

    always @(posedge clk) begin
        if (rst == `RstEnable) begin
            wb_w_rd_addr <= `ZeroRegAddr;
            wb_w_reg_e   <= `WriteDisable;
            wb_w_data    <= `ZeroWord;
        end
        else begin
            wb_w_rd_addr <= mem_w_rd_addr;
            // $display("%h",wb_w_rd_addr);
            wb_w_reg_e   <= mem_w_reg_e;
            // $display("%h",wb_w_reg_e);
            wb_w_data    <= mem_w_data;
            // $display("%h",wb_w_data);
        end
    end

endmodule
