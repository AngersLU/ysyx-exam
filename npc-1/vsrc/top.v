//sopc = fsl + rom

`include "defines.v"

module ysyx_2022040010_top (
    input wire clk,
    input wire rst
);

    wire[`InstAddrBus]  inst_addr;
    wire[`InstBus]      inst_data;
    wire                inst_ce;

    ysyx_2022040010_fsl ysyx_2022040010_fsl0(   .clk(clk),
                .rst(rst),
                .inst_data_i(inst_data),

                .inst_addr_o(inst_addr),//->inst_rom0.addr
                .inst_ce_o(inst_ce) );//->inst_rom0.ce

    ysyx_2022040010_inst_rom ysyx_2022040010_inst_rom0( .ce(inst_ce),
                        .addr(inst_addr),

                        .inst(inst_data)    );
                        //->fsl0.inst_data_i

endmodule
