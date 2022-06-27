// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"top CLK_50", false,-1);
        tracep->declBit(c+2,"top rst", false,-1);
        tracep->declBit(c+1,"top rtop0 clk", false,-1);
        tracep->declBit(c+2,"top rtop0 rst", false,-1);
        tracep->declQuad(c+4,"top rtop0 inst_addr", false,-1, 63,0);
        tracep->declBus(c+6,"top rtop0 inst_data", false,-1, 31,0);
        tracep->declBit(c+7,"top rtop0 inst_ce", false,-1);
        tracep->declBit(c+1,"top rtop0 fsl0 clk", false,-1);
        tracep->declBit(c+2,"top rtop0 fsl0 rst", false,-1);
        tracep->declBus(c+6,"top rtop0 fsl0 inst_data_i", false,-1, 31,0);
        tracep->declQuad(c+4,"top rtop0 fsl0 inst_addr_o", false,-1, 63,0);
        tracep->declBit(c+7,"top rtop0 fsl0 inst_ce_o", false,-1);
        tracep->declQuad(c+4,"top rtop0 fsl0 pc", false,-1, 63,0);
        tracep->declQuad(c+8,"top rtop0 fsl0 id_pc_i", false,-1, 63,0);
        tracep->declBus(c+10,"top rtop0 fsl0 id_inst_i", false,-1, 31,0);
        tracep->declBus(c+11,"top rtop0 fsl0 mem_w_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+12,"top rtop0 fsl0 mem_w_reg_e_i", false,-1);
        tracep->declQuad(c+13,"top rtop0 fsl0 mem_w_data_i", false,-1, 63,0);
        tracep->declQuad(c+15,"top rtop0 fsl0 reg1_data", false,-1, 63,0);
        tracep->declQuad(c+119,"top rtop0 fsl0 reg2_data", false,-1, 63,0);
        tracep->declBit(c+17,"top rtop0 fsl0 reg1_read_e", false,-1);
        tracep->declBit(c+18,"top rtop0 fsl0 reg2_read_e", false,-1);
        tracep->declBus(c+19,"top rtop0 fsl0 reg1_addr", false,-1, 4,0);
        tracep->declBus(c+20,"top rtop0 fsl0 reg2_addr", false,-1, 4,0);
        tracep->declBus(c+21,"top rtop0 fsl0 id_aluop_o", false,-1, 7,0);
        tracep->declBus(c+22,"top rtop0 fsl0 id_alusel_o", false,-1, 2,0);
        tracep->declQuad(c+23,"top rtop0 fsl0 id_reg1_o", false,-1, 63,0);
        tracep->declQuad(c+25,"top rtop0 fsl0 id_reg2_o", false,-1, 63,0);
        tracep->declBus(c+121,"top rtop0 fsl0 id_w_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+122,"top rtop0 fsl0 id_w_reg_e_o", false,-1);
        tracep->declBit(c+123,"top rtop0 fsl0 wb_wreg_i", false,-1);
        tracep->declBus(c+124,"top rtop0 fsl0 wb_wd_i", false,-1, 4,0);
        tracep->declQuad(c+125,"top rtop0 fsl0 wb_wdata_i", false,-1, 63,0);
        tracep->declBus(c+27,"top rtop0 fsl0 ex_aluop_i", false,-1, 7,0);
        tracep->declBus(c+28,"top rtop0 fsl0 ex_alusel_i", false,-1, 2,0);
        tracep->declQuad(c+29,"top rtop0 fsl0 ex_reg1_i", false,-1, 63,0);
        tracep->declQuad(c+31,"top rtop0 fsl0 ex_reg2_i", false,-1, 63,0);
        tracep->declBus(c+33,"top rtop0 fsl0 ex_w_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+34,"top rtop0 fsl0 ex_w_reg_e_i", false,-1);
        tracep->declBus(c+33,"top rtop0 fsl0 ex_w_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+34,"top rtop0 fsl0 ex_w_reg_e_o", false,-1);
        tracep->declQuad(c+35,"top rtop0 fsl0 ex_w_data_o", false,-1, 63,0);
        tracep->declBus(c+3,"top rtop0 fsl0 mem_w_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+37,"top rtop0 fsl0 mem_w_reg_e_o", false,-1);
        tracep->declQuad(c+38,"top rtop0 fsl0 mem_w_data_o", false,-1, 63,0);
        tracep->declBus(c+127,"top rtop0 fsl0 wb_w_rd_addr", false,-1, 4,0);
        tracep->declBit(c+128,"top rtop0 fsl0 wb_w_reg_e", false,-1);
        tracep->declQuad(c+129,"top rtop0 fsl0 wb_w_data", false,-1, 63,0);
        tracep->declBus(c+40,"top rtop0 fsl0 wb_w_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+41,"top rtop0 fsl0 wb_w_reg_e_i", false,-1);
        tracep->declQuad(c+42,"top rtop0 fsl0 wb_w_data_i", false,-1, 63,0);
        tracep->declBit(c+44,"top rtop0 fsl0 id_w_rd_o", false,-1);
        tracep->declBit(c+45,"top rtop0 fsl0 id_w_reg_o", false,-1);
        tracep->declBit(c+131,"top rtop0 fsl0 reg1_read", false,-1);
        tracep->declBit(c+132,"top rtop0 fsl0 mem_w_rd_i", false,-1);
        tracep->declBit(c+133,"top rtop0 fsl0 mem_w_data", false,-1);
        tracep->declBit(c+2,"top rtop0 fsl0 pc_reg0 rst", false,-1);
        tracep->declBit(c+1,"top rtop0 fsl0 pc_reg0 clk", false,-1);
        tracep->declQuad(c+4,"top rtop0 fsl0 pc_reg0 pc", false,-1, 63,0);
        tracep->declBit(c+7,"top rtop0 fsl0 pc_reg0 ce", false,-1);
        tracep->declBit(c+1,"top rtop0 fsl0 if_id0 clk", false,-1);
        tracep->declBit(c+2,"top rtop0 fsl0 if_id0 rst", false,-1);
        tracep->declQuad(c+4,"top rtop0 fsl0 if_id0 if_pc", false,-1, 63,0);
        tracep->declBus(c+6,"top rtop0 fsl0 if_id0 if_inst", false,-1, 31,0);
        tracep->declQuad(c+8,"top rtop0 fsl0 if_id0 id_pc", false,-1, 63,0);
        tracep->declBus(c+10,"top rtop0 fsl0 if_id0 id_inst", false,-1, 31,0);
        tracep->declBit(c+2,"top rtop0 fsl0 id0 rst", false,-1);
        tracep->declQuad(c+8,"top rtop0 fsl0 id0 pc_i", false,-1, 63,0);
        tracep->declBus(c+10,"top rtop0 fsl0 id0 inst_i", false,-1, 31,0);
        tracep->declQuad(c+15,"top rtop0 fsl0 id0 reg1_data_i", false,-1, 63,0);
        tracep->declQuad(c+119,"top rtop0 fsl0 id0 reg2_data_i", false,-1, 63,0);
        tracep->declBit(c+17,"top rtop0 fsl0 id0 reg1_read_e_o", false,-1);
        tracep->declBit(c+18,"top rtop0 fsl0 id0 reg2_read_e_o", false,-1);
        tracep->declBus(c+19,"top rtop0 fsl0 id0 reg1_addr_o", false,-1, 4,0);
        tracep->declBus(c+20,"top rtop0 fsl0 id0 reg2_addr_o", false,-1, 4,0);
        tracep->declBus(c+21,"top rtop0 fsl0 id0 aluop_o", false,-1, 7,0);
        tracep->declBus(c+22,"top rtop0 fsl0 id0 alusel_o", false,-1, 2,0);
        tracep->declQuad(c+23,"top rtop0 fsl0 id0 reg1_o", false,-1, 63,0);
        tracep->declQuad(c+25,"top rtop0 fsl0 id0 reg2_o", false,-1, 63,0);
        tracep->declBus(c+46,"top rtop0 fsl0 id0 w_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+45,"top rtop0 fsl0 id0 w_reg_e_o", false,-1);
        tracep->declBus(c+47,"top rtop0 fsl0 id0 opcode", false,-1, 6,0);
        tracep->declQuad(c+48,"top rtop0 fsl0 id0 imm", false,-1, 63,0);
        tracep->declBit(c+50,"top rtop0 fsl0 id0 inst_valid", false,-1);
        tracep->declBit(c+1,"top rtop0 fsl0 regfile1 clk", false,-1);
        tracep->declBit(c+2,"top rtop0 fsl0 regfile1 rst", false,-1);
        tracep->declBit(c+123,"top rtop0 fsl0 regfile1 we", false,-1);
        tracep->declBus(c+124,"top rtop0 fsl0 regfile1 waddr", false,-1, 4,0);
        tracep->declQuad(c+125,"top rtop0 fsl0 regfile1 wdata", false,-1, 63,0);
        tracep->declBit(c+131,"top rtop0 fsl0 regfile1 re1", false,-1);
        tracep->declBus(c+19,"top rtop0 fsl0 regfile1 raddr1", false,-1, 4,0);
        tracep->declQuad(c+15,"top rtop0 fsl0 regfile1 rdata1", false,-1, 63,0);
        tracep->declBit(c+134,"top rtop0 fsl0 regfile1 re2", false,-1);
        tracep->declBus(c+135,"top rtop0 fsl0 regfile1 raddr2", false,-1, 4,0);
        tracep->declQuad(c+51,"top rtop0 fsl0 regfile1 rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+53+i*2,"top rtop0 fsl0 regfile1 regs", true,(i+0), 63,0);}}
        tracep->declBit(c+1,"top rtop0 fsl0 id_ex0 clk", false,-1);
        tracep->declBit(c+2,"top rtop0 fsl0 id_ex0 rst", false,-1);
        tracep->declBus(c+21,"top rtop0 fsl0 id_ex0 id_aluop", false,-1, 7,0);
        tracep->declBus(c+22,"top rtop0 fsl0 id_ex0 id_alusel", false,-1, 2,0);
        tracep->declQuad(c+23,"top rtop0 fsl0 id_ex0 id_reg1", false,-1, 63,0);
        tracep->declQuad(c+25,"top rtop0 fsl0 id_ex0 id_reg2", false,-1, 63,0);
        tracep->declBus(c+121,"top rtop0 fsl0 id_ex0 id_w_rd_addr", false,-1, 4,0);
        tracep->declBit(c+122,"top rtop0 fsl0 id_ex0 id_w_reg_e", false,-1);
        tracep->declBus(c+27,"top rtop0 fsl0 id_ex0 ex_aluop", false,-1, 7,0);
        tracep->declBus(c+28,"top rtop0 fsl0 id_ex0 ex_alusel", false,-1, 2,0);
        tracep->declQuad(c+29,"top rtop0 fsl0 id_ex0 ex_reg1", false,-1, 63,0);
        tracep->declQuad(c+31,"top rtop0 fsl0 id_ex0 ex_reg2", false,-1, 63,0);
        tracep->declBus(c+33,"top rtop0 fsl0 id_ex0 ex_w_rd_addr", false,-1, 4,0);
        tracep->declBit(c+34,"top rtop0 fsl0 id_ex0 ex_w_reg_e", false,-1);
        tracep->declBit(c+2,"top rtop0 fsl0 ex0 rst", false,-1);
        tracep->declBus(c+27,"top rtop0 fsl0 ex0 aluop_i", false,-1, 7,0);
        tracep->declBus(c+28,"top rtop0 fsl0 ex0 alusel_i", false,-1, 2,0);
        tracep->declQuad(c+29,"top rtop0 fsl0 ex0 reg1_i", false,-1, 63,0);
        tracep->declQuad(c+31,"top rtop0 fsl0 ex0 reg2_i", false,-1, 63,0);
        tracep->declBus(c+33,"top rtop0 fsl0 ex0 w_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+34,"top rtop0 fsl0 ex0 w_reg_e_i", false,-1);
        tracep->declBus(c+33,"top rtop0 fsl0 ex0 w_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+34,"top rtop0 fsl0 ex0 w_reg_e_o", false,-1);
        tracep->declQuad(c+35,"top rtop0 fsl0 ex0 w_data_o", false,-1, 63,0);
        tracep->declQuad(c+117,"top rtop0 fsl0 ex0 logic_out", false,-1, 63,0);
        tracep->declBit(c+1,"top rtop0 fsl0 ex_mem0 clk", false,-1);
        tracep->declBit(c+2,"top rtop0 fsl0 ex_mem0 rst", false,-1);
        tracep->declBus(c+33,"top rtop0 fsl0 ex_mem0 ex_w_rd_addr", false,-1, 4,0);
        tracep->declBit(c+34,"top rtop0 fsl0 ex_mem0 ex_w_reg_e", false,-1);
        tracep->declQuad(c+35,"top rtop0 fsl0 ex_mem0 ex_w_data", false,-1, 63,0);
        tracep->declBus(c+11,"top rtop0 fsl0 ex_mem0 mem_w_rd_addr", false,-1, 4,0);
        tracep->declBit(c+12,"top rtop0 fsl0 ex_mem0 mem_w_reg_e", false,-1);
        tracep->declQuad(c+13,"top rtop0 fsl0 ex_mem0 mem_w_data", false,-1, 63,0);
        tracep->declBit(c+2,"top rtop0 fsl0 mem0 rst", false,-1);
        tracep->declBus(c+136,"top rtop0 fsl0 mem0 w_rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+12,"top rtop0 fsl0 mem0 w_reg_e_i", false,-1);
        tracep->declQuad(c+13,"top rtop0 fsl0 mem0 w_data_i", false,-1, 63,0);
        tracep->declBus(c+3,"top rtop0 fsl0 mem0 w_rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+37,"top rtop0 fsl0 mem0 w_reg_e_o", false,-1);
        tracep->declQuad(c+38,"top rtop0 fsl0 mem0 w_data_o", false,-1, 63,0);
        tracep->declBit(c+1,"top rtop0 fsl0 mem_wb0 clk", false,-1);
        tracep->declBit(c+2,"top rtop0 fsl0 mem_wb0 rst", false,-1);
        tracep->declBus(c+3,"top rtop0 fsl0 mem_wb0 mem_w_rd_addr", false,-1, 4,0);
        tracep->declBit(c+37,"top rtop0 fsl0 mem_wb0 mem_w_reg_e", false,-1);
        tracep->declQuad(c+137,"top rtop0 fsl0 mem_wb0 mem_w_data", false,-1, 63,0);
        tracep->declBus(c+40,"top rtop0 fsl0 mem_wb0 wb_w_rd_addr", false,-1, 4,0);
        tracep->declBit(c+41,"top rtop0 fsl0 mem_wb0 wb_w_reg_e", false,-1);
        tracep->declQuad(c+42,"top rtop0 fsl0 mem_wb0 wb_w_data", false,-1, 63,0);
        tracep->declBit(c+7,"top rtop0 inst_rom0 ce", false,-1);
        tracep->declQuad(c+4,"top rtop0 inst_rom0 addr", false,-1, 63,0);
        tracep->declBus(c+6,"top rtop0 inst_rom0 inst", false,-1, 31,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__CLK_50));
        tracep->fullBit(oldp+2,(vlSelf->top__DOT__rst));
        tracep->fullCData(oldp+3,(((IData)(vlSelf->top__DOT__rst)
                                    ? 0U : (IData)(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__mem_w_rd_i))),5);
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__pc),64);
        tracep->fullIData(oldp+6,(((IData)(vlSelf->top__DOT__rtop0__DOT__inst_ce)
                                    ? ((0x1fffeU >= 
                                        (0x1ffffU & (IData)(
                                                            (vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__pc 
                                                             >> 2U))))
                                        ? vlSelf->top__DOT__rtop0__DOT__inst_rom0__DOT__inst_mem
                                       [(0x1ffffU & (IData)(
                                                            (vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__pc 
                                                             >> 2U)))]
                                        : 0U) : 0U)),32);
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__rtop0__DOT__inst_ce));
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__id_pc_i),64);
        tracep->fullIData(oldp+10,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__id_inst_i),32);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__mem_w_rd_addr_i),5);
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__mem_w_reg_e_i));
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__mem_w_data_i),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__reg1_data),64);
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__reg1_read_e));
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__reg2_read_e));
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__reg1_addr),5);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__reg2_addr),5);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__id_aluop_o),8);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__id_alusel_o),3);
        tracep->fullQData(oldp+23,(((IData)(vlSelf->top__DOT__rst)
                                     ? 0ULL : ((IData)(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__reg1_read_e)
                                                ? vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__reg1_data
                                                : ((IData)(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__reg1_read_e)
                                                    ? 0ULL
                                                    : vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__id0__DOT__imm)))),64);
        tracep->fullQData(oldp+25,(((IData)(vlSelf->top__DOT__rst)
                                     ? 0ULL : ((IData)(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__reg2_read_e)
                                                ? vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__reg2_data
                                                : ((IData)(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__reg2_read_e)
                                                    ? 0ULL
                                                    : vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__id0__DOT__imm)))),64);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__ex_aluop_i),8);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__ex_alusel_i),3);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__ex_reg1_i),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__ex_reg2_i),64);
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__ex_w_rd_addr_i),5);
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__ex_w_reg_e_i));
        tracep->fullQData(oldp+35,(((1U == (IData)(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__ex_alusel_i))
                                     ? ((IData)(vlSelf->top__DOT__rst)
                                         ? 0ULL : (
                                                   (0x25U 
                                                    == (IData)(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__ex_aluop_i))
                                                    ? 
                                                   (vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__ex_reg1_i 
                                                    + vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__ex_reg2_i)
                                                    : 0ULL))
                                     : 0ULL)),64);
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__mem_w_reg_e_o));
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__mem_w_data_o),64);
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__wb_w_rd_addr_i),5);
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__wb_w_reg_e_i));
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__wb_w_data_i),64);
        tracep->fullBit(oldp+44,((1U & (IData)(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT____Vcellout__id0__w_rd_addr_o))));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__id_w_reg_o));
        tracep->fullCData(oldp+46,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT____Vcellout__id0__w_rd_addr_o),5);
        tracep->fullCData(oldp+47,((0x7fU & vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__id_inst_i)),7);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__id0__DOT__imm),64);
        tracep->fullBit(oldp+50,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__id0__DOT__inst_valid));
        tracep->fullQData(oldp+51,(((IData)(vlSelf->top__DOT__rst)
                                     ? 0ULL : ((0U 
                                                == (IData)(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__raddr2))
                                                ? 0ULL
                                                : (
                                                   ((((IData)(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__raddr2) 
                                                      == (IData)(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__wb_wd_i)) 
                                                     & (IData)(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__wb_wreg_i)) 
                                                    & (IData)(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__re2))
                                                    ? vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__wb_wdata_i
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__re2)
                                                     ? 
                                                    vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs
                                                    [vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__raddr2]
                                                     : 0ULL))))),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[0]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[1]),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[2]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[3]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[4]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[5]),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[6]),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[7]),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[8]),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[9]),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[10]),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[11]),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[12]),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[13]),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[14]),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[15]),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[16]),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[17]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[18]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[19]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[20]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[21]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[22]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[23]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[24]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[25]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[26]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[27]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[28]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[29]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[30]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__regs[31]),64);
        tracep->fullQData(oldp+117,(((IData)(vlSelf->top__DOT__rst)
                                      ? 0ULL : ((0x25U 
                                                 == (IData)(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__ex_aluop_i))
                                                 ? 
                                                (vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__ex_reg1_i 
                                                 + vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__ex_reg2_i)
                                                 : 0ULL))),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__reg2_data),64);
        tracep->fullCData(oldp+121,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__id_w_rd_addr_o),5);
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__id_w_reg_e_o));
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__wb_wreg_i));
        tracep->fullCData(oldp+124,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__wb_wd_i),5);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__wb_wdata_i),64);
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__wb_w_rd_addr),5);
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__wb_w_reg_e));
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__wb_w_data),64);
        tracep->fullBit(oldp+131,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__reg1_read));
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__mem_w_rd_i));
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__mem_w_data));
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__re2));
        tracep->fullCData(oldp+135,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__regfile1__DOT__raddr2),5);
        tracep->fullCData(oldp+136,(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__mem_w_rd_i),5);
        tracep->fullQData(oldp+137,((QData)((IData)(vlSelf->top__DOT__rtop0__DOT__fsl0__DOT__mem_w_data))),64);
    }
}
