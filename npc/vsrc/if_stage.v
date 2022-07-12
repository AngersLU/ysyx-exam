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



// module ysyx_2022040010_pc_reg (
//     input wire rst,
//     input wire clk,
//     output reg[`InstAddrBus] pc,
//     output reg ce
// );

//     always @(posedge clk) begin
//         if (rst == `RstEnable) begin
//             ce <= `ChipDisable;
//         end
//         else begin
//             ce <= `ChipEnable;
//         end
//     end

//     always @(posedge clk) begin
//         if (ce == `ChipDisable) begin
//             pc <= `InitPc;
//         end
//         else begin
//            pc <= pc + 4'h4;    //inst_mem[+1]
//             // pc <= pc;
//         end
//     end

// endmodule


// //output instruction address
// module ysyx_2022040010_if_id (
//     input wire clk,
//     input wire rst,

//     input wire[`InstAddrBus] if_pc,
//     input wire[`InstBus]     if_inst,

//     output reg[`InstAddrBus]    id_pc,   //pc
//     output reg[`InstBus]        id_inst
// );

// //    reg[31:0] rom[63:0];//memory_size?  where is a inst from?
//     //init rom init image


//     always @(posedge clk) begin
//         if (rst == `RstEnable) begin
//             id_pc <= `ZeroPc;
//             id_inst <= `ZeroInst;
//         end
//         else begin
//             id_pc <= if_pc;
//             id_inst <= if_inst;
//             // $display("%h",if_inst);
//         end
//     end

// endmodule

`include "defines.v"
`timescale 1ns/1ns
module ysyx_2022040010_if (
    input wire clk,
    input wire rst,
    // input wire [`StallBus] stall,

    input wire [`BR_TO_IF_BUS]   br_bus,

    output wire [`IF_TO_ID_BUS] if_to_id_bus,

    output wire isram_e,
    // output wire [ 4: 0] isram_we,
    output wire [63: 0] isram_addr
    // output wire [63: 0] isram_wdata 
);

    reg [63: 0] pc_reg;
    reg ce_reg;
    wire [63: 0] next_pc;
    wire br_e;
    wire [63: 0] br_addr;

    assign {    br_e,
                br_addr
    }   =   br_bus;

    always @( posedge clk ) begin
        if ( rst ) begin
            pc_reg <= `PC_MBASE;
            ce_reg <= 1'b0;
        end
        else begin
            pc_reg <= next_pc;
            ce_reg <= 1'b1;
        end
    end

    assign  next_pc = br_e ? br_addr : pc_reg + 64'h4;

    assign isram_e  = ce_reg;
    // assign isram_we = 5'b0;
    assign isram_addr  = pc_reg;
    // assign isram_wdata = 64'b0; 
    assign if_to_id_bus = {
        ce_reg,    //    64
        pc_reg     //63: 0
    };


    
endmodule


