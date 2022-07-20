// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceFullSub13(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<5>/*159:0*/ __Vtemp113330;
    VlWide<5>/*159:0*/ __Vtemp113334;
    VlWide<3>/*95:0*/ __Vtemp113344;
    VlWide<5>/*159:0*/ __Vtemp113345;
    VlWide<5>/*159:0*/ __Vtemp115152;
    VlWide<5>/*159:0*/ __Vtemp115153;
    VlWide<5>/*159:0*/ __Vtemp115154;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        VL_ADD_W(5, __Vtemp113330, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c);
        VL_ADD_W(5, __Vtemp113334, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c);
        if ((1U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo))) {
            __Vtemp113344[0U] = (IData)((((QData)((IData)(
                                                          (- (IData)(
                                                                     (__Vtemp113330[0U] 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
                                                            + 
                                                            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U])))));
            __Vtemp113344[1U] = (IData)(((((QData)((IData)(
                                                           (- (IData)(
                                                                      (__Vtemp113330[0U] 
                                                                       >> 0x1fU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
                                                             + 
                                                             vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U])))) 
                                         >> 0x20U));
        } else {
            __Vtemp113344[0U] = ((2U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo))
                                  ? (IData)((((QData)((IData)(
                                                              __Vtemp113334[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               __Vtemp113334[2U]))))
                                  : ((4U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo))
                                      ? (IData)(((((QData)((IData)(
                                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]))) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U])))))
                                      : 0U));
            __Vtemp113344[1U] = ((2U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo))
                                  ? (IData)(((((QData)((IData)(
                                                               __Vtemp113334[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                __Vtemp113334[2U]))) 
                                             >> 0x20U))
                                  : ((4U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo))
                                      ? (IData)((((
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U])))) 
                                                 >> 0x20U))
                                      : 0U));
        }
        tracep->fullBit(oldp+17862,(((1U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo))
                                      ? 1U : ((2U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo))
                                               ? 1U
                                               : ((4U 
                                                   & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo))
                                                   ? 1U
                                                   : 0U)))));
        tracep->fullQData(oldp+17863,(((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over)
                                        ? ((0x8000000U 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                            ? ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_signed)
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp)))
                                                : (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp)))
                                            : vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp)
                                        : 0ULL)),64);
        tracep->fullQData(oldp+17865,((QData)((IData)(
                                                      (1U 
                                                       & (~ 
                                                          vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U]))))),64);
        tracep->fullBit(oldp+17867,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U])));
        tracep->fullWData(oldp+17868,(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c),65);
        tracep->fullBit(oldp+17871,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])));
        tracep->fullBit(oldp+17872,((1U & ((((((~ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U]) 
                                               & (~ 
                                                  vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U])) 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                             | (((~ 
                                                  vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U]) 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                                & (~ 
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))) 
                                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & (~ 
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U])) 
                                               & (~ 
                                                  vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))) 
                                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])))));
        tracep->fullBit(oldp+17873,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])))));
        tracep->fullBit(oldp+17874,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 1U))));
        tracep->fullBit(oldp+17875,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 1U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 1U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 1U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 1U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 1U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 1U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 1U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 1U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 1U)))));
        tracep->fullBit(oldp+17876,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 1U))));
        tracep->fullBit(oldp+17877,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 2U))));
        tracep->fullBit(oldp+17878,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 2U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 2U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 2U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 2U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 2U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 2U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 2U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 2U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 2U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 2U)))));
        tracep->fullBit(oldp+17879,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 2U))));
        tracep->fullBit(oldp+17880,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 3U))));
        tracep->fullBit(oldp+17881,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 3U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 3U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 3U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 3U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 3U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 3U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 3U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 3U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 3U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 3U)))));
        tracep->fullBit(oldp+17882,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 3U))));
        tracep->fullBit(oldp+17883,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 4U))));
        tracep->fullBit(oldp+17884,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 4U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 4U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 4U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 4U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 4U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 4U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 4U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 4U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 4U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 4U)))));
        tracep->fullBit(oldp+17885,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 4U))));
        tracep->fullBit(oldp+17886,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 5U))));
        tracep->fullBit(oldp+17887,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 5U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 5U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 5U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 5U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 5U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 5U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 5U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 5U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 5U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 5U)))));
        tracep->fullBit(oldp+17888,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 5U))));
        tracep->fullBit(oldp+17889,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 6U))));
        tracep->fullBit(oldp+17890,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 6U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 6U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 6U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 6U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 6U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 6U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 6U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 6U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 6U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 6U)))));
        tracep->fullBit(oldp+17891,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 6U))));
        tracep->fullBit(oldp+17892,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 7U))));
        tracep->fullBit(oldp+17893,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 7U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 7U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 7U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 7U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 7U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 7U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 7U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 7U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 7U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 7U)))));
        tracep->fullBit(oldp+17894,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 7U))));
        tracep->fullBit(oldp+17895,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 8U))));
        tracep->fullBit(oldp+17896,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 8U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 8U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 8U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 8U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 8U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 8U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 8U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 8U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 8U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 8U)))));
        tracep->fullBit(oldp+17897,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 8U))));
        tracep->fullBit(oldp+17898,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 9U))));
        tracep->fullBit(oldp+17899,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 9U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 9U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 9U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 9U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 9U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 9U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 9U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 9U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 9U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 9U)))));
        tracep->fullBit(oldp+17900,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 9U))));
        tracep->fullBit(oldp+17901,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+17902,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0xaU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0xaU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0xaU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0xaU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0xaU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0xaU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0xaU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0xaU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0xaU)))));
        tracep->fullBit(oldp+17903,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+17904,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+17905,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0xbU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0xbU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0xbU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0xbU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0xbU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0xbU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0xbU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0xbU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0xbU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0xbU)))));
        tracep->fullBit(oldp+17906,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+17907,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+17908,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0xcU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0xcU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0xcU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0xcU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0xcU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0xcU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0xcU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0xcU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0xcU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0xcU)))));
        tracep->fullBit(oldp+17909,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+17910,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+17911,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0xdU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0xdU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0xdU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0xdU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0xdU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0xdU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0xdU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0xdU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0xdU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0xdU)))));
        tracep->fullBit(oldp+17912,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+17913,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+17914,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0xeU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0xeU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0xeU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0xeU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0xeU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0xeU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0xeU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0xeU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0xeU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0xeU)))));
        tracep->fullBit(oldp+17915,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+17916,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+17917,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0xfU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0xfU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0xfU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0xfU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0xfU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0xfU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0xfU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0xfU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0xfU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0xfU)))));
        tracep->fullBit(oldp+17918,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+17919,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+17920,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x10U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x10U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0x10U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x10U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x10U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0x10U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0x10U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x10U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0x10U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0x10U)))));
        tracep->fullBit(oldp+17921,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+17922,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+17923,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x11U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x11U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0x11U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x11U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x11U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0x11U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0x11U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x11U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0x11U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0x11U)))));
        tracep->fullBit(oldp+17924,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+17925,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+17926,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x12U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x12U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0x12U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x12U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x12U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0x12U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0x12U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x12U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0x12U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0x12U)))));
        tracep->fullBit(oldp+17927,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+17928,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+17929,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x13U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x13U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0x13U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x13U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x13U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0x13U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0x13U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x13U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0x13U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0x13U)))));
        tracep->fullBit(oldp+17930,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+17931,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+17932,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x14U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x14U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0x14U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x14U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x14U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0x14U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0x14U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x14U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0x14U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0x14U)))));
        tracep->fullBit(oldp+17933,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+17934,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+17935,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x15U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x15U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0x15U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x15U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x15U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0x15U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0x15U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x15U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0x15U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0x15U)))));
        tracep->fullBit(oldp+17936,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+17937,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+17938,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x16U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x16U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0x16U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x16U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x16U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0x16U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0x16U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x16U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0x16U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0x16U)))));
        tracep->fullBit(oldp+17939,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+17940,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+17941,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x17U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x17U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0x17U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x17U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x17U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0x17U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0x17U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x17U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0x17U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0x17U)))));
        tracep->fullBit(oldp+17942,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+17943,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+17944,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x18U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x18U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0x18U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x18U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x18U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0x18U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0x18U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x18U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0x18U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0x18U)))));
        tracep->fullBit(oldp+17945,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+17946,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+17947,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x19U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x19U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0x19U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x19U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x19U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0x19U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0x19U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x19U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0x19U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0x19U)))));
        tracep->fullBit(oldp+17948,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+17949,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+17950,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x1aU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x1aU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0x1aU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x1aU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1aU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0x1aU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0x1aU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1aU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0x1aU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0x1aU)))));
        tracep->fullBit(oldp+17951,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+17952,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+17953,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x1bU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x1bU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0x1bU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x1bU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1bU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0x1bU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0x1bU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1bU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0x1bU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0x1bU)))));
        tracep->fullBit(oldp+17954,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+17955,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+17956,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x1cU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x1cU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0x1cU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x1cU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1cU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0x1cU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0x1cU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1cU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0x1cU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0x1cU)))));
        tracep->fullBit(oldp+17957,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+17958,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+17959,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x1dU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x1dU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0x1dU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x1dU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1dU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0x1dU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0x1dU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1dU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0x1dU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0x1dU)))));
        tracep->fullBit(oldp+17960,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+17961,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+17962,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x1eU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x1eU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0x1eU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x1eU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1eU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0x1eU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0x1eU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1eU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0x1eU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0x1eU)))));
        tracep->fullBit(oldp+17963,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+17964,((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+17965,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x1fU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x1fU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                 >> 0x1fU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                   >> 0x1fU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1fU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                    >> 0x1fU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1fU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 0x1fU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                                              >> 0x1fU)))));
        tracep->fullBit(oldp+17966,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                       & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                          | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                      | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+17967,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])));
        tracep->fullBit(oldp+17968,((1U & ((((((~ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U]) 
                                               & (~ 
                                                  vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U])) 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                             | (((~ 
                                                  vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U]) 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                                & (~ 
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))) 
                                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & (~ 
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U])) 
                                               & (~ 
                                                  vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))) 
                                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])))));
        tracep->fullBit(oldp+17969,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])))));
        tracep->fullBit(oldp+17970,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 1U))));
        tracep->fullBit(oldp+17971,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 1U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 1U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 1U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 1U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 1U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 1U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 1U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 1U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 1U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 1U)))));
        tracep->fullBit(oldp+17972,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 1U))));
        tracep->fullBit(oldp+17973,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 2U))));
        tracep->fullBit(oldp+17974,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 2U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 2U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 2U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 2U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 2U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 2U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 2U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 2U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 2U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 2U)))));
        tracep->fullBit(oldp+17975,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 2U))));
        tracep->fullBit(oldp+17976,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 3U))));
        tracep->fullBit(oldp+17977,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 3U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 3U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 3U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 3U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 3U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 3U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 3U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 3U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 3U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 3U)))));
        tracep->fullBit(oldp+17978,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 3U))));
        tracep->fullBit(oldp+17979,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 4U))));
        tracep->fullBit(oldp+17980,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 4U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 4U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 4U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 4U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 4U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 4U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 4U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 4U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 4U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 4U)))));
        tracep->fullBit(oldp+17981,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 4U))));
        tracep->fullBit(oldp+17982,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 5U))));
        tracep->fullBit(oldp+17983,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 5U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 5U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 5U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 5U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 5U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 5U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 5U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 5U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 5U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 5U)))));
        tracep->fullBit(oldp+17984,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 5U))));
        tracep->fullBit(oldp+17985,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 6U))));
        tracep->fullBit(oldp+17986,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 6U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 6U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 6U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 6U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 6U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 6U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 6U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 6U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 6U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 6U)))));
        tracep->fullBit(oldp+17987,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 6U))));
        tracep->fullBit(oldp+17988,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 7U))));
        tracep->fullBit(oldp+17989,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 7U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 7U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 7U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 7U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 7U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 7U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 7U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 7U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 7U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 7U)))));
        tracep->fullBit(oldp+17990,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 7U))));
        tracep->fullBit(oldp+17991,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 8U))));
        tracep->fullBit(oldp+17992,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 8U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 8U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 8U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 8U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 8U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 8U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 8U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 8U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 8U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 8U)))));
        tracep->fullBit(oldp+17993,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 8U))));
        tracep->fullBit(oldp+17994,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 9U))));
        tracep->fullBit(oldp+17995,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 9U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 9U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 9U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 9U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 9U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 9U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 9U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 9U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 9U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 9U)))));
        tracep->fullBit(oldp+17996,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 9U))));
        tracep->fullBit(oldp+17997,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+17998,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0xaU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0xaU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0xaU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0xaU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0xaU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0xaU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0xaU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0xaU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0xaU)))));
        tracep->fullBit(oldp+17999,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18000,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18001,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0xbU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0xbU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0xbU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0xbU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0xbU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0xbU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0xbU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0xbU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0xbU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0xbU)))));
        tracep->fullBit(oldp+18002,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18003,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18004,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0xcU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0xcU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0xcU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0xcU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0xcU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0xcU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0xcU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0xcU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0xcU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0xcU)))));
        tracep->fullBit(oldp+18005,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18006,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18007,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0xdU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0xdU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0xdU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0xdU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0xdU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0xdU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0xdU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0xdU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0xdU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0xdU)))));
        tracep->fullBit(oldp+18008,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18009,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18010,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0xeU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0xeU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0xeU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0xeU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0xeU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0xeU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0xeU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0xeU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0xeU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0xeU)))));
        tracep->fullBit(oldp+18011,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18012,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18013,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0xfU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0xfU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0xfU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0xfU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0xfU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0xfU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0xfU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0xfU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0xfU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0xfU)))));
        tracep->fullBit(oldp+18014,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18015,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18016,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x10U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x10U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0x10U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x10U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x10U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0x10U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0x10U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x10U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0x10U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0x10U)))));
        tracep->fullBit(oldp+18017,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18018,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18019,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x11U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x11U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0x11U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x11U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x11U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0x11U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0x11U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x11U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0x11U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0x11U)))));
        tracep->fullBit(oldp+18020,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18021,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18022,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x12U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x12U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0x12U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x12U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x12U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0x12U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0x12U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x12U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0x12U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0x12U)))));
        tracep->fullBit(oldp+18023,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18024,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18025,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x13U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x13U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0x13U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x13U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x13U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0x13U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0x13U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x13U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0x13U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0x13U)))));
        tracep->fullBit(oldp+18026,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18027,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18028,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x14U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x14U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0x14U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x14U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x14U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0x14U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0x14U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x14U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0x14U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0x14U)))));
        tracep->fullBit(oldp+18029,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18030,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18031,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x15U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x15U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0x15U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x15U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x15U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0x15U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0x15U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x15U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0x15U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0x15U)))));
        tracep->fullBit(oldp+18032,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18033,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18034,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x16U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x16U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0x16U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x16U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x16U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0x16U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0x16U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x16U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0x16U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0x16U)))));
        tracep->fullBit(oldp+18035,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18036,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18037,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x17U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x17U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0x17U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x17U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x17U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0x17U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0x17U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x17U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0x17U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0x17U)))));
        tracep->fullBit(oldp+18038,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18039,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18040,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x18U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x18U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0x18U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x18U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x18U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0x18U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0x18U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x18U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0x18U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0x18U)))));
        tracep->fullBit(oldp+18041,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18042,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18043,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x19U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x19U))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0x19U)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x19U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x19U)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0x19U)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0x19U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x19U))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0x19U)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0x19U)))));
        tracep->fullBit(oldp+18044,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18045,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18046,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x1aU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x1aU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0x1aU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x1aU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1aU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0x1aU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0x1aU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1aU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0x1aU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0x1aU)))));
        tracep->fullBit(oldp+18047,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18048,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18049,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x1bU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x1bU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0x1bU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x1bU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1bU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0x1bU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0x1bU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1bU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0x1bU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0x1bU)))));
        tracep->fullBit(oldp+18050,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18051,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18052,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x1cU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x1cU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0x1cU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x1cU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1cU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0x1cU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0x1cU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1cU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0x1cU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0x1cU)))));
        tracep->fullBit(oldp+18053,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18054,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18055,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x1dU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x1dU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0x1dU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x1dU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1dU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0x1dU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0x1dU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1dU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0x1dU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0x1dU)))));
        tracep->fullBit(oldp+18056,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18057,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18058,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x1eU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x1eU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0x1eU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x1eU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1eU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0x1eU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0x1eU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1eU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0x1eU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0x1eU)))));
        tracep->fullBit(oldp+18059,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18060,((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+18061,((1U & ((((((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x1fU)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x1fU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                 >> 0x1fU)) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                   >> 0x1fU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1fU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                    >> 0x1fU)))) 
                                            | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1fU))) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 0x1fU)))) 
                                           | (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                                              >> 0x1fU)))));
        tracep->fullBit(oldp+18062,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                       & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                          | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                      | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                                     >> 0x1fU)));
        tracep->fullWData(oldp+18063,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0]),129);
        tracep->fullWData(oldp+18068,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[1]),129);
        tracep->fullWData(oldp+18073,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[2]),129);
        tracep->fullWData(oldp+18078,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[3]),129);
        tracep->fullWData(oldp+18083,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[4]),129);
        tracep->fullWData(oldp+18088,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[5]),129);
        tracep->fullWData(oldp+18093,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[6]),129);
        tracep->fullWData(oldp+18098,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[7]),129);
        tracep->fullWData(oldp+18103,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[8]),129);
        tracep->fullWData(oldp+18108,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[9]),129);
        tracep->fullWData(oldp+18113,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[10]),129);
        tracep->fullWData(oldp+18118,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[11]),129);
        tracep->fullWData(oldp+18123,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[12]),129);
        tracep->fullWData(oldp+18128,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[13]),129);
        tracep->fullWData(oldp+18133,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[14]),129);
        tracep->fullWData(oldp+18138,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[15]),129);
        tracep->fullWData(oldp+18143,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[16]),129);
        tracep->fullWData(oldp+18148,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[17]),129);
        tracep->fullWData(oldp+18153,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[18]),129);
        tracep->fullWData(oldp+18158,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[19]),129);
        tracep->fullWData(oldp+18163,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[20]),129);
        tracep->fullWData(oldp+18168,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[21]),129);
        tracep->fullWData(oldp+18173,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[22]),129);
        tracep->fullWData(oldp+18178,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[23]),129);
        tracep->fullWData(oldp+18183,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[24]),129);
        tracep->fullWData(oldp+18188,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[25]),129);
        tracep->fullWData(oldp+18193,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[26]),129);
        tracep->fullWData(oldp+18198,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[27]),129);
        tracep->fullWData(oldp+18203,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[28]),129);
        tracep->fullWData(oldp+18208,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[29]),129);
        tracep->fullWData(oldp+18213,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[0]),129);
        tracep->fullWData(oldp+18218,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[1]),129);
        tracep->fullWData(oldp+18223,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[2]),129);
        tracep->fullWData(oldp+18228,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[3]),129);
        tracep->fullWData(oldp+18233,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[4]),129);
        tracep->fullWData(oldp+18238,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[5]),129);
        tracep->fullWData(oldp+18243,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[6]),129);
        __Vtemp113345[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [0U][0U];
        __Vtemp113345[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [0U][1U];
        __Vtemp113345[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [0U][2U];
        __Vtemp113345[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [0U][3U];
        __Vtemp113345[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [0U][4U];
        tracep->fullWData(oldp+18248,(__Vtemp113345),129);
        tracep->fullBit(oldp+18253,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][4U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][4U]) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][4U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0U][4U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [9U][4U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][4U])))));
        tracep->fullBit(oldp+18254,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0U][4U])));
        tracep->fullBit(oldp+18255,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][4U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][4U]) 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][4U]))));
        tracep->fullBit(oldp+18256,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [0xaU][4U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][4U]))));
        tracep->fullBit(oldp+18257,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][4U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][4U]))));
        tracep->fullBit(oldp+18258,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0U][0U])));
        tracep->fullBit(oldp+18259,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U]) 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U]))));
        tracep->fullBit(oldp+18260,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][0U]) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0U][0U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [9U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U])))));
        tracep->fullBit(oldp+18261,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [0xaU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U]))));
        tracep->fullBit(oldp+18262,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U]))));
        tracep->fullBit(oldp+18263,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 1U))));
        tracep->fullBit(oldp+18264,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18265,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 1U))));
        tracep->fullBit(oldp+18266,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18267,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18268,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 2U))));
        tracep->fullBit(oldp+18269,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18270,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 2U))));
        tracep->fullBit(oldp+18271,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18272,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18273,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 3U))));
        tracep->fullBit(oldp+18274,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18275,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 3U))));
        tracep->fullBit(oldp+18276,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18277,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18278,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 4U))));
        tracep->fullBit(oldp+18279,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18280,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 4U))));
        tracep->fullBit(oldp+18281,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18282,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18283,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 5U))));
        tracep->fullBit(oldp+18284,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18285,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 5U))));
        tracep->fullBit(oldp+18286,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18287,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18288,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 6U))));
        tracep->fullBit(oldp+18289,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+18290,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 6U))));
        tracep->fullBit(oldp+18291,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+18292,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+18293,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 7U))));
        tracep->fullBit(oldp+18294,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+18295,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 7U))));
        tracep->fullBit(oldp+18296,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+18297,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+18298,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 8U))));
        tracep->fullBit(oldp+18299,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+18300,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 8U))));
        tracep->fullBit(oldp+18301,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+18302,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+18303,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 9U))));
        tracep->fullBit(oldp+18304,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+18305,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 9U))));
        tracep->fullBit(oldp+18306,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+18307,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+18308,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18309,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18310,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18311,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18312,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18313,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18314,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18315,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18316,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18317,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18318,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18319,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18320,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18321,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18322,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18323,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18324,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18325,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18326,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18327,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18328,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18329,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18330,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18331,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18332,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18333,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18334,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18335,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18336,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18337,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18338,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18339,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18340,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18341,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18342,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18343,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18344,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18345,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18346,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18347,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18348,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18349,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18350,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18351,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18352,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18353,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18354,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18355,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18356,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18357,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18358,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18359,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18360,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18361,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18362,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18363,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18364,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18365,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18366,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18367,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18368,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18369,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18370,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18371,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18372,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18373,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18374,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18375,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18376,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18377,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18378,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18379,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18380,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18381,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18382,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18383,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18384,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18385,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18386,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18387,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18388,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18389,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18390,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18391,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18392,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18393,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18394,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18395,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18396,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18397,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18398,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18399,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18400,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18401,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18402,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18403,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18404,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18405,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18406,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18407,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18408,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18409,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18410,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][0U])) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18411,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18412,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18413,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0U][0U] >> 0x1fU)));
        tracep->fullBit(oldp+18414,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [0xaU][0U]) 
                                      ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0U][0U]) >> 0x1fU)));
        tracep->fullBit(oldp+18415,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [0xaU][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][0U]) | 
                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][0U])) 
                                      | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [0xaU][0U])) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+18416,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                      [0xaU][0U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0U][0U]) >> 0x1fU)));
        tracep->fullBit(oldp+18417,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                      [9U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0U][0U]) >> 0x1fU)));
        tracep->fullBit(oldp+18418,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0U][1U])));
        tracep->fullBit(oldp+18419,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U]) 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U]))));
        tracep->fullBit(oldp+18420,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][1U]) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0U][1U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [9U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U])))));
        tracep->fullBit(oldp+18421,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [0xaU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U]))));
        tracep->fullBit(oldp+18422,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U]))));
        tracep->fullBit(oldp+18423,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 1U))));
        tracep->fullBit(oldp+18424,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18425,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 1U))));
        tracep->fullBit(oldp+18426,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18427,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18428,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 2U))));
        tracep->fullBit(oldp+18429,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18430,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 2U))));
        tracep->fullBit(oldp+18431,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18432,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18433,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 3U))));
        tracep->fullBit(oldp+18434,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18435,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 3U))));
        tracep->fullBit(oldp+18436,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18437,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18438,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 4U))));
        tracep->fullBit(oldp+18439,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18440,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 4U))));
        tracep->fullBit(oldp+18441,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18442,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18443,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 5U))));
        tracep->fullBit(oldp+18444,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18445,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 5U))));
        tracep->fullBit(oldp+18446,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18447,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18448,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 6U))));
        tracep->fullBit(oldp+18449,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+18450,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 6U))));
        tracep->fullBit(oldp+18451,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+18452,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+18453,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 7U))));
        tracep->fullBit(oldp+18454,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+18455,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 7U))));
        tracep->fullBit(oldp+18456,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+18457,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+18458,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 8U))));
        tracep->fullBit(oldp+18459,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+18460,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 8U))));
        tracep->fullBit(oldp+18461,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+18462,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+18463,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 9U))));
        tracep->fullBit(oldp+18464,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+18465,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 9U))));
        tracep->fullBit(oldp+18466,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+18467,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+18468,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18469,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18470,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18471,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18472,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18473,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18474,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18475,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18476,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18477,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18478,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18479,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18480,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18481,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18482,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18483,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18484,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18485,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18486,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18487,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18488,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18489,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18490,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18491,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18492,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18493,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18494,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18495,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18496,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18497,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18498,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18499,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18500,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18501,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18502,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18503,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18504,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18505,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18506,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18507,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18508,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18509,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18510,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18511,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18512,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18513,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18514,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18515,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18516,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18517,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18518,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18519,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18520,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18521,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18522,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18523,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18524,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18525,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18526,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18527,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18528,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18529,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18530,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18531,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18532,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18533,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18534,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18535,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18536,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18537,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18538,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18539,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18540,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18541,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18542,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18543,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18544,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18545,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18546,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18547,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18548,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18549,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18550,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18551,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18552,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18553,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18554,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18555,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18556,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18557,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18558,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18559,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18560,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18561,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18562,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18563,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18564,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18565,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18566,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18567,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18568,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18569,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18570,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][1U])) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18571,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18572,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18573,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0U][1U] >> 0x1fU)));
        tracep->fullBit(oldp+18574,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [0xaU][1U]) 
                                      ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0U][1U]) >> 0x1fU)));
        tracep->fullBit(oldp+18575,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [0xaU][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][1U]) | 
                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][1U])) 
                                      | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [0xaU][1U])) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+18576,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                      [0xaU][1U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0U][1U]) >> 0x1fU)));
        tracep->fullBit(oldp+18577,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                      [9U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0U][1U]) >> 0x1fU)));
        tracep->fullBit(oldp+18578,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0U][2U])));
        tracep->fullBit(oldp+18579,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U]) 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U]))));
        tracep->fullBit(oldp+18580,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][2U]) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0U][2U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [9U][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U])))));
        tracep->fullBit(oldp+18581,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [0xaU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U]))));
        tracep->fullBit(oldp+18582,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U]))));
        tracep->fullBit(oldp+18583,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 1U))));
        tracep->fullBit(oldp+18584,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18585,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 1U))));
        tracep->fullBit(oldp+18586,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18587,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18588,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 2U))));
        tracep->fullBit(oldp+18589,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18590,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 2U))));
        tracep->fullBit(oldp+18591,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18592,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18593,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 3U))));
        tracep->fullBit(oldp+18594,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18595,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 3U))));
        tracep->fullBit(oldp+18596,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18597,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18598,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 4U))));
        tracep->fullBit(oldp+18599,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18600,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 4U))));
        tracep->fullBit(oldp+18601,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18602,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18603,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 5U))));
        tracep->fullBit(oldp+18604,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18605,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 5U))));
        tracep->fullBit(oldp+18606,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18607,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18608,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 6U))));
        tracep->fullBit(oldp+18609,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+18610,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 6U))));
        tracep->fullBit(oldp+18611,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+18612,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+18613,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 7U))));
        tracep->fullBit(oldp+18614,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+18615,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 7U))));
        tracep->fullBit(oldp+18616,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+18617,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+18618,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 8U))));
        tracep->fullBit(oldp+18619,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+18620,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 8U))));
        tracep->fullBit(oldp+18621,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+18622,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+18623,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 9U))));
        tracep->fullBit(oldp+18624,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+18625,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 9U))));
        tracep->fullBit(oldp+18626,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+18627,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+18628,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18629,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18630,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18631,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18632,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18633,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18634,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18635,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18636,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18637,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18638,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18639,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18640,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18641,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18642,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18643,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18644,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18645,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18646,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18647,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18648,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18649,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18650,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18651,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18652,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18653,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18654,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18655,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18656,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18657,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18658,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18659,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18660,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18661,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18662,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18663,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18664,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18665,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18666,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18667,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18668,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18669,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18670,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18671,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18672,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18673,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18674,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18675,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18676,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18677,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18678,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18679,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18680,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18681,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18682,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18683,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18684,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18685,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18686,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18687,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18688,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18689,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18690,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18691,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18692,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18693,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18694,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18695,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18696,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18697,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18698,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18699,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18700,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18701,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18702,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18703,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18704,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18705,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18706,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18707,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18708,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18709,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18710,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18711,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18712,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18713,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18714,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18715,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18716,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18717,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18718,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18719,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18720,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18721,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18722,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18723,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18724,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18725,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18726,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18727,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18728,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18729,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18730,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][2U])) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18731,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18732,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18733,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0U][2U] >> 0x1fU)));
        tracep->fullBit(oldp+18734,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [0xaU][2U]) 
                                      ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0U][2U]) >> 0x1fU)));
        tracep->fullBit(oldp+18735,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [0xaU][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][2U]) | 
                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][2U])) 
                                      | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [0xaU][2U])) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+18736,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                      [0xaU][2U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0U][2U]) >> 0x1fU)));
        tracep->fullBit(oldp+18737,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                      [9U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0U][2U]) >> 0x1fU)));
        tracep->fullBit(oldp+18738,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0U][3U])));
        tracep->fullBit(oldp+18739,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U]) 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U]))));
        tracep->fullBit(oldp+18740,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][3U]) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0U][3U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [9U][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U])))));
        tracep->fullBit(oldp+18741,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [0xaU][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U]))));
        tracep->fullBit(oldp+18742,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U]))));
        tracep->fullBit(oldp+18743,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 1U))));
        tracep->fullBit(oldp+18744,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18745,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 1U))));
        tracep->fullBit(oldp+18746,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18747,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18748,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 2U))));
        tracep->fullBit(oldp+18749,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18750,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 2U))));
        tracep->fullBit(oldp+18751,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18752,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18753,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 3U))));
        tracep->fullBit(oldp+18754,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18755,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 3U))));
        tracep->fullBit(oldp+18756,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18757,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18758,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 4U))));
        tracep->fullBit(oldp+18759,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18760,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 4U))));
        tracep->fullBit(oldp+18761,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18762,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18763,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 5U))));
        tracep->fullBit(oldp+18764,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18765,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 5U))));
        tracep->fullBit(oldp+18766,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18767,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18768,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 6U))));
        tracep->fullBit(oldp+18769,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+18770,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 6U))));
        tracep->fullBit(oldp+18771,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+18772,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+18773,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 7U))));
        tracep->fullBit(oldp+18774,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+18775,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 7U))));
        tracep->fullBit(oldp+18776,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+18777,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+18778,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 8U))));
        tracep->fullBit(oldp+18779,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+18780,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 8U))));
        tracep->fullBit(oldp+18781,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+18782,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+18783,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 9U))));
        tracep->fullBit(oldp+18784,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+18785,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 9U))));
        tracep->fullBit(oldp+18786,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+18787,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+18788,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18789,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18790,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18791,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18792,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+18793,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18794,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18795,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18796,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18797,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+18798,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18799,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18800,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18801,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18802,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+18803,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18804,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18805,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18806,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18807,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+18808,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18809,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18810,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18811,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18812,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+18813,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18814,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18815,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18816,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18817,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+18818,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18819,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18820,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18821,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18822,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+18823,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18824,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18825,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18826,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18827,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+18828,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18829,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18830,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18831,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18832,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+18833,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18834,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18835,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18836,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18837,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+18838,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18839,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18840,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18841,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18842,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+18843,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18844,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18845,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18846,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18847,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+18848,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18849,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18850,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18851,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18852,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+18853,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18854,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18855,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18856,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18857,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+18858,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18859,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18860,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18861,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18862,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+18863,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18864,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18865,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18866,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18867,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+18868,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18869,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18870,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18871,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18872,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+18873,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18874,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18875,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18876,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18877,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+18878,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18879,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18880,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18881,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18882,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+18883,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18884,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18885,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18886,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18887,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+18888,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18889,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [0xaU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18890,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                              [0xaU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                [9U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [9U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                               [0xaU][3U])) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18891,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18892,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+18893,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0U][3U] >> 0x1fU)));
        tracep->fullBit(oldp+18894,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [0xaU][3U]) 
                                      ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0U][3U]) >> 0x1fU)));
        tracep->fullBit(oldp+18895,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [0xaU][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][3U]) | 
                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][3U])) 
                                      | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [0xaU][3U])) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+18896,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                      [0xaU][3U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0U][3U]) >> 0x1fU)));
        tracep->fullBit(oldp+18897,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                      [9U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0U][3U]) >> 0x1fU)));
        __Vtemp115152[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [1U][0U];
        __Vtemp115152[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [1U][1U];
        __Vtemp115152[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [1U][2U];
        __Vtemp115152[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [1U][3U];
        __Vtemp115152[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [1U][4U];
        tracep->fullWData(oldp+18898,(__Vtemp115152),129);
        __Vtemp115153[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [2U][0U];
        __Vtemp115153[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [2U][1U];
        __Vtemp115153[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [2U][2U];
        __Vtemp115153[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [2U][3U];
        __Vtemp115153[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [2U][4U];
        tracep->fullWData(oldp+18903,(__Vtemp115153),129);
        __Vtemp115154[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [3U][0U];
        __Vtemp115154[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [3U][1U];
        __Vtemp115154[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [3U][2U];
        __Vtemp115154[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [3U][3U];
        __Vtemp115154[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [3U][4U];
        tracep->fullWData(oldp+18908,(__Vtemp115154),129);
        tracep->fullBit(oldp+18913,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [2U][4U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [3U][4U]) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [1U][4U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [3U][4U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [1U][4U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [2U][4U])))));
        tracep->fullBit(oldp+18914,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [1U][4U])));
        tracep->fullBit(oldp+18915,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [2U][4U])));
        tracep->fullBit(oldp+18916,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [3U][4U])));
        tracep->fullBit(oldp+18917,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][4U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][4U]) 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [3U][4U]))));
        tracep->fullBit(oldp+18918,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [1U][4U] 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [2U][4U]))));
        tracep->fullBit(oldp+18919,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [2U][4U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [3U][4U]))));
        tracep->fullBit(oldp+18920,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [1U][4U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [3U][4U]))));
        tracep->fullBit(oldp+18921,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [1U][4U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [2U][4U]))));
        tracep->fullBit(oldp+18922,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [1U][0U])));
        tracep->fullBit(oldp+18923,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [2U][0U])));
        tracep->fullBit(oldp+18924,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [3U][0U])));
        tracep->fullBit(oldp+18925,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U]) 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [3U][0U]))));
        tracep->fullBit(oldp+18926,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [2U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [3U][0U]) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [1U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [3U][0U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [2U][0U])))));
        tracep->fullBit(oldp+18927,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [1U][0U] 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [2U][0U]))));
        tracep->fullBit(oldp+18928,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [2U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [3U][0U]))));
        tracep->fullBit(oldp+18929,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [1U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [3U][0U]))));
        tracep->fullBit(oldp+18930,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [1U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [2U][0U]))));
        tracep->fullBit(oldp+18931,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [1U][0U] 
                                           >> 1U))));
        tracep->fullBit(oldp+18932,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [2U][0U] 
                                           >> 1U))));
        tracep->fullBit(oldp+18933,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [3U][0U] 
                                           >> 1U))));
        tracep->fullBit(oldp+18934,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [1U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [2U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18935,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [2U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [3U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [1U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [3U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [1U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [2U][0U])) 
                                           >> 1U))));
        tracep->fullBit(oldp+18936,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18937,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18938,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18939,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+18940,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [1U][0U] 
                                           >> 2U))));
        tracep->fullBit(oldp+18941,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [2U][0U] 
                                           >> 2U))));
        tracep->fullBit(oldp+18942,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [3U][0U] 
                                           >> 2U))));
        tracep->fullBit(oldp+18943,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [1U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [2U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18944,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [2U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [3U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [1U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [3U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [1U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [2U][0U])) 
                                           >> 2U))));
        tracep->fullBit(oldp+18945,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18946,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18947,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18948,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+18949,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [1U][0U] 
                                           >> 3U))));
        tracep->fullBit(oldp+18950,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [2U][0U] 
                                           >> 3U))));
        tracep->fullBit(oldp+18951,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [3U][0U] 
                                           >> 3U))));
        tracep->fullBit(oldp+18952,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [1U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [2U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18953,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [2U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [3U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [1U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [3U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [1U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [2U][0U])) 
                                           >> 3U))));
        tracep->fullBit(oldp+18954,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18955,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18956,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18957,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+18958,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [1U][0U] 
                                           >> 4U))));
        tracep->fullBit(oldp+18959,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [2U][0U] 
                                           >> 4U))));
        tracep->fullBit(oldp+18960,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [3U][0U] 
                                           >> 4U))));
        tracep->fullBit(oldp+18961,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [1U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [2U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18962,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [2U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [3U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [1U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [3U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [1U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [2U][0U])) 
                                           >> 4U))));
        tracep->fullBit(oldp+18963,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18964,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18965,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18966,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+18967,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [1U][0U] 
                                           >> 5U))));
        tracep->fullBit(oldp+18968,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [2U][0U] 
                                           >> 5U))));
        tracep->fullBit(oldp+18969,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [3U][0U] 
                                           >> 5U))));
        tracep->fullBit(oldp+18970,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [1U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [2U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18971,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [2U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [3U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [1U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [3U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [1U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [2U][0U])) 
                                           >> 5U))));
        tracep->fullBit(oldp+18972,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18973,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18974,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18975,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+18976,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [1U][0U] 
                                           >> 6U))));
        tracep->fullBit(oldp+18977,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [2U][0U] 
                                           >> 6U))));
        tracep->fullBit(oldp+18978,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [3U][0U] 
                                           >> 6U))));
        tracep->fullBit(oldp+18979,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [1U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [2U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+18980,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [2U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [3U][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [1U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [3U][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [1U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [2U][0U])) 
                                           >> 6U))));
        tracep->fullBit(oldp+18981,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+18982,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [2U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+18983,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [3U][0U]) 
                                           >> 6U))));
    }
}
