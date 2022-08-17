//decode instrction
// module idu (
//     input ,
//     output ,
// );

// endmodule

`include "defines.v"

module ysyx_2022040010_id (
    input wire rst,
    input wire[`InstAddrBus] pc_i,//what's the usage?
    input wire[`InstBus]     inst_i,

    //read reg data
    input wire[`RegBus] reg1_data_i,//从Regfile输入的第一个读寄存器端口的输入 TODO:作用?
    input wire[`RegBus] reg2_data_i,

    //ouput regfiel data
    output reg reg1_read_e_o,           //regfile read port 1 enable
    output reg reg2_read_e_o,           //regfile read port 2 enable
    output reg[`RegAddrBus] reg1_addr_o,//read port 1 address
    output reg[`RegAddrBus] reg2_addr_o,//read port 2 address

    //ex data
    output reg[`AluOpBus]   aluop_o, //运算子类型
    output reg[`AluSelBus]  alusel_o,//运算类型
    output reg[`RegBus]     reg1_o,//src1
    output reg[`RegBus]     reg2_o,//src2
    output reg[`RegAddrBus] w_rd_addr_o,    //id_state write rd reg addr
    output reg              w_reg_e_o       //id_state write rd enable

);

    //TYPE = I;
    wire[6:0] opcode = inst_i[6 : 0];

    //using DPI-C function to break chip run
    import "DPI-C" function void ebreak;

    always @(*) begin
        if(inst_i == 32'h00100073) begin
            ebreak();
        end
    end

    // reg[4:0] rd     = inst_i[11: 7]; //1
    // reg[2:0] func3  = inst_i[14:12]; //0
    // reg[4:0] rs1    = inst_i[19:15]; //1
    reg[`RegBus] imm;
    reg inst_valid;

    always @(*) begin
        if(rst == `RstEnable) begin
            aluop_o         <= `EXE_NOP_OP;
            alusel_o        <= `EXE_RES_NOP;//TODO:modify
            w_rd_addr_o     <= `ZeroRegAddr;
            w_reg_e_o       <= `WriteDisable;
            inst_valid      <= `InstValid;
            reg1_read_e_o   <= 1'b0;
            reg2_read_e_o   <= 1'b0;
            reg1_addr_o     <= `ZeroRegAddr;
            reg2_addr_o     <= `ZeroRegAddr;
            imm             <= `ZeroWord;
        end
        else begin
            aluop_o         <= `EXE_NOP_OP;
            alusel_o        <= `EXE_RES_NOP;
            w_rd_addr_o     <= inst_i[11:7];
            w_reg_e_o       <= `WriteDisable;
            inst_valid      <= `InstInvalid;
            reg1_read_e_o   <= 1'b0;
            reg1_read_e_o   <= 1'b0;
            reg1_addr_o     <= inst_i[19:15];
            reg2_addr_o     <= inst_i[19:15];
            imm             <= `ZeroWord;
            case (opcode)
            `EXE_ADDI: begin
                aluop_o         <= `EXE_ADD_OP;
                alusel_o        <= `EXE_RES_LOGIC;

                w_rd_addr_o     <= inst_i[11:7];
                w_reg_e_o       <= `WriteEnable;
                // $display("%h",w_reg_e_o);
                reg1_read_e_o   <= 1'b1;
                reg2_read_e_o   <= 1'b0;//TODO:1'b0
                imm             <= {52'b0, inst_i[31:20]};//TODO:delete
//                $display("%h",imm);
                inst_valid      <= `InstValid;//it will be used when illegal instructions appear later
            end
            default: begin
            end
            endcase
        end//if
    end//always


    always @(*) begin
        if(rst == `RstEnable) begin
            reg1_o <= `ZeroWord;
        end
        else if (reg1_read_e_o == 1'b1)begin
            reg1_o <= reg1_data_i;
        end
        else if (reg1_read_e_o == 1'b0)begin
            reg1_o <= imm;
        end
        else begin
            reg1_o <= `ZeroWord;
        end
    end

    always @(*) begin
        if(rst == `RstEnable) begin
            reg2_o <= `ZeroWord;
        end
        else if (reg2_read_e_o == 1'b1)begin
            reg2_o <= reg2_data_i;
        end
        else if (reg2_read_e_o == 1'b0)begin
            reg2_o <= imm;
            // $display("%h",reg2_o);
        end
        else begin
            reg2_o <= `ZeroWord;
        end
    end
endmodule


module ysyx_2022040010_id_ex (
    input wire clk,
    input wire rst,

    //information transmitted from the decoding stage
    input wire[`AluOpBus]   id_aluop,
    input wire[`AluSelBus]  id_alusel,
    input wire[`RegBus]     id_reg1,//maybe reg1 or imm RegBus 63:0
    input wire[`RegBus]     id_reg2,//same
    input wire[`RegAddrBus] id_w_rd_addr,
    input wire              id_w_reg_e,  //enable write or disable

    //information passed to execution stage
    output reg[`AluOpBus]   ex_aluop,
    output reg[`AluSelBus]  ex_alusel,
    output reg[`RegBus]     ex_reg1,
    output reg[`RegBus]     ex_reg2,
    output reg[`RegAddrBus] ex_w_rd_addr,
    output reg              ex_w_reg_e
);

    always @(posedge clk ) begin
        if (rst == `RstEnable) begin
            ex_aluop     <= `EXE_NOP_OP;
            ex_alusel    <= `EXE_RES_NOP;
            ex_reg1      <= `ZeroReg;
            ex_reg2      <= `ZeroReg;
            ex_w_rd_addr <= `ZeroRegAddr;
            ex_w_reg_e   <= `WriteDisable;
        end
        else begin
            ex_aluop     <= id_aluop;
            ex_alusel    <= id_alusel;
            ex_reg1      <= id_reg1;
            // $display("src1 = %h",ex_reg1);
            ex_reg2      <= id_reg2;
            // $display("src2 = %h",ex_reg2);
            ex_w_rd_addr <= id_w_rd_addr;
            ex_w_reg_e   <= id_w_reg_e;
            // $display("%h",id_w_reg_e);
        end
    end

endmodule












