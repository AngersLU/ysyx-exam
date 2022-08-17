//instrution fetch IF

// //ifu = pe_shift + pc_reg
// module ifu (
//     input wire rst,
//     input wire clk,
//     output wire[63:0] id_pc,
//     output wire[31:0] id_inst
// );
//     //pc_reg need
//     wire [63:0] pc;//wire or beg? TODO:
//     wire pc_reg_ce;
//     //pc_if_id need
//     wire [31:0] inst_out;//TODO:need memread(pc);

//     //pc init
//     pc_reg pc_reg0(
//         .rst(rst),
//         .clk(clk),
//         .pc(pc),
//         .ce(pc_reg_ce));

//     //pc_reg+if init
//     pc_if_id pc_if_id0(.rst(rst),
//                        .clk(clk),
//                        .if_pc(pc),
//                        .if_inst(inst_out)
//                        .id_pc(id_pc),
//                        .id_inst(id_inst));

// endmodule

`include "defines.v"

module ysyx_2022040010_pc_reg (
    input wire rst,
    input wire clk,
    output reg[`InstAddrBus] pc,
    output reg ce
);

    always @(posedge clk) begin
        if (rst == `RstEnable) begin
            ce <= `ChipDisable;
        end
        else begin
            ce <= `ChipEnable;
        end
    end

    always @(posedge clk) begin
        if (ce == `ChipDisable) begin
            pc <= `InitPc;
        end
        else begin
           pc <= pc + 4'h4;    //inst_mem[+1]
            // pc <= pc;
        end
    end

endmodule


//output instruction address
module ysyx_2022040010_if_id (
    input wire clk,
    input wire rst,

    input wire[`InstAddrBus] if_pc,
    input wire[`InstBus]     if_inst,

    output reg[`InstAddrBus]    id_pc,   //pc
    output reg[`InstBus]        id_inst
);

//    reg[31:0] rom[63:0];//memory_size?  where is a inst from?
    //init rom init image


    always @(posedge clk) begin
        if (rst == `RstEnable) begin
            id_pc <= `ZeroPc;
            id_inst <= `ZeroInst;
        end
        else begin
            id_pc <= if_pc;
            id_inst <= if_inst;
            // $display("%h",if_inst);
        end
    end

endmodule

