
`inculude "defines.v"
// virtual address -> physical address
// memory manage unit
module ysyx_2022040010_mmu (
    input wire  [63: 0] addr_i,
    output wire [63: 0] addr_o

);

    //the mmu needs to be modified after adding peripheral device
    assign addr_o = addr_i - `CONFIG_MBASE;

    
endmodule





