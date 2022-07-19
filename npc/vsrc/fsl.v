
`include "defines.v"
`timescale 1ns/1ns

//five stage assembly line
module ysyx_2022040010_fsl (
    input wire clk,
    input wire rst,
    // input wire [5:0] int,

    output wire isram_e,
    output wire [63: 0] isram_addr,
    input  wire [31: 0] isram_rdata,

    output wire dsram_e,
    output wire dsram_we,
    output wire [63: 0] dsram_addr,
    output wire [63: 0] dsram_wdata,
    output wire [ 7: 0] dsram_sel,
    input  wire [63: 0] dsram_rdata,

    output wire [63: 0] debug_wb_pc,
    output wire bubble

);

    wire [`IF_TO_ID_BUS]    if_to_id_bus;
    wire [`ID_TO_EX_BUS]    id_to_ex_bus;
    wire [`EX_TO_MEM_BUS]   ex_to_mem_bus;
    wire [`MEM_TO_WB_BUS]   mem_to_wb_bus;
    //EX_TO_IF 
    wire [`BR_TO_IF_BUS]    br_bus;

    //bypass
    wire [`BP_TO_RF_BUS]    ex_to_rf_bus;
    wire [`BP_TO_RF_BUS]    mem_to_rf_bus;
    wire [`BP_TO_RF_BUS]    wb_to_rf_bus;

    wire [`StallBus] stall;
    wire stallreq_for_load;
    wire stallreq_for_bru;
    wire stallreq_for_ex;

    wire [63: 0] dsram_rdata_v;
    assign dsram_rdata_v = dsram_rdata;

    ysyx_2022040010_if ifu  ( 
        .clk                (clk                ),
        .rst                (rst                ),
        .stall              (stall              ),
        .br_bus             (br_bus             ),
        .if_to_id_bus       (if_to_id_bus       ),
        .isram_e            (isram_e            ),
        .isram_addr         (isram_addr         )
    );

    ysyx_2022040010_id  idu (
        .clk                (clk                ),
        .rst                (rst                ),
        .stall              (stall              ),
        .if_to_id_bus       (if_to_id_bus       ),
        .isram_rdata        (isram_rdata        ),
        .ex_to_rf_bus       (ex_to_rf_bus       ),
        .mem_to_rf_bus      (mem_to_rf_bus      ),
        .wb_to_rf_bus       (wb_to_rf_bus       ),

        .id_to_ex_bus       (id_to_ex_bus       )
    );

    ysyx_2022040010_ex  exu (
        .clk                (clk                ),
        .rst                (rst                ),
        .stall              (stall              ),
        .stallreq_for_ex    (stallreq_for_ex    ),
        .stallreq_for_load  (stallreq_for_load  ),
        .stallreq_for_bru   (stallreq_for_bru   ),
        .id_to_ex_bus       (id_to_ex_bus       ),
        .ex_to_mem_bus      (ex_to_mem_bus      ),
        .ex_to_rf_bus       (ex_to_rf_bus       ),
        .br_bus             (br_bus             ),
        .dsram_e            (dsram_e            ),
        .dsram_we           (dsram_we           ),
        .dsram_addr         (dsram_addr         ),
        .dsram_wdata        (dsram_wdata        ),
        .dsram_sel          (dsram_sel          ),
        .dsram_rdata        (dsram_rdata_v      )
    );

    ysyx_2022040010_mem memu(
        .clk                (clk                ),
        .rst                (rst                ),
        .ex_to_mem_bus      (ex_to_mem_bus      ),
        .mem_to_wb_bus      (mem_to_wb_bus      ),
        .mem_to_rf_bus      (mem_to_rf_bus      )
    );

    ysyx_2022040010_wb wbu  (
        .clk                (clk                ),
        .rst                (rst                ),
        .mem_to_wb_bus      (mem_to_wb_bus      ),
        .wb_to_rf_bus       (wb_to_rf_bus       ),
        .debug_wb_pc        (debug_wb_pc        ),
        .bubble             (bubble             )
    );

    ysyx_2022040010_stall stallu (
        .rst                (rst                ),
        .stallreq_for_ex    (stallreq_for_ex    ),
        .stallreq_for_bru   (stallreq_for_bru   ),
        .stallreq_for_load  (stallreq_for_load  ),
        .stall              (stall              ) 
    );

endmodule

