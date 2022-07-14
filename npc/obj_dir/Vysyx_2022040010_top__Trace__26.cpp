// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_2022040010_top__Syms.h"


void Vysyx_2022040010_top___024root__traceChgSub26(Vysyx_2022040010_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<5>/*159:0*/ __Vtemp229872;
    VlWide<5>/*159:0*/ __Vtemp229874;
    VlWide<5>/*159:0*/ __Vtemp229875;
    VlWide<5>/*159:0*/ __Vtemp229876;
    VlWide<5>/*159:0*/ __Vtemp230006;
    VlWide<5>/*159:0*/ __Vtemp230007;
    VlWide<5>/*159:0*/ __Vtemp230008;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 34084);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+0,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][3U]) 
                                          >> 0x1cU))));
            tracep->chgBit(oldp+1,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [0U][3U]) 
                                          >> 0x1cU))));
            tracep->chgBit(oldp+2,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][3U] 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+3,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][3U]) 
                                           ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][3U]) 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+4,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U])) 
                                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U])) 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+5,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][3U] 
                                           ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [0U][3U]) 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+6,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][3U]) 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+7,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [0U][3U]) 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+8,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][3U] 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+9,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][3U]) 
                                           ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][3U]) 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+10,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][3U]) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][3U])) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U])) 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+11,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][3U]) 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+12,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][3U]) 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+13,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][3U]) 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+14,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1dU][3U] >> 0x1fU)));
            tracep->chgBit(oldp+15,((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][3U] 
                                       ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [0U][3U]) ^ 
                                      vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                      [1U][3U]) >> 0x1fU)));
            tracep->chgBit(oldp+16,(((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [0U][3U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][3U]) | 
                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][3U] 
                                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][3U])) 
                                      | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][3U] 
                                         & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [0U][3U])) 
                                     >> 0x1fU)));
            tracep->chgBit(oldp+17,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1dU][3U] ^ 
                                      vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                      [0U][3U]) >> 0x1fU)));
            tracep->chgBit(oldp+18,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1dU][3U] & 
                                      vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                      [1U][3U]) >> 0x1fU)));
            tracep->chgBit(oldp+19,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1dU][3U] & 
                                      vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                      [0U][3U]) >> 0x1fU)));
            tracep->chgQData(oldp+20,(((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_signed)
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp)))
                                        : (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp)))),64);
            tracep->chgQData(oldp+22,(((0x8000000U 
                                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                        ? ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_signed)
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp)))
                                            : (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp)))
                                        : vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp)),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+24,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_result),64);
            tracep->chgWData(oldp+26,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus),148);
            __Vtemp229872[0U] = (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__rf_wdata);
            __Vtemp229872[1U] = (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__rf_wdata 
                                         >> 0x20U));
            __Vtemp229872[2U] = (((IData)((((QData)((IData)(
                                                            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U])) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[3U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U])) 
                                                 >> 0xdU)))) 
                                  << 6U) | ((0x20U 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U]) 
                                            | (0x1fU 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U])));
            __Vtemp229872[3U] = (((IData)((((QData)((IData)(
                                                            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U])) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[3U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U])) 
                                                 >> 0xdU)))) 
                                  >> 0x1aU) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U])) 
                                                          << 0x33U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[3U])) 
                                                             << 0x13U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U])) 
                                                               >> 0xdU))) 
                                                        >> 0x20U)) 
                                               << 6U));
            __Vtemp229872[4U] = ((IData)(((((QData)((IData)(
                                                            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U])) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[3U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U])) 
                                                 >> 0xdU))) 
                                          >> 0x20U)) 
                                 >> 0x1aU);
            tracep->chgWData(oldp+31,(__Vtemp229872),134);
            tracep->chgWData(oldp+36,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus),70);
            tracep->chgWData(oldp+39,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus),70);
            tracep->chgBit(oldp+42,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
                                           >> 5U))));
            tracep->chgBit(oldp+43,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
                                           >> 5U))));
            tracep->chgCData(oldp+44,((0x1fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[2U])),5);
            tracep->chgCData(oldp+45,((0x1fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[2U])),5);
            tracep->chgQData(oldp+46,((((QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[0U])))),64);
            tracep->chgQData(oldp+48,((((QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[0U])))),64);
            tracep->chgCData(oldp+50,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode),7);
            tracep->chgCData(oldp+51,((7U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+52,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                       >> 0x19U)),7);
            tracep->chgCData(oldp+53,((0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+54,((0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+55,((0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                >> 7U))),5);
            tracep->chgWData(oldp+56,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d),128);
            tracep->chgWData(oldp+60,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d),128);
            tracep->chgIData(oldp+64,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs1_d),32);
            tracep->chgIData(oldp+65,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rs2_d),32);
            tracep->chgIData(oldp+66,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__rd_d),32);
            tracep->chgCData(oldp+67,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d),8);
            tracep->chgBit(oldp+68,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                                           >> 0x17U))));
            tracep->chgBit(oldp+69,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                                           >> 0x17U))));
            tracep->chgBit(oldp+70,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addi));
            tracep->chgBit(oldp+71,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_add));
            tracep->chgBit(oldp+72,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addiw));
            tracep->chgBit(oldp+73,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addw));
            tracep->chgBit(oldp+74,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sub));
            tracep->chgBit(oldp+75,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_subw));
            tracep->chgBit(oldp+76,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slti));
            tracep->chgBit(oldp+77,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltiu));
            tracep->chgBit(oldp+78,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slt));
            tracep->chgBit(oldp+79,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltu));
            tracep->chgBit(oldp+80,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slli));
            tracep->chgBit(oldp+81,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srli));
            tracep->chgBit(oldp+82,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srai));
            tracep->chgBit(oldp+83,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slliw));
            tracep->chgBit(oldp+84,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srliw));
            tracep->chgBit(oldp+85,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraiw));
            tracep->chgBit(oldp+86,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sll));
            tracep->chgBit(oldp+87,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srl));
            tracep->chgBit(oldp+88,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sra));
            tracep->chgBit(oldp+89,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sllw));
            tracep->chgBit(oldp+90,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srlw));
            tracep->chgBit(oldp+91,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraw));
            tracep->chgBit(oldp+92,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xori));
            tracep->chgBit(oldp+93,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ori));
            tracep->chgBit(oldp+94,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_andi));
            tracep->chgBit(oldp+95,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xor));
            tracep->chgBit(oldp+96,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_or));
            tracep->chgBit(oldp+97,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_and));
            tracep->chgBit(oldp+98,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ecall));
            tracep->chgBit(oldp+99,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ebreak));
            tracep->chgBit(oldp+100,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb));
            tracep->chgBit(oldp+101,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh));
            tracep->chgBit(oldp+102,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw));
            tracep->chgBit(oldp+103,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld));
            tracep->chgBit(oldp+104,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu));
            tracep->chgBit(oldp+105,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu));
            tracep->chgBit(oldp+106,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu));
            tracep->chgBit(oldp+107,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb));
            tracep->chgBit(oldp+108,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh));
            tracep->chgBit(oldp+109,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw));
            tracep->chgBit(oldp+110,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd));
            tracep->chgBit(oldp+111,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+112,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_jalr));
            tracep->chgBit(oldp+113,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_beq));
            tracep->chgBit(oldp+114,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                                             >> 3U) 
                                            & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                               >> 1U)))));
            tracep->chgBit(oldp+115,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                                             >> 3U) 
                                            & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                               >> 4U)))));
            tracep->chgBit(oldp+116,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                                             >> 3U) 
                                            & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                               >> 5U)))));
            tracep->chgBit(oldp+117,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                                             >> 3U) 
                                            & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                               >> 6U)))));
            tracep->chgBit(oldp+118,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                                             >> 3U) 
                                            & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                               >> 7U)))));
            tracep->chgBit(oldp+119,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrw));
            tracep->chgBit(oldp+120,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrs));
            tracep->chgBit(oldp+121,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrc));
            tracep->chgBit(oldp+122,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrwi));
            tracep->chgBit(oldp+123,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrsi));
            tracep->chgBit(oldp+124,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrci));
            tracep->chgBit(oldp+125,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mul));
            tracep->chgBit(oldp+126,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulh));
            tracep->chgBit(oldp+127,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhsu));
            tracep->chgBit(oldp+128,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhu));
            tracep->chgBit(oldp+129,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulw));
            tracep->chgBit(oldp+130,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_div));
            tracep->chgBit(oldp+131,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divu));
            tracep->chgBit(oldp+132,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divw));
            tracep->chgBit(oldp+133,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divuw));
            tracep->chgBit(oldp+134,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remw));
            tracep->chgBit(oldp+135,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remuw));
            tracep->chgBit(oldp+136,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_rem));
            tracep->chgBit(oldp+137,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remu));
            tracep->chgBit(oldp+138,((1U & ((((((((
                                                   ((((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_add) 
                                                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                                                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addi)) 
                                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addiw)) 
                                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb)) 
                                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                                                     | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                                                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                                                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb)) 
                                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd)) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                                               >> 0x17U)))));
            tracep->chgBit(oldp+139,(((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sub) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_subw))));
            tracep->chgBit(oldp+140,(((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slt) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slti))));
            tracep->chgBit(oldp+141,(((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltu) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltiu))));
            tracep->chgBit(oldp+142,(((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_and) 
                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_andi)) 
                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrc)) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrci))));
            tracep->chgBit(oldp+143,(((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_or) 
                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ori)) 
                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrsi))));
            tracep->chgBit(oldp+144,(((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xor) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xori))));
            tracep->chgBit(oldp+145,(((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sll) 
                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slli)) 
                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sllw))));
            tracep->chgBit(oldp+146,(((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srl) 
                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srli)) 
                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srlw))));
            tracep->chgBit(oldp+147,(((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sra) 
                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srai)) 
                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraw))));
            tracep->chgBit(oldp+148,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                                              >> 0x17U) 
                                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrw)) 
                                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrwi)))));
            tracep->chgBit(oldp+149,(((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ecall) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ebreak))));
            tracep->chgCData(oldp+150,(((0x80U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                                                  >> 8U)) 
                                        | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_jalr) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_beq) 
                                               << 5U) 
                                              | ((0x10U 
                                                  & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                                                      << 1U) 
                                                     & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                                        << 3U))) 
                                                 | ((8U 
                                                     & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                                                        & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                                           >> 1U))) 
                                                    | ((4U 
                                                        & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                                                            >> 1U) 
                                                           & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                                              >> 3U))) 
                                                       | ((2U 
                                                           & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                                                               >> 2U) 
                                                              & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                                                 >> 5U))) 
                                                          | (1U 
                                                             & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                                                                 >> 3U) 
                                                                & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                                                   >> 7U))))))))))),8);
            tracep->chgCData(oldp+151,((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ecall) 
                                         << 1U) | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ebreak))),2);
            tracep->chgBit(oldp+152,((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb))));
            tracep->chgBit(oldp+153,((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh) 
                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh))));
            tracep->chgBit(oldp+154,((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw) 
                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw))));
            tracep->chgBit(oldp+155,(((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld))));
            tracep->chgBit(oldp+156,(((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divw) 
                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divuw)) 
                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remw)) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remuw))));
            tracep->chgBit(oldp+157,((((((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addiw) 
                                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
                                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
                                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraw))));
            tracep->chgSData(oldp+158,((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh) 
                                          << 9U) | 
                                         (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw) 
                                           << 8U) | 
                                          (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld) 
                                            << 7U) 
                                           | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu) 
                                               << 6U) 
                                              | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd)))))))))))),11);
            tracep->chgCData(oldp+159,((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mul) 
                                         << 4U) | (
                                                   ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulh) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhsu) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhu) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulw)))))),5);
            tracep->chgCData(oldp+160,((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_rem) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remu) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remw) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remuw))))),4);
            tracep->chgCData(oldp+161,((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_div) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divu) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divw) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divuw))))),4);
            tracep->chgCData(oldp+162,((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrw) 
                                         << 5U) | (
                                                   ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrs) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrc) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrwi) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrsi) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrci))))))),6);
            tracep->chgIData(oldp+163,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i),32);
            tracep->chgSData(oldp+164,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__alu_op),12);
            tracep->chgCData(oldp+165,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src1),3);
            tracep->chgCData(oldp+166,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2),4);
            tracep->chgBit(oldp+167,((((((((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb)) 
                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd))));
            tracep->chgBit(oldp+168,(((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb) 
                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd))));
            tracep->chgBit(oldp+169,((1U & ((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                                                                                | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
                                                                                >> 0x17U) 
                                                                                | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                                                                                >> 0xfU)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_jalr)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_beq)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addi)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slti)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltiu)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xori)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ori)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_andi)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slli)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srli)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srai)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_add)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sub)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sll)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slt)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltu)) 
                                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xor)) 
                                                                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srl)) 
                                                                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sra)) 
                                                                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_or)) 
                                                                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_and)) 
                                                                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                                                                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                                                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srli)) 
                                                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srai)) 
                                                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addiw)) 
                                                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                                                                     | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
                                                                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
                                                                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                                                                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
                                                                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                                                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraw)) 
                                                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrw)) 
                                                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrs)) 
                                                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrc)) 
                                                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrwi)) 
                                                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrsi)) 
                                                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrci)) 
                                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mul)) 
                                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulh)) 
                                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhsu)) 
                                                     | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhu)) 
                                                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_div)) 
                                                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divu)) 
                                                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_rem)) 
                                                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remu)) 
                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulw)) 
                                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divw)) 
                                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divuw)) 
                                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remw)) 
                                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remuw)))));
            tracep->chgBit(oldp+170,((((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu))));
            tracep->chgQData(oldp+171,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1),64);
            tracep->chgQData(oldp+173,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2),64);
            tracep->chgBit(oldp+175,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_start));
            tracep->chgBit(oldp+176,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_signed));
            tracep->chgQData(oldp+177,(((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_signed)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1)))
                                         : (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1)))),64);
            tracep->chgQData(oldp+179,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data1_i),64);
            tracep->chgQData(oldp+181,(((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_signed)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2)))
                                         : (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2)))),64);
            tracep->chgQData(oldp+183,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__div_data2_i),64);
            tracep->chgQData(oldp+185,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result),64);
            tracep->chgQData(oldp+187,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result),64);
            tracep->chgWData(oldp+189,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s),65);
            VL_ADD_W(5, __Vtemp229874, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c);
            __Vtemp229875[0U] = __Vtemp229874[0U];
            __Vtemp229875[1U] = __Vtemp229874[1U];
            __Vtemp229875[2U] = __Vtemp229874[2U];
            __Vtemp229875[3U] = __Vtemp229874[3U];
            __Vtemp229875[4U] = (1U & __Vtemp229874[4U]);
            tracep->chgWData(oldp+192,(__Vtemp229875),129);
            tracep->chgWData(oldp+197,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[0]),129);
            tracep->chgWData(oldp+202,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[1]),129);
            tracep->chgWData(oldp+207,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[2]),129);
            tracep->chgWData(oldp+212,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[3]),129);
            tracep->chgWData(oldp+217,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[4]),129);
            tracep->chgWData(oldp+222,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[0]),129);
            tracep->chgWData(oldp+227,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[1]),129);
            tracep->chgWData(oldp+232,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[2]),129);
            tracep->chgWData(oldp+237,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s[0]),129);
            tracep->chgWData(oldp+242,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s[1]),129);
            tracep->chgWData(oldp+247,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[0]),129);
            tracep->chgWData(oldp+252,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[1]),129);
            tracep->chgWData(oldp+257,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s),129);
            tracep->chgWData(oldp+262,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c),129);
            tracep->chgWData(oldp+267,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__s),129);
            tracep->chgWData(oldp+272,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c),129);
            tracep->chgWData(oldp+277,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__s),129);
            tracep->chgWData(oldp+282,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__c),129);
            tracep->chgWData(oldp+287,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__s),129);
            tracep->chgWData(oldp+292,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__c),129);
            tracep->chgWData(oldp+297,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__s),129);
            tracep->chgWData(oldp+302,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__c),129);
            tracep->chgWData(oldp+307,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s),129);
            tracep->chgWData(oldp+312,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c),129);
            tracep->chgWData(oldp+317,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s),129);
            tracep->chgWData(oldp+322,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c),129);
            tracep->chgWData(oldp+327,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s),129);
            tracep->chgWData(oldp+332,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c),129);
            tracep->chgWData(oldp+337,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s),129);
            tracep->chgWData(oldp+342,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__c),129);
            tracep->chgWData(oldp+347,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__s),129);
            tracep->chgWData(oldp+352,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__c),129);
            tracep->chgWData(oldp+357,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s),129);
            tracep->chgWData(oldp+362,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c),129);
            __Vtemp229876[0U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [0U][0U];
            __Vtemp229876[1U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [0U][1U];
            __Vtemp229876[2U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [0U][2U];
            __Vtemp229876[3U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [0U][3U];
            __Vtemp229876[4U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [0U][4U];
            tracep->chgWData(oldp+367,(__Vtemp229876),129);
            tracep->chgWData(oldp+372,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s),129);
            tracep->chgWData(oldp+377,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c),129);
            tracep->chgBit(oldp+382,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [0U][4U])));
            tracep->chgBit(oldp+383,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [0U][0U])));
            tracep->chgBit(oldp+384,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+385,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+386,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+387,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+388,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+389,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+390,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+391,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+392,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 9U))));
            tracep->chgBit(oldp+393,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+394,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+395,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+396,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+397,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+398,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+399,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+400,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+401,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+402,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+403,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+404,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+405,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+406,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+407,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+408,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+409,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+410,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+411,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+412,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+413,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+414,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [0U][0U] >> 0x1fU)));
            tracep->chgBit(oldp+415,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [0U][1U])));
            tracep->chgBit(oldp+416,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+417,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 2U))));
            tracep->chgBit(oldp+418,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 3U))));
            tracep->chgBit(oldp+419,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 4U))));
            tracep->chgBit(oldp+420,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 5U))));
            tracep->chgBit(oldp+421,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 6U))));
            tracep->chgBit(oldp+422,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 7U))));
            tracep->chgBit(oldp+423,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 8U))));
            tracep->chgBit(oldp+424,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 9U))));
            tracep->chgBit(oldp+425,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+426,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+427,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+428,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+429,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+430,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+431,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+432,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+433,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+434,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+435,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+436,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+437,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+438,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+439,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+440,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+441,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+442,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+443,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+444,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+445,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+446,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [0U][1U] >> 0x1fU)));
            tracep->chgBit(oldp+447,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [0U][2U])));
            tracep->chgBit(oldp+448,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+449,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 2U))));
            tracep->chgBit(oldp+450,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 3U))));
            tracep->chgBit(oldp+451,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 4U))));
            tracep->chgBit(oldp+452,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+453,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+454,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+455,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+456,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 9U))));
            tracep->chgBit(oldp+457,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+458,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+459,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+460,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+461,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+462,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+463,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+464,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+465,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+466,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+467,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+468,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+469,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+470,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+471,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+472,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+473,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+474,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+475,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+476,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+477,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+478,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [0U][2U] >> 0x1fU)));
            tracep->chgBit(oldp+479,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [0U][3U])));
            tracep->chgBit(oldp+480,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 1U))));
            tracep->chgBit(oldp+481,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 2U))));
            tracep->chgBit(oldp+482,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 3U))));
            tracep->chgBit(oldp+483,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 4U))));
            tracep->chgBit(oldp+484,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 5U))));
            tracep->chgBit(oldp+485,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 6U))));
            tracep->chgBit(oldp+486,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 7U))));
            tracep->chgBit(oldp+487,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 8U))));
            tracep->chgBit(oldp+488,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 9U))));
            tracep->chgBit(oldp+489,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+490,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+491,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+492,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+493,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+494,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+495,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+496,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+497,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+498,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+499,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+500,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+501,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+502,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+503,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+504,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+505,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+506,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+507,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+508,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+509,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+510,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [0U][3U] >> 0x1fU)));
            __Vtemp230006[0U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [1U][0U];
            __Vtemp230006[1U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [1U][1U];
            __Vtemp230006[2U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [1U][2U];
            __Vtemp230006[3U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [1U][3U];
            __Vtemp230006[4U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [1U][4U];
            tracep->chgWData(oldp+511,(__Vtemp230006),129);
            __Vtemp230007[0U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [2U][0U];
            __Vtemp230007[1U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [2U][1U];
            __Vtemp230007[2U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [2U][2U];
            __Vtemp230007[3U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [2U][3U];
            __Vtemp230007[4U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [2U][4U];
            tracep->chgWData(oldp+516,(__Vtemp230007),129);
            __Vtemp230008[0U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [3U][0U];
            __Vtemp230008[1U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [3U][1U];
            __Vtemp230008[2U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [3U][2U];
            __Vtemp230008[3U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [3U][3U];
            __Vtemp230008[4U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                [3U][4U];
            tracep->chgWData(oldp+521,(__Vtemp230008),129);
            tracep->chgWData(oldp+526,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s),129);
            tracep->chgWData(oldp+531,(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c),129);
            tracep->chgBit(oldp+536,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][4U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][4U]) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][4U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][4U])) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][4U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][4U])))));
            tracep->chgBit(oldp+537,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [1U][4U])));
            tracep->chgBit(oldp+538,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [2U][4U])));
            tracep->chgBit(oldp+539,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [3U][4U])));
            tracep->chgBit(oldp+540,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][4U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][4U]) 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][4U]))));
            tracep->chgBit(oldp+541,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][4U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][4U]))));
            tracep->chgBit(oldp+542,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][4U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][4U]))));
            tracep->chgBit(oldp+543,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][4U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][4U]))));
            tracep->chgBit(oldp+544,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][4U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][4U]))));
            tracep->chgBit(oldp+545,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [1U][0U])));
            tracep->chgBit(oldp+546,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [2U][0U])));
            tracep->chgBit(oldp+547,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [3U][0U])));
            tracep->chgBit(oldp+548,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U]))));
            tracep->chgBit(oldp+549,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][0U]) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][0U])) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U])))));
            tracep->chgBit(oldp+550,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U]))));
            tracep->chgBit(oldp+551,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U]))));
            tracep->chgBit(oldp+552,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U]))));
            tracep->chgBit(oldp+553,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U]))));
            tracep->chgBit(oldp+554,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+555,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+556,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+557,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+558,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 1U))));
            tracep->chgBit(oldp+559,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+560,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+561,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+562,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+563,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+564,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+565,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+566,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+567,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 2U))));
            tracep->chgBit(oldp+568,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+569,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+570,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+571,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+572,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+573,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+574,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+575,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+576,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 3U))));
            tracep->chgBit(oldp+577,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+578,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+579,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+580,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+581,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+582,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+583,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+584,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+585,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 4U))));
            tracep->chgBit(oldp+586,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+587,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+588,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+589,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+590,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+591,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+592,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+593,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+594,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 5U))));
            tracep->chgBit(oldp+595,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+596,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+597,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+598,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+599,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+600,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+601,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+602,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+603,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 6U))));
            tracep->chgBit(oldp+604,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+605,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+606,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+607,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+608,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+609,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+610,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+611,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+612,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 7U))));
            tracep->chgBit(oldp+613,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+614,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+615,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+616,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+617,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+618,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+619,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+620,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+621,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 8U))));
            tracep->chgBit(oldp+622,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+623,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+624,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+625,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+626,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 9U))));
            tracep->chgBit(oldp+627,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 9U))));
            tracep->chgBit(oldp+628,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 9U))));
            tracep->chgBit(oldp+629,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+630,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 9U))));
            tracep->chgBit(oldp+631,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+632,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+633,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+634,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+635,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+636,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+637,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+638,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+639,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+640,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+641,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+642,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+643,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+644,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+645,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+646,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+647,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+648,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+649,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+650,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+651,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+652,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+653,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+654,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+655,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+656,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+657,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+658,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+659,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+660,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+661,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+662,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+663,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+664,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+665,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+666,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+667,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+668,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+669,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+670,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+671,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+672,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+673,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+674,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+675,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+676,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+677,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+678,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+679,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+680,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+681,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+682,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+683,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+684,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+685,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+686,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+687,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+688,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+689,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+690,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+691,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+692,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+693,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+694,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+695,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+696,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+697,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+698,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+699,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+700,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+701,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+702,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+703,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+704,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+705,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+706,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+707,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+708,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+709,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+710,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+711,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+712,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+713,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+714,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+715,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+716,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+717,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+718,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+719,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+720,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+721,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+722,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+723,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+724,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+725,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+726,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+727,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+728,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+729,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+730,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+731,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+732,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+733,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+734,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+735,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+736,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+737,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+738,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+739,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+740,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+741,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+742,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+743,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+744,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+745,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+746,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+747,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+748,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+749,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+750,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+751,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+752,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+753,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+754,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+755,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+756,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+757,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+758,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+759,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+760,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+761,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+762,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+763,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+764,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+765,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+766,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+767,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+768,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+769,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+770,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+771,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+772,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+773,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+774,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+775,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+776,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+777,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+778,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+779,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+780,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+781,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+782,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+783,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+784,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+785,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+786,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+787,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+788,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+789,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+790,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+791,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+792,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+793,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+794,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+795,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+796,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+797,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+798,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+799,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+800,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+801,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+802,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+803,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+804,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+805,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+806,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+807,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+808,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+809,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+810,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+811,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+812,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+813,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+814,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+815,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+816,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+817,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+818,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+819,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][0U])) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+820,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+821,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+822,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+823,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][0U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+824,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [1U][0U] >> 0x1fU)));
            tracep->chgBit(oldp+825,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [2U][0U] >> 0x1fU)));
            tracep->chgBit(oldp+826,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [3U][0U] >> 0x1fU)));
            tracep->chgBit(oldp+827,((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][0U] ^ 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [2U][0U]) ^ 
                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][0U]) >> 0x1fU)));
            tracep->chgBit(oldp+828,(((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [2U][0U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][0U]) 
                                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][0U])) 
                                       | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [2U][0U])) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+829,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [2U][0U]) >> 0x1fU)));
            tracep->chgBit(oldp+830,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [2U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][0U]) >> 0x1fU)));
            tracep->chgBit(oldp+831,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][0U]) >> 0x1fU)));
            tracep->chgBit(oldp+832,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [2U][0U]) >> 0x1fU)));
            tracep->chgBit(oldp+833,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [1U][1U])));
            tracep->chgBit(oldp+834,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [2U][1U])));
            tracep->chgBit(oldp+835,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                      [3U][1U])));
            tracep->chgBit(oldp+836,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U]))));
            tracep->chgBit(oldp+837,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][1U])) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U])))));
            tracep->chgBit(oldp+838,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U]))));
            tracep->chgBit(oldp+839,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U]))));
            tracep->chgBit(oldp+840,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U]))));
            tracep->chgBit(oldp+841,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U]))));
            tracep->chgBit(oldp+842,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+843,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+844,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+845,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+846,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 1U))));
            tracep->chgBit(oldp+847,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+848,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+849,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+850,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+851,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 2U))));
            tracep->chgBit(oldp+852,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 2U))));
            tracep->chgBit(oldp+853,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 2U))));
            tracep->chgBit(oldp+854,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+855,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 2U))));
            tracep->chgBit(oldp+856,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+857,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+858,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+859,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+860,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 3U))));
            tracep->chgBit(oldp+861,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 3U))));
            tracep->chgBit(oldp+862,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 3U))));
            tracep->chgBit(oldp+863,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+864,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 3U))));
            tracep->chgBit(oldp+865,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+866,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+867,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+868,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+869,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 4U))));
            tracep->chgBit(oldp+870,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 4U))));
            tracep->chgBit(oldp+871,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 4U))));
            tracep->chgBit(oldp+872,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+873,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 4U))));
            tracep->chgBit(oldp+874,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+875,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+876,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+877,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+878,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 5U))));
            tracep->chgBit(oldp+879,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 5U))));
            tracep->chgBit(oldp+880,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 5U))));
            tracep->chgBit(oldp+881,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+882,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 5U))));
            tracep->chgBit(oldp+883,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+884,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+885,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+886,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+887,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 6U))));
            tracep->chgBit(oldp+888,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 6U))));
            tracep->chgBit(oldp+889,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 6U))));
            tracep->chgBit(oldp+890,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+891,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 6U))));
            tracep->chgBit(oldp+892,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+893,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+894,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+895,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+896,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 7U))));
            tracep->chgBit(oldp+897,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 7U))));
            tracep->chgBit(oldp+898,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 7U))));
            tracep->chgBit(oldp+899,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+900,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 7U))));
            tracep->chgBit(oldp+901,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+902,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+903,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+904,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+905,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 8U))));
            tracep->chgBit(oldp+906,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 8U))));
            tracep->chgBit(oldp+907,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 8U))));
            tracep->chgBit(oldp+908,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+909,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 8U))));
            tracep->chgBit(oldp+910,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+911,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+912,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+913,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+914,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 9U))));
            tracep->chgBit(oldp+915,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 9U))));
            tracep->chgBit(oldp+916,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 9U))));
            tracep->chgBit(oldp+917,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+918,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 9U))));
            tracep->chgBit(oldp+919,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+920,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+921,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+922,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+923,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+924,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+925,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+926,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+927,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+928,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+929,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+930,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+931,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+932,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+933,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+934,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+935,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+936,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+937,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+938,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+939,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+940,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+941,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+942,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+943,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+944,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+945,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+946,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+947,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+948,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+949,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+950,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+951,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+952,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+953,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+954,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+955,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+956,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+957,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+958,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+959,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+960,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+961,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+962,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+963,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+964,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+965,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+966,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+967,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+968,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+969,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+970,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+971,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+972,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+973,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+974,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+975,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+976,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+977,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+978,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+979,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+980,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+981,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+982,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+983,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+984,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+985,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+986,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+987,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+988,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+989,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+990,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+991,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+992,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+993,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+994,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+995,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+996,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+997,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+998,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+999,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U])) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+1000,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1001,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1002,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1003,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1004,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1005,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1006,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1007,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][1U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1008,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][1U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][1U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][1U])) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1009,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1010,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1011,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1012,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1013,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1014,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1015,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1016,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][1U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1017,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][1U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][1U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][1U])) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1018,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1019,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1020,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1021,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1022,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1023,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1024,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1025,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][1U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1026,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][1U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][1U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][1U])) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1027,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1028,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1029,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1030,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1031,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1032,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1033,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1034,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][1U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1035,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][1U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][1U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][1U])) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1036,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1037,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1038,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1039,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1040,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1041,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1042,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1043,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][1U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1044,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][1U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][1U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][1U])) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1045,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1046,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1047,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1048,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1049,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1050,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1051,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1052,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][1U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1053,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][1U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][1U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][1U])) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1054,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1055,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1056,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1057,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1058,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1059,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1060,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1061,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][1U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1062,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][1U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][1U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][1U])) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1063,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1064,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1065,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1066,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1067,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1068,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1069,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1070,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][1U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1071,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][1U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][1U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][1U])) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1072,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1073,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1074,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1075,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1076,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1077,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1078,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1079,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][1U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1080,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][1U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][1U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][1U])) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1081,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1082,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1083,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1084,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1085,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1086,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1087,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1088,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][1U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1089,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][1U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][1U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][1U])) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1090,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1091,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1092,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1093,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1094,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1095,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1096,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1097,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][1U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1098,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][1U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][1U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][1U])) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1099,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1100,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1101,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1102,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1103,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1104,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1105,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1106,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][1U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][1U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1107,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][1U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][1U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][1U])) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1108,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1109,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1110,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][1U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1111,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][1U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1112,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][1U] >> 0x1fU)));
            tracep->chgBit(oldp+1113,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [2U][1U] >> 0x1fU)));
            tracep->chgBit(oldp+1114,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][1U] >> 0x1fU)));
            tracep->chgBit(oldp+1115,((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][1U] ^ 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [2U][1U]) 
                                        ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][1U]) >> 0x1fU)));
            tracep->chgBit(oldp+1116,(((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [2U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][1U]) 
                                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U])) 
                                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [2U][1U])) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1117,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][1U] ^ 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [2U][1U]) >> 0x1fU)));
            tracep->chgBit(oldp+1118,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [2U][1U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][1U]) >> 0x1fU)));
            tracep->chgBit(oldp+1119,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][1U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][1U]) >> 0x1fU)));
            tracep->chgBit(oldp+1120,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][1U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [2U][1U]) >> 0x1fU)));
            tracep->chgBit(oldp+1121,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][2U])));
            tracep->chgBit(oldp+1122,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [2U][2U])));
            tracep->chgBit(oldp+1123,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][2U])));
            tracep->chgBit(oldp+1124,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U]))));
            tracep->chgBit(oldp+1125,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][2U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][2U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U])))));
            tracep->chgBit(oldp+1126,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U]))));
            tracep->chgBit(oldp+1127,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U]))));
            tracep->chgBit(oldp+1128,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U]))));
            tracep->chgBit(oldp+1129,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U]))));
            tracep->chgBit(oldp+1130,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1131,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1132,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1133,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1134,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 1U))));
            tracep->chgBit(oldp+1135,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1136,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1137,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1138,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1139,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1140,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1141,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1142,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1143,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 2U))));
            tracep->chgBit(oldp+1144,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1145,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1146,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1147,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1148,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1149,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1150,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1151,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1152,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 3U))));
            tracep->chgBit(oldp+1153,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1154,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1155,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1156,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1157,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1158,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1159,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1160,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1161,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 4U))));
            tracep->chgBit(oldp+1162,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1163,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1164,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1165,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1166,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1167,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1168,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1169,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1170,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 5U))));
            tracep->chgBit(oldp+1171,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1172,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1173,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1174,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1175,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1176,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1177,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1178,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1179,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 6U))));
            tracep->chgBit(oldp+1180,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1181,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1182,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1183,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1184,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1185,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1186,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1187,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1188,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 7U))));
            tracep->chgBit(oldp+1189,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1190,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1191,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1192,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1193,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1194,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1195,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1196,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1197,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 8U))));
            tracep->chgBit(oldp+1198,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1199,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1200,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1201,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1202,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1203,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1204,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1205,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1206,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 9U))));
            tracep->chgBit(oldp+1207,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1208,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1209,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1210,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1211,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1212,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1213,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1214,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1215,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1216,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1217,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1218,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1219,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1220,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1221,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1222,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1223,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1224,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1225,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1226,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1227,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1228,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1229,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1230,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1231,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1232,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1233,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1234,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1235,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1236,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1237,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1238,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1239,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1240,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1241,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1242,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1243,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1244,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1245,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1246,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1247,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1248,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1249,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1250,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1251,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1252,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1253,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1254,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1255,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1256,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1257,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1258,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1259,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1260,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1261,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1262,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1263,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1264,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1265,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1266,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1267,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1268,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1269,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1270,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1271,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1272,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1273,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1274,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1275,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1276,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1277,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1278,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1279,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1280,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1281,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1282,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1283,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1284,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1285,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1286,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1287,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1288,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1289,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1290,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1291,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1292,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1293,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1294,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1295,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1296,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1297,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1298,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1299,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1300,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1301,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1302,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1303,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1304,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1305,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1306,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1307,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1308,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1309,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1310,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1311,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1312,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1313,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1314,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1315,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1316,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1317,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1318,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1319,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1320,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1321,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1322,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1323,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1324,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1325,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1326,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1327,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1328,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1329,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1330,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1331,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1332,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1333,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1334,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1335,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1336,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1337,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1338,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1339,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1340,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1341,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1342,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1343,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1344,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1345,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1346,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1347,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1348,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1349,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1350,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1351,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1352,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1353,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1354,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1355,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1356,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1357,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1358,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1359,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1360,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1361,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1362,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1363,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1364,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1365,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1366,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1367,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1368,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1369,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1370,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1371,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1372,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1373,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1374,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1375,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1376,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1377,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1378,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1379,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1380,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1381,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1382,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1383,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1384,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1385,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1386,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1387,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1388,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1389,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1390,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1391,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1392,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][2U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1393,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1394,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1395,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][2U])) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1396,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1397,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1398,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][2U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1399,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][2U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1400,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][2U] >> 0x1fU)));
            tracep->chgBit(oldp+1401,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [2U][2U] >> 0x1fU)));
            tracep->chgBit(oldp+1402,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][2U] >> 0x1fU)));
            tracep->chgBit(oldp+1403,((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][2U] ^ 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [2U][2U]) 
                                        ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][2U]) >> 0x1fU)));
            tracep->chgBit(oldp+1404,(((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [2U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][2U]) 
                                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][2U])) 
                                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [2U][2U])) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1405,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][2U] ^ 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [2U][2U]) >> 0x1fU)));
            tracep->chgBit(oldp+1406,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [2U][2U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][2U]) >> 0x1fU)));
            tracep->chgBit(oldp+1407,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][2U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][2U]) >> 0x1fU)));
            tracep->chgBit(oldp+1408,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][2U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [2U][2U]) >> 0x1fU)));
            tracep->chgBit(oldp+1409,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][3U])));
            tracep->chgBit(oldp+1410,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [2U][3U])));
            tracep->chgBit(oldp+1411,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][3U])));
            tracep->chgBit(oldp+1412,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U]))));
            tracep->chgBit(oldp+1413,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [3U][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [3U][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [1U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U])))));
            tracep->chgBit(oldp+1414,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U]))));
            tracep->chgBit(oldp+1415,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U]))));
            tracep->chgBit(oldp+1416,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U]))));
            tracep->chgBit(oldp+1417,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U]))));
            tracep->chgBit(oldp+1418,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1419,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1420,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1421,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1422,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 1U))));
            tracep->chgBit(oldp+1423,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1424,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1425,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1426,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1427,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1428,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1429,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1430,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1431,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 2U))));
            tracep->chgBit(oldp+1432,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1433,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1434,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1435,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1436,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1437,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1438,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1439,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1440,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 3U))));
            tracep->chgBit(oldp+1441,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1442,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1443,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1444,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1445,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1446,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1447,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1448,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1449,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 4U))));
            tracep->chgBit(oldp+1450,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1451,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1452,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1453,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1454,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1455,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1456,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1457,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1458,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 5U))));
            tracep->chgBit(oldp+1459,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1460,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1461,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1462,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1463,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1464,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1465,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1466,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1467,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 6U))));
            tracep->chgBit(oldp+1468,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1469,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1470,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1471,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1472,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1473,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1474,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1475,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1476,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 7U))));
            tracep->chgBit(oldp+1477,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1478,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1479,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1480,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1481,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1482,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1483,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1484,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1485,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 8U))));
            tracep->chgBit(oldp+1486,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1487,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1488,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1489,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1490,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1491,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1492,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1493,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1494,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 9U))));
            tracep->chgBit(oldp+1495,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1496,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1497,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1498,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1499,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1500,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1501,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1502,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1503,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1504,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1505,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1506,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1507,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1508,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1509,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1510,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1511,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1512,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1513,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1514,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1515,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1516,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1517,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1518,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1519,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1520,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1521,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1522,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1523,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1524,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1525,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1526,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1527,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1528,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1529,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1530,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1531,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1532,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1533,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1534,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1535,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1536,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1537,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1538,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1539,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1540,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1541,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1542,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1543,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1544,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1545,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1546,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1547,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1548,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1549,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1550,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1551,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1552,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1553,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1554,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1555,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1556,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1557,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1558,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1559,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1560,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1561,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1562,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1563,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1564,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1565,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1566,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1567,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1568,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1569,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1570,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1571,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1572,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1573,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1574,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1575,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1576,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1577,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1578,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1579,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1580,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1581,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1582,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1583,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1584,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1585,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1586,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1587,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1588,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1589,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1590,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1591,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1592,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1593,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1594,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1595,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1596,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1597,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1598,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1599,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1600,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1601,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1602,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1603,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1604,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1605,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1606,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1607,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1608,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1609,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1610,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1611,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1612,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1613,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1614,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1615,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1616,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1617,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1618,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1619,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1620,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1621,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1622,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1623,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1624,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1625,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1626,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1627,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1628,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1629,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1630,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1631,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1632,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1633,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1634,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1635,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1636,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1637,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1638,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1639,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1640,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1641,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1642,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1643,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1644,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1645,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1646,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1647,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1648,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1649,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1650,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1651,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1652,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1653,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1654,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1655,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1656,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1657,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1658,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1659,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1660,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1661,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1662,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1663,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1664,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1665,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1666,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1667,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1668,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1669,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1670,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1671,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1672,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1673,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [1U][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                               [2U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1674,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [2U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                [3U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [3U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [1U][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                 [2U][3U])) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1675,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1676,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1677,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [3U][3U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1678,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [1U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                              [2U][3U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1679,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1680,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [2U][3U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1681,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U] 
                                             >> 0x1eU))));
        }
    }
}
