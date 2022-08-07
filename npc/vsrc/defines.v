`define RstEnable       1'b1        //reset signal enable
`define RstDisable      1'b0        //reset signal disable
`define ZeroInst        32'h0000_0000            //32bits instructon zero
`define ZeroWord        64'h0000_0000_0000_0000  //64bits zero
`define ZeroReg         64'h0000_0000_0000_0000  //64bits zero
`define ZeroPc          64'h0000_0000_0000_0000  //64bits zero
`define PC_START        64'h0000_0000_7fff_fffc  //M_base
`define WriteEnable     1'b1        //enable write
`define WriteDisable    1'b0        //ban write
`define ReadEnable      1'b1        //enable read
`define ReadDisable     1'b0        //ban write
`define AluOpBus        11: 0         //id_state output aluop_o bus width
`define AluSel1Bus      2 : 0
`define AluSel2Bus      6 : 0

`define IF_TO_ID_BUS    128 :0
`define ID_TO_EX_BUS    365:0
`define BR_TO_IF_BUS    64 :0
`define EX_TO_MEM_BUS   218:0
`define MEM_TO_WB_BUS   200:0
`define SP_BUS          1 : 0

`define IF_TO_ID_WD     129
`define ID_TO_EX_WD     366
`define BR_TO_IF_WD     65   
`define EX_TO_MEM_WD    219
`define MEM_TO_WB_WD    201
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

`define HIT_WIDTH 2
`define TAR_WIDTH 56 // vaild + tagg 1+55
`define DTAR_WIDTH 57 // dirty + vaild + tag 1+1+55 

//uncache 
`define T1 2'b00
`define T2 2'b01
`define T3 2'b11
`define T4 2'b10


// Burst types
`define AXI_BURST_TYPE_FIXED                                2'b00               //突发类型  FIFO
`define AXI_BURST_TYPE_INCR                                 2'b01               //ram  
`define AXI_BURST_TYPE_WRAP                                 2'b10
// Access permissions
`define AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
`define AXI_PROT_PRIVILEGED_ACCESS                          3'b001
`define AXI_PROT_SECURE_ACCESS                              3'b000
`define AXI_PROT_NON_SECURE_ACCESS                          3'b010
`define AXI_PROT_DATA_ACCESS                                3'b000
`define AXI_PROT_INSTRUCTION_ACCESS                         3'b100
// Memory types (AR)
`define AXI_ARCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_ARCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
`define AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
`define AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
// Memory types (AW)
`define AXI_AWCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_AWCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1110
`define AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                  4'b0111
`define AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE                4'b0111
`define AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1111
`define AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111

`define AXI_SIZE_BYTES_1                                    3'b000                //突发宽度一个数据的宽度
`define AXI_SIZE_BYTES_2                                    3'b001
`define AXI_SIZE_BYTES_4                                    3'b010
`define AXI_SIZE_BYTES_8                                    3'b011
`define AXI_SIZE_BYTES_16                                   3'b100
`define AXI_SIZE_BYTES_32                                   3'b101
`define AXI_SIZE_BYTES_64                                   3'b110
`define AXI_SIZE_BYTES_128                                  3'b111


