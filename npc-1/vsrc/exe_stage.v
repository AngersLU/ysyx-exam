//exe

// module exeu (
//     input ,
//     output
// );


// endmodule

`include "defines.v"

module ysyx_2022040010_ex (
    input wire rst,

    //information sent form decoding state to execution stage
    input wire[`AluOpBus]   aluop_i,
    input wire[`AluSelBus]  alusel_i,
    input wire[`RegBus]     reg1_i,
    input wire[`RegBus]     reg2_i,
    input wire[`RegAddrBus] w_rd_addr_i,
    input wire              w_reg_e_i,

    //execution result
    output reg[`RegAddrBus] w_rd_addr_o,
    output reg              w_reg_e_o,
    output reg[`RegBus]     w_data_o
);

    reg[`RegBus]    logic_out;
    //TODO: need modify
    always @(*) begin
        if (rst == `RstEnable) begin
            logic_out <= `ZeroWord;
        end
        else begin
            case (aluop_i) //subtype
                `EXE_ADD_OP: begin
                    logic_out <= reg1_i + reg2_i;   //TODO:need realize add module
                end
                default: begin
                    logic_out <= `ZeroWord;
                end
            endcase
        end //end else
    end //end always

    always @(*) begin
        w_rd_addr_o <= w_rd_addr_i;
        w_reg_e_o   <= w_reg_e_i;
        case (alusel_i)
            `EXE_RES_LOGIC: begin
                w_data_o <= logic_out;
            end
            default: begin
                w_data_o <= `ZeroWord;
            end
        endcase
    end

endmodule

module ysyx_2022040010_ex_mem (
    input wire clk,
    input wire rst,

    //information from executing state
    input wire[`RegAddrBus] ex_w_rd_addr,
    input wire              ex_w_reg_e,
    input wire[`RegBus]     ex_w_data,

    //information sent to the mem state
    output reg[`RegAddrBus] mem_w_rd_addr,
    output reg              mem_w_reg_e,
    output reg[`RegBus]     mem_w_data
);

    always @(posedge clk) begin
        if (rst == `RstEnable) begin
            mem_w_rd_addr <= `ZeroRegAddr;
            mem_w_reg_e   <= `WriteDisable;
            mem_w_data    <= `ZeroWord;
        end
        else begin
            mem_w_rd_addr <= ex_w_rd_addr;
            // $display("%h",mem_w_rd_addr);
            mem_w_reg_e   <= ex_w_reg_e;
            mem_w_data    <= ex_w_data;
            // $display("%h",mem_w_data);
        end
    end

endmodule