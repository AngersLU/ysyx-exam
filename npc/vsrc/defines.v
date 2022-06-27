`define RstEnable       1'b1        //reset signal enable
`define RstDisable      1'b0        //reset signal disable
`define ZeroInst        32'h0000_0000            //32bits instructon zero
`define ZeroWord        64'h0000_0000_0000_0000  //64bits zero
`define ZeroReg         64'h0000_0000_0000_0000  //64bits zero
`define ZeroPc          64'h0000_0000_0000_0000  //64bits zero
`define InitPc          64'h0000_0000_8000_0000  //M_base
`define WriteEnable     1'b1        //enable write
`define WriteDisable    1'b0        //ban write
`define ReadEnable      1'b1        //enable read
`define ReadDisable     1'b0        //ban write
`define AluOpBus        7:0         //id_state output aluop_o bus width
`define AluSelBus       2:0         //id_state output alusel_o bus width
`define InstValid       1'b0        //instruction valid
`define InstInvalid     1'b1        //instruction invalid
`define True_v          1'b1        //logic"true"
`define False_v         1'b0        //logic"false"
`define ChipEnable      1'b1        //chip enable
`define ChipDisable     1'b0        //chip disable
//about specific instruction defines
//*****************************
`define EXE_ADDI        7'b0010011  //addi opcode
//`define EXE_EBREAK      7'b1110011  //ebreak opcode
// `define EXE_ORI         6'b001101   //inst ori's opcode
// `define EXE_NOP         6'b000000
//AluOp
// `define EXE_OR_OP       8'b00100101
`define EXE_ADD_OP      8'b00100101
`define EXE_NOP_OP      8'b00000000
//AluSel
`define EXE_RES_LOGIC   3'b001
`define EXE_RES_NOP     3'b000
//about insrtruction memory ROM defines
//*********************
`define InstAddrBus     63:0    //ROM address bus length
`define InstBus         31:0    //ROM data bus width 4B
//`define InstMemNum      131071  //ROM real size is 128KB:TODO:modify
`define InstMemNum      67108864  //262144KB 0x8000_0000
`define InstMemNumLog2  26      //ROM actual address bus widthTODO:modify
//about Regfile defines
//*******************
`define RegAddrBus      4:0     //Regfile_u address width
`define RegBus          63:0    //Regfile_u data bus width
`define RegWidth        64      //general reg width
`define DoubleRegWidth  128      //double general reg width
`define DoubleRegBus    127:0    //double reg data bus width
`define RegNum          32      //general reg number
`define RegNumLog2      5       //general reg address bits
`define ZeroRegAddr     5'b00000

`define CONFIG_MBASE         32'h8000_0000
`define PC_MBASE             64'h0000_0000_8000_0000
`define CONFIG_MSIZE         32'h8000_0000
`define PC_MSIZE             64'h0000_0000_8000_0000
