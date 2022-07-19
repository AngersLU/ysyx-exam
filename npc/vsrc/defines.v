`define RstEnable       1'b1        //reset signal enable
`define RstDisable      1'b0        //reset signal disable
`define ZeroInst        32'h0000_0000            //32bits instructon zero
`define ZeroWord        64'h0000_0000_0000_0000  //64bits zero
`define ZeroReg         64'h0000_0000_0000_0000  //64bits zero
`define ZeroPc          64'h0000_0000_0000_0000  //64bits zero
`define PC_MBASE        64'h0000_0000_8000_0000  //M_base
`define WriteEnable     1'b1        //enable write
`define WriteDisable    1'b0        //ban write
`define ReadEnable      1'b1        //enable read
`define ReadDisable     1'b0        //ban write
`define AluOpBus        11: 0         //id_state output aluop_o bus width
`define AluSel1Bus      2 : 0
`define AluSel2Bus      3 : 0

`define AluSelBus       2 : 0         //id_state output alusel_o bus width

`define IF_TO_ID_BUS    64 :0
`define ID_TO_EX_BUS    290:0
`define BR_TO_IF_BUS    64 :0
`define EX_TO_MEM_BUS   211:0
`define MEM_TO_WB_BUS   133:0
`define SP_BUS          1 : 0



`define IF_TO_ID_WD     65
`define ID_TO_EX_WD     291
`define BR_TO_IF_WD     65   
`define EX_TO_MEM_WD    212
`define MEM_TO_WB_WD    134
`define SP_WD           2


//bypass
`define BP_TO_RF_BUS    69: 0

`define BP_TO_RF_WD     70     




`define InstValid       1'b0        //instruction valid
`define InstInvalid     1'b1        //instruction invalid
`define True_v          1'b1        //logic"true"
`define False_v         1'b0        //logic"false"
`define ChipEnable      1'b1        //chip enable
`define ChipDisable     1'b0        //chip disable
//about specific instruction defines
//*****************************
`define EXE_ADDI_OP        7'b0010011  //addi opcode




/* ***** R-type ************* */
//func7 inst[31:25]
`define EXE_AND_OR_XOR_FUNC7    7'b0000000
`define EXE_AND_FUNC7           7'b0000000
`define EXE_OR_FUNC7            7'b0000000
`define EXE_XOR_FUNC7           7'b0000000

//func3 inst[14:12]
`define EXE_AND         3'b111 //and func3
`define EXE_OR          3'b110 //or  func3
`define EXE_XOR         3'b100 //xor func3

//opcode inst[6:0]
`define EXE_AND_OR_XOR_OP   7'b0110_011
`define EXE_AND_OP          7'b0110_011 //and opcode
`define EXE_OR_OP           7'b0110_011 //or  opcode
`define EXE_XOR_OP          7'b0110_011 //xor opcode

/* ************************** */


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

`define CONFIG_MBASE         64'h0000_0000_8000_0000
`define PC_MBASE             64'h0000_0000_8000_0000
`define CONFIG_MSIZE         32'h8000_0000
`define PC_MSIZE             64'h0000_0000_8000_0000

`define StallBus        5:0
`define Stall_WD        6

`define DivFree             2'b00
`define DivByZero           2'b01
`define DivOn               2'b10
`define DivEnd              2'b11
`define DivResultReady      1'b1
`define DivResultNotReady   1'b0
`define DivStart            1'b1
`define DivStop             1'b0


`define NoStop  1'b0
`define Stop    1'b1
// `define PC_MBASE    64'h0000_0000_8000_0000

