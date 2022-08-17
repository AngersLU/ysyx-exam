// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest__Syms.h"


void Vtest___024root__traceChgSub0(Vtest___024root* vlSelf, VerilatedVcd* tracep);

void Vtest___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtest___024root* const __restrict vlSelf = static_cast<Vtest___024root*>(voidSelf);
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtest___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtest___024root__traceChgSub0(Vtest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,(vlSelf->test__DOT__CLK_50));
            tracep->chgBit(oldp+1,(vlSelf->test__DOT__rst));
            tracep->chgCData(oldp+2,(((IData)(vlSelf->test__DOT__rst)
                                       ? 0U : (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_rd_i))),5);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+3,(vlSelf->test__DOT__top__DOT__fsl0__DOT__pc),64);
            tracep->chgIData(oldp+5,(((IData)(vlSelf->test__DOT__top__DOT__inst_ce)
                                       ? ((0x1fffeU 
                                           >= (0x1ffffU 
                                               & (IData)(
                                                         (vlSelf->test__DOT__top__DOT__fsl0__DOT__pc 
                                                          >> 2U))))
                                           ? vlSelf->test__DOT__top__DOT__inst_rom0__DOT__inst_mem
                                          [(0x1ffffU 
                                            & (IData)(
                                                      (vlSelf->test__DOT__top__DOT__fsl0__DOT__pc 
                                                       >> 2U)))]
                                           : 0U) : 0U)),32);
            tracep->chgBit(oldp+6,(vlSelf->test__DOT__top__DOT__inst_ce));
            tracep->chgQData(oldp+7,(vlSelf->test__DOT__top__DOT__fsl0__DOT__id_pc_i),64);
            tracep->chgIData(oldp+9,(vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i),32);
            tracep->chgCData(oldp+10,(vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_rd_addr_i),5);
            tracep->chgBit(oldp+11,(vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_reg_e_i));
            tracep->chgQData(oldp+12,(vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_data_i),64);
            tracep->chgQData(oldp+14,(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_data),64);
            tracep->chgBit(oldp+16,(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_read_e));
            tracep->chgBit(oldp+17,(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg2_read_e));
            tracep->chgCData(oldp+18,(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_addr),5);
            tracep->chgCData(oldp+19,(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg2_addr),5);
            tracep->chgCData(oldp+20,(vlSelf->test__DOT__top__DOT__fsl0__DOT__id_aluop_o),8);
            tracep->chgCData(oldp+21,(vlSelf->test__DOT__top__DOT__fsl0__DOT__id_alusel_o),3);
            tracep->chgQData(oldp+22,(((IData)(vlSelf->test__DOT__rst)
                                        ? 0ULL : ((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_read_e)
                                                   ? vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_data
                                                   : 
                                                  ((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_read_e)
                                                    ? 0ULL
                                                    : vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__imm)))),64);
            tracep->chgQData(oldp+24,(((IData)(vlSelf->test__DOT__rst)
                                        ? 0ULL : ((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg2_read_e)
                                                   ? vlSelf->test__DOT__top__DOT__fsl0__DOT__reg2_data
                                                   : 
                                                  ((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg2_read_e)
                                                    ? 0ULL
                                                    : vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__imm)))),64);
            tracep->chgCData(oldp+26,(vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_aluop_i),8);
            tracep->chgCData(oldp+27,(vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_alusel_i),3);
            tracep->chgQData(oldp+28,(vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_reg1_i),64);
            tracep->chgQData(oldp+30,(vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_reg2_i),64);
            tracep->chgCData(oldp+32,(vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_w_rd_addr_i),5);
            tracep->chgBit(oldp+33,(vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_w_reg_e_i));
            tracep->chgQData(oldp+34,(((1U == (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_alusel_i))
                                        ? ((IData)(vlSelf->test__DOT__rst)
                                            ? 0ULL : 
                                           ((0x25U 
                                             == (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_aluop_i))
                                             ? (vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_reg1_i 
                                                + vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_reg2_i)
                                             : 0ULL))
                                        : 0ULL)),64);
            tracep->chgBit(oldp+36,(vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_reg_e_o));
            tracep->chgQData(oldp+37,(vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_data_o),64);
            tracep->chgCData(oldp+39,(vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_w_rd_addr_i),5);
            tracep->chgBit(oldp+40,(vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_w_reg_e_i));
            tracep->chgQData(oldp+41,(vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_w_data_i),64);
            tracep->chgBit(oldp+43,((1U & (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT____Vcellout__id0__w_rd_addr_o))));
            tracep->chgBit(oldp+44,(vlSelf->test__DOT__top__DOT__fsl0__DOT__id_w_reg_o));
            tracep->chgCData(oldp+45,(vlSelf->test__DOT__top__DOT__fsl0__DOT____Vcellout__id0__w_rd_addr_o),5);
            tracep->chgCData(oldp+46,((0x7fU & vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i)),7);
            tracep->chgQData(oldp+47,(vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__imm),64);
            tracep->chgBit(oldp+49,(vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__inst_valid));
            tracep->chgQData(oldp+50,(((IData)(vlSelf->test__DOT__rst)
                                        ? 0ULL : ((0U 
                                                   == (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__raddr2))
                                                   ? 0ULL
                                                   : 
                                                  (((((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__raddr2) 
                                                      == (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wd_i)) 
                                                     & (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wreg_i)) 
                                                    & (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__re2))
                                                    ? vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wdata_i
                                                    : 
                                                   ((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__re2)
                                                     ? 
                                                    vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs
                                                    [vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__raddr2]
                                                     : 0ULL))))),64);
            tracep->chgQData(oldp+52,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[0]),64);
            tracep->chgQData(oldp+54,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[1]),64);
            tracep->chgQData(oldp+56,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[2]),64);
            tracep->chgQData(oldp+58,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[3]),64);
            tracep->chgQData(oldp+60,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[4]),64);
            tracep->chgQData(oldp+62,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[5]),64);
            tracep->chgQData(oldp+64,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[6]),64);
            tracep->chgQData(oldp+66,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[7]),64);
            tracep->chgQData(oldp+68,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[8]),64);
            tracep->chgQData(oldp+70,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[9]),64);
            tracep->chgQData(oldp+72,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[10]),64);
            tracep->chgQData(oldp+74,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[11]),64);
            tracep->chgQData(oldp+76,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[12]),64);
            tracep->chgQData(oldp+78,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[13]),64);
            tracep->chgQData(oldp+80,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[14]),64);
            tracep->chgQData(oldp+82,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[15]),64);
            tracep->chgQData(oldp+84,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[16]),64);
            tracep->chgQData(oldp+86,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[17]),64);
            tracep->chgQData(oldp+88,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[18]),64);
            tracep->chgQData(oldp+90,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[19]),64);
            tracep->chgQData(oldp+92,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[20]),64);
            tracep->chgQData(oldp+94,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[21]),64);
            tracep->chgQData(oldp+96,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[22]),64);
            tracep->chgQData(oldp+98,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[23]),64);
            tracep->chgQData(oldp+100,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[24]),64);
            tracep->chgQData(oldp+102,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[25]),64);
            tracep->chgQData(oldp+104,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[26]),64);
            tracep->chgQData(oldp+106,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[27]),64);
            tracep->chgQData(oldp+108,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[28]),64);
            tracep->chgQData(oldp+110,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[29]),64);
            tracep->chgQData(oldp+112,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[30]),64);
            tracep->chgQData(oldp+114,(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[31]),64);
            tracep->chgQData(oldp+116,(((IData)(vlSelf->test__DOT__rst)
                                         ? 0ULL : (
                                                   (0x25U 
                                                    == (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_aluop_i))
                                                    ? 
                                                   (vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_reg1_i 
                                                    + vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_reg2_i)
                                                    : 0ULL))),64);
        }
    }
}

void Vtest___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtest___024root* const __restrict vlSelf = static_cast<Vtest___024root*>(voidSelf);
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
