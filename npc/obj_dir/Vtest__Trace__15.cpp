// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest__Syms.h"


extern const VlWide<10>/*319:0*/ Vtest__ConstPool__CONST_6a3c0088_0;

void Vtest___024root__traceChgSub15(Vtest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<5>/*159:0*/ __Vtemp125744;
    VlWide<3>/*95:0*/ __Vtemp125747;
    VlWide<10>/*319:0*/ __Vtemp125748;
    VlWide<5>/*159:0*/ __Vtemp125749;
    VlWide<5>/*159:0*/ __Vtemp125750;
    VlWide<5>/*159:0*/ __Vtemp125751;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 19793);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+0,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [0U][1U]) 
                                          >> 0xeU))));
            tracep->chgBit(oldp+1,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][1U] 
                                          >> 0xfU))));
            tracep->chgBit(oldp+2,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][1U]) 
                                          >> 0xfU))));
            tracep->chgBit(oldp+3,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][1U]) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][1U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][1U])) 
                                          >> 0xfU))));
            tracep->chgBit(oldp+4,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [0U][1U]) 
                                          >> 0xfU))));
            tracep->chgBit(oldp+5,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][1U]) 
                                          >> 0xfU))));
            tracep->chgBit(oldp+6,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [0U][1U]) 
                                          >> 0xfU))));
            tracep->chgBit(oldp+7,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][1U] 
                                          >> 0x10U))));
            tracep->chgBit(oldp+8,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][1U]) 
                                          >> 0x10U))));
            tracep->chgBit(oldp+9,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][1U]) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][1U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][1U])) 
                                          >> 0x10U))));
            tracep->chgBit(oldp+10,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x10U))));
            tracep->chgBit(oldp+11,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x10U))));
            tracep->chgBit(oldp+12,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x10U))));
            tracep->chgBit(oldp+13,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           >> 0x11U))));
            tracep->chgBit(oldp+14,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x11U))));
            tracep->chgBit(oldp+15,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][1U])) 
                                           >> 0x11U))));
            tracep->chgBit(oldp+16,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x11U))));
            tracep->chgBit(oldp+17,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x11U))));
            tracep->chgBit(oldp+18,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x11U))));
            tracep->chgBit(oldp+19,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           >> 0x12U))));
            tracep->chgBit(oldp+20,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x12U))));
            tracep->chgBit(oldp+21,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][1U])) 
                                           >> 0x12U))));
            tracep->chgBit(oldp+22,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x12U))));
            tracep->chgBit(oldp+23,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x12U))));
            tracep->chgBit(oldp+24,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x12U))));
            tracep->chgBit(oldp+25,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           >> 0x13U))));
            tracep->chgBit(oldp+26,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x13U))));
            tracep->chgBit(oldp+27,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][1U])) 
                                           >> 0x13U))));
            tracep->chgBit(oldp+28,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x13U))));
            tracep->chgBit(oldp+29,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x13U))));
            tracep->chgBit(oldp+30,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x13U))));
            tracep->chgBit(oldp+31,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           >> 0x14U))));
            tracep->chgBit(oldp+32,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x14U))));
            tracep->chgBit(oldp+33,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][1U])) 
                                           >> 0x14U))));
            tracep->chgBit(oldp+34,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x14U))));
            tracep->chgBit(oldp+35,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x14U))));
            tracep->chgBit(oldp+36,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x14U))));
            tracep->chgBit(oldp+37,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           >> 0x15U))));
            tracep->chgBit(oldp+38,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x15U))));
            tracep->chgBit(oldp+39,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][1U])) 
                                           >> 0x15U))));
            tracep->chgBit(oldp+40,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x15U))));
            tracep->chgBit(oldp+41,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x15U))));
            tracep->chgBit(oldp+42,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x15U))));
            tracep->chgBit(oldp+43,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+44,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x16U))));
            tracep->chgBit(oldp+45,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][1U])) 
                                           >> 0x16U))));
            tracep->chgBit(oldp+46,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x16U))));
            tracep->chgBit(oldp+47,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x16U))));
            tracep->chgBit(oldp+48,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x16U))));
            tracep->chgBit(oldp+49,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           >> 0x17U))));
            tracep->chgBit(oldp+50,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x17U))));
            tracep->chgBit(oldp+51,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][1U])) 
                                           >> 0x17U))));
            tracep->chgBit(oldp+52,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x17U))));
            tracep->chgBit(oldp+53,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x17U))));
            tracep->chgBit(oldp+54,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x17U))));
            tracep->chgBit(oldp+55,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           >> 0x18U))));
            tracep->chgBit(oldp+56,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x18U))));
            tracep->chgBit(oldp+57,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][1U])) 
                                           >> 0x18U))));
            tracep->chgBit(oldp+58,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x18U))));
            tracep->chgBit(oldp+59,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x18U))));
            tracep->chgBit(oldp+60,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x18U))));
            tracep->chgBit(oldp+61,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           >> 0x19U))));
            tracep->chgBit(oldp+62,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x19U))));
            tracep->chgBit(oldp+63,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][1U])) 
                                           >> 0x19U))));
            tracep->chgBit(oldp+64,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x19U))));
            tracep->chgBit(oldp+65,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x19U))));
            tracep->chgBit(oldp+66,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x19U))));
            tracep->chgBit(oldp+67,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           >> 0x1aU))));
            tracep->chgBit(oldp+68,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x1aU))));
            tracep->chgBit(oldp+69,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][1U])) 
                                           >> 0x1aU))));
            tracep->chgBit(oldp+70,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x1aU))));
            tracep->chgBit(oldp+71,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x1aU))));
            tracep->chgBit(oldp+72,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x1aU))));
            tracep->chgBit(oldp+73,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           >> 0x1bU))));
            tracep->chgBit(oldp+74,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x1bU))));
            tracep->chgBit(oldp+75,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][1U])) 
                                           >> 0x1bU))));
            tracep->chgBit(oldp+76,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x1bU))));
            tracep->chgBit(oldp+77,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x1bU))));
            tracep->chgBit(oldp+78,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x1bU))));
            tracep->chgBit(oldp+79,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+80,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+81,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][1U])) 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+82,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+83,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+84,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+85,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           >> 0x1dU))));
            tracep->chgBit(oldp+86,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x1dU))));
            tracep->chgBit(oldp+87,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][1U])) 
                                           >> 0x1dU))));
            tracep->chgBit(oldp+88,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x1dU))));
            tracep->chgBit(oldp+89,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x1dU))));
            tracep->chgBit(oldp+90,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x1dU))));
            tracep->chgBit(oldp+91,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+92,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+93,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][1U])) 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+94,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+95,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U]) 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+96,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U]) 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+97,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1dU][1U] >> 0x1fU)));
            tracep->chgBit(oldp+98,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][1U] 
                                       ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [0U][1U]) ^ 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                      [1U][1U]) >> 0x1fU)));
            tracep->chgBit(oldp+99,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [0U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][1U]) | 
                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][1U])) 
                                      | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [0U][1U])) 
                                     >> 0x1fU)));
            tracep->chgBit(oldp+100,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][1U] 
                                       ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [0U][1U]) >> 0x1fU)));
            tracep->chgBit(oldp+101,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][1U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][1U]) >> 0x1fU)));
            tracep->chgBit(oldp+102,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][1U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [0U][1U]) >> 0x1fU)));
            tracep->chgBit(oldp+103,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1dU][2U])));
            tracep->chgBit(oldp+104,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][2U]))));
            tracep->chgBit(oldp+105,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U])))));
            tracep->chgBit(oldp+106,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][2U]))));
            tracep->chgBit(oldp+107,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][2U]))));
            tracep->chgBit(oldp+108,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][2U]))));
            tracep->chgBit(oldp+109,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+110,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+111,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 1U))));
            tracep->chgBit(oldp+112,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+113,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+114,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+115,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 2U))));
            tracep->chgBit(oldp+116,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+117,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 2U))));
            tracep->chgBit(oldp+118,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+119,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+120,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+121,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 3U))));
            tracep->chgBit(oldp+122,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+123,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 3U))));
            tracep->chgBit(oldp+124,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+125,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+126,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+127,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 4U))));
            tracep->chgBit(oldp+128,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+129,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 4U))));
            tracep->chgBit(oldp+130,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+131,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+132,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+133,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+134,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+135,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 5U))));
            tracep->chgBit(oldp+136,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+137,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+138,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+139,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+140,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+141,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 6U))));
            tracep->chgBit(oldp+142,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+143,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+144,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+145,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+146,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+147,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 7U))));
            tracep->chgBit(oldp+148,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+149,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+150,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+151,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+152,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+153,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 8U))));
            tracep->chgBit(oldp+154,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+155,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+156,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+157,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 9U))));
            tracep->chgBit(oldp+158,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+159,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 9U))));
            tracep->chgBit(oldp+160,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+161,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+162,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+163,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+164,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+165,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+166,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+167,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+168,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+169,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+170,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+171,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+172,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+173,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+174,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+175,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+176,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+177,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+178,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+179,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+180,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+181,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+182,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+183,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+184,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+185,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+186,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+187,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+188,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+189,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+190,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+191,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+192,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+193,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+194,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+195,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+196,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+197,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+198,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+199,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+200,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+201,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+202,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+203,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+204,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+205,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+206,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+207,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+208,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+209,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+210,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+211,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+212,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+213,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+214,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+215,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+216,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+217,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+218,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+219,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+220,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+221,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+222,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+223,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+224,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+225,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+226,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+227,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+228,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+229,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+230,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+231,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+232,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+233,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+234,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+235,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+236,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+237,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+238,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+239,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+240,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+241,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+242,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+243,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+244,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+245,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+246,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+247,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+248,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+249,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+250,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+251,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+252,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+253,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+254,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+255,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+256,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+257,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+258,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+259,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+260,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+261,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+262,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+263,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+264,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+265,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+266,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+267,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+268,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+269,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+270,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+271,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+272,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+273,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+274,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+275,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+276,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+277,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+278,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+279,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+280,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+281,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+282,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+283,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+284,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+285,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][2U])) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+286,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+287,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+288,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][2U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+289,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1dU][2U] >> 0x1fU)));
            tracep->chgBit(oldp+290,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][2U] 
                                        ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [0U][2U]) ^ 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][2U]) >> 0x1fU)));
            tracep->chgBit(oldp+291,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [0U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][2U]) 
                                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][2U])) 
                                       | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [0U][2U])) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+292,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][2U] 
                                       ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [0U][2U]) >> 0x1fU)));
            tracep->chgBit(oldp+293,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][2U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][2U]) >> 0x1fU)));
            tracep->chgBit(oldp+294,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][2U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [0U][2U]) >> 0x1fU)));
            tracep->chgBit(oldp+295,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1dU][3U])));
            tracep->chgBit(oldp+296,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][3U]))));
            tracep->chgBit(oldp+297,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [1U][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [1U][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1dU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U])))));
            tracep->chgBit(oldp+298,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][3U]))));
            tracep->chgBit(oldp+299,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][3U]))));
            tracep->chgBit(oldp+300,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][3U]))));
            tracep->chgBit(oldp+301,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 1U))));
            tracep->chgBit(oldp+302,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+303,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 1U))));
            tracep->chgBit(oldp+304,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+305,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+306,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+307,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 2U))));
            tracep->chgBit(oldp+308,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+309,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 2U))));
            tracep->chgBit(oldp+310,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+311,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+312,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+313,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 3U))));
            tracep->chgBit(oldp+314,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+315,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 3U))));
            tracep->chgBit(oldp+316,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+317,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+318,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+319,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 4U))));
            tracep->chgBit(oldp+320,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+321,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 4U))));
            tracep->chgBit(oldp+322,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+323,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+324,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+325,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 5U))));
            tracep->chgBit(oldp+326,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+327,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 5U))));
            tracep->chgBit(oldp+328,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+329,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+330,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+331,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 6U))));
            tracep->chgBit(oldp+332,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+333,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 6U))));
            tracep->chgBit(oldp+334,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+335,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+336,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+337,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 7U))));
            tracep->chgBit(oldp+338,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+339,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 7U))));
            tracep->chgBit(oldp+340,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+341,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+342,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+343,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 8U))));
            tracep->chgBit(oldp+344,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+345,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 8U))));
            tracep->chgBit(oldp+346,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+347,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+348,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+349,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 9U))));
            tracep->chgBit(oldp+350,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+351,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 9U))));
            tracep->chgBit(oldp+352,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+353,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+354,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+355,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+356,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+357,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+358,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+359,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+360,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+361,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+362,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+363,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+364,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+365,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+366,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+367,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+368,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+369,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+370,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+371,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+372,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+373,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+374,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+375,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+376,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+377,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+378,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+379,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+380,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+381,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+382,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+383,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+384,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+385,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+386,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+387,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+388,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+389,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+390,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+391,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+392,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+393,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+394,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+395,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+396,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+397,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+398,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+399,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+400,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+401,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+402,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+403,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+404,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+405,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+406,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+407,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+408,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+409,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+410,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+411,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+412,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+413,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+414,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+415,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+416,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+417,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+418,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+419,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+420,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+421,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+422,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+423,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+424,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+425,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+426,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+427,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+428,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+429,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+430,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+431,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+432,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+433,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+434,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+435,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+436,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+437,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+438,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+439,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+440,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+441,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+442,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+443,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+444,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+445,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+446,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+447,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+448,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+449,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+450,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+451,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+452,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+453,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+454,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+455,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+456,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+457,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+458,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+459,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+460,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+461,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+462,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+463,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+464,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+465,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+466,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+467,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+468,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+469,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+470,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+471,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+472,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+473,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+474,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+475,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+476,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                              [0U][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+477,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [0U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                               [1U][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                 [1U][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                [0U][3U])) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+478,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+479,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+480,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [0U][3U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+481,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1dU][3U] >> 0x1fU)));
            tracep->chgBit(oldp+482,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][3U] 
                                        ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [0U][3U]) ^ 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][3U]) >> 0x1fU)));
            tracep->chgBit(oldp+483,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [0U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][3U]) 
                                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][3U])) 
                                       | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [0U][3U])) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+484,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][3U] 
                                       ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [0U][3U]) >> 0x1fU)));
            tracep->chgBit(oldp+485,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][3U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][3U]) >> 0x1fU)));
            tracep->chgBit(oldp+486,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][3U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [0U][3U]) >> 0x1fU)));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+487,(((0x40000U & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))
                                         : ((0x20000U 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                             ? (QData)((IData)(
                                                               (0xffffU 
                                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))
                                             : ((0x10000U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                                 ? (QData)((IData)(
                                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U]))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U]))))))),64);
            tracep->chgCData(oldp+489,(((0x20000000U 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                         ? 0xffU : 
                                        ((0x40000000U 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                          ? 0xfU : 
                                         ((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                           >> 0x1fU)
                                           ? 3U : (
                                                   (1U 
                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[9U])
                                                    ? 1U
                                                    : 0U))))),8);
            tracep->chgWData(oldp+490,(vlSelf->top__DOT__fslu__DOT__if_to_id_bus),65);
            __Vtemp125744[0U] = (IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__rf_wdata);
            __Vtemp125744[1U] = (IData)((vlSelf->top__DOT__fslu__DOT__memu__DOT__rf_wdata 
                                         >> 0x20U));
            __Vtemp125744[2U] = (((IData)((((QData)((IData)(
                                                            vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[3U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])) 
                                                 >> 0xdU)))) 
                                  << 6U) | ((0x20U 
                                             & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U]) 
                                            | (0x1fU 
                                               & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])));
            __Vtemp125744[3U] = (((IData)((((QData)((IData)(
                                                            vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[3U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])) 
                                                 >> 0xdU)))) 
                                  >> 0x1aU) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])) 
                                                          << 0x33U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[3U])) 
                                                             << 0x13U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])) 
                                                               >> 0xdU))) 
                                                        >> 0x20U)) 
                                               << 6U));
            __Vtemp125744[4U] = ((IData)(((((QData)((IData)(
                                                            vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[3U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])) 
                                                 >> 0xdU))) 
                                          >> 0x20U)) 
                                 >> 0x1aU);
            tracep->chgWData(oldp+493,(__Vtemp125744),134);
            tracep->chgWData(oldp+498,(vlSelf->top__DOT__fslu__DOT__br_bus),65);
            tracep->chgWData(oldp+501,(vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus),70);
            __Vtemp125747[0U] = vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U];
            __Vtemp125747[1U] = vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U];
            __Vtemp125747[2U] = (0x3fU & vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]);
            tracep->chgWData(oldp+504,(__Vtemp125747),70);
            tracep->chgQData(oldp+507,(vlSelf->top__DOT__fslu__DOT__ifu__DOT__pc_reg),64);
            tracep->chgBit(oldp+509,(vlSelf->top__DOT__fslu__DOT__ifu__DOT__ce_reg));
            tracep->chgQData(oldp+510,(((1U & vlSelf->top__DOT__fslu__DOT__br_bus[2U])
                                         ? (((QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__br_bus[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__br_bus[0U])))
                                         : (4ULL + vlSelf->top__DOT__fslu__DOT__ifu__DOT__pc_reg))),64);
            tracep->chgBit(oldp+512,((1U & vlSelf->top__DOT__fslu__DOT__br_bus[2U])));
            tracep->chgQData(oldp+513,((((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__br_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__br_bus[0U])))),64);
            tracep->chgWData(oldp+515,(vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r),65);
            tracep->chgBit(oldp+518,((1U & vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[2U])));
            tracep->chgBit(oldp+519,((1U & (vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+520,((1U & (vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+521,((0x1fU & vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U])),5);
            tracep->chgCData(oldp+522,((0x1fU & vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U])),5);
            tracep->chgQData(oldp+523,((((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[0U])))),64);
            tracep->chgQData(oldp+525,((((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))),64);
            tracep->chgBit(oldp+527,(vlSelf->top__DOT__fslu__DOT__idu__DOT__flag));
            tracep->chgIData(oldp+528,(vlSelf->top__DOT__fslu__DOT__idu__DOT__buf_inst),32);
            tracep->chgQData(oldp+529,((((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U])))),64);
            tracep->chgQData(oldp+531,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[0]),64);
            tracep->chgQData(oldp+533,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[1]),64);
            tracep->chgQData(oldp+535,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[2]),64);
            tracep->chgQData(oldp+537,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[3]),64);
            tracep->chgQData(oldp+539,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[4]),64);
            tracep->chgQData(oldp+541,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[5]),64);
            tracep->chgQData(oldp+543,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[6]),64);
            tracep->chgQData(oldp+545,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[7]),64);
            tracep->chgQData(oldp+547,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[8]),64);
            tracep->chgQData(oldp+549,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[9]),64);
            tracep->chgQData(oldp+551,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[10]),64);
            tracep->chgQData(oldp+553,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[11]),64);
            tracep->chgQData(oldp+555,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[12]),64);
            tracep->chgQData(oldp+557,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[13]),64);
            tracep->chgQData(oldp+559,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[14]),64);
            tracep->chgQData(oldp+561,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[15]),64);
            tracep->chgQData(oldp+563,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[16]),64);
            tracep->chgQData(oldp+565,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[17]),64);
            tracep->chgQData(oldp+567,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[18]),64);
            tracep->chgQData(oldp+569,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[19]),64);
            tracep->chgQData(oldp+571,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[20]),64);
            tracep->chgQData(oldp+573,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[21]),64);
            tracep->chgQData(oldp+575,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[22]),64);
            tracep->chgQData(oldp+577,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[23]),64);
            tracep->chgQData(oldp+579,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[24]),64);
            tracep->chgQData(oldp+581,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[25]),64);
            tracep->chgQData(oldp+583,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[26]),64);
            tracep->chgQData(oldp+585,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[27]),64);
            tracep->chgQData(oldp+587,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[28]),64);
            tracep->chgQData(oldp+589,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[29]),64);
            tracep->chgQData(oldp+591,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[30]),64);
            tracep->chgQData(oldp+593,(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[31]),64);
            tracep->chgWData(oldp+595,(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r),291);
            tracep->chgBit(oldp+605,(vlSelf->top__DOT__fslu__DOT__exu__DOT__flag));
            tracep->chgCData(oldp+606,((3U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[9U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+607,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[9U])));
            tracep->chgBit(oldp+608,((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+609,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+610,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+611,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+612,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+613,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 0x1aU))));
            tracep->chgSData(oldp+614,((0x7ffU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                  >> 0xfU))),11);
            tracep->chgCData(oldp+615,((0x1fU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+616,((0xfU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                >> 2U))),4);
            tracep->chgCData(oldp+617,((0xfU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                >> 6U))),4);
            tracep->chgCData(oldp+618,((0x3fU & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                  << 4U) 
                                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U] 
                                                    >> 0x1cU)))),6);
            tracep->chgQData(oldp+619,((((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                              >> 0x1cU)))),64);
            tracep->chgIData(oldp+621,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                         << 4U) | (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                   >> 0x1cU))),32);
            tracep->chgSData(oldp+622,((0xfffU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                  >> 0x10U))),12);
            tracep->chgCData(oldp+623,((7U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                              >> 0xdU))),3);
            tracep->chgCData(oldp+624,((0xfU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                >> 9U))),4);
            tracep->chgBit(oldp+625,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                            >> 8U))));
            tracep->chgBit(oldp+626,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+627,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                            >> 6U))));
            tracep->chgCData(oldp+628,((0x1fU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                 >> 1U))),5);
            tracep->chgBit(oldp+629,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])));
            tracep->chgQData(oldp+630,((((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U])))),64);
            tracep->chgQData(oldp+632,((((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))),64);
            if (vlSelf->top__DOT__fslu__DOT__exu__DOT__flag) {
                __Vtemp125748[0U] = Vtest__ConstPool__CONST_6a3c0088_0[0U];
                __Vtemp125748[1U] = Vtest__ConstPool__CONST_6a3c0088_0[1U];
                __Vtemp125748[2U] = Vtest__ConstPool__CONST_6a3c0088_0[2U];
                __Vtemp125748[3U] = Vtest__ConstPool__CONST_6a3c0088_0[3U];
                __Vtemp125748[4U] = Vtest__ConstPool__CONST_6a3c0088_0[4U];
                __Vtemp125748[5U] = Vtest__ConstPool__CONST_6a3c0088_0[5U];
                __Vtemp125748[6U] = Vtest__ConstPool__CONST_6a3c0088_0[6U];
                __Vtemp125748[7U] = Vtest__ConstPool__CONST_6a3c0088_0[7U];
                __Vtemp125748[8U] = Vtest__ConstPool__CONST_6a3c0088_0[8U];
                __Vtemp125748[9U] = Vtest__ConstPool__CONST_6a3c0088_0[9U];
            } else {
                __Vtemp125748[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U];
                __Vtemp125748[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U];
                __Vtemp125748[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U];
                __Vtemp125748[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U];
                __Vtemp125748[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U];
                __Vtemp125748[5U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U];
                __Vtemp125748[6U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U];
                __Vtemp125748[7U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U];
                __Vtemp125748[8U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U];
                __Vtemp125748[9U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[9U];
            }
            tracep->chgWData(oldp+634,(__Vtemp125748),291);
            tracep->chgCData(oldp+644,((0x3fU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                 >> 0x10U))),6);
            tracep->chgSData(oldp+645,((0xfffU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                  >> 0x10U))),12);
            tracep->chgSData(oldp+646,(vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_S),12);
            tracep->chgSData(oldp+647,(vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B),13);
            tracep->chgIData(oldp+648,(vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_J),21);
            tracep->chgIData(oldp+649,((0xfffffU & 
                                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                         >> 8U))),20);
            tracep->chgQData(oldp+650,(vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend),64);
            tracep->chgQData(oldp+652,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_S) 
                                                                >> 0xbU))))) 
                                         << 0xcU) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_S)))),64);
            tracep->chgQData(oldp+654,(vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend),64);
            tracep->chgQData(oldp+656,((((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                                >> 0x1bU))))) 
                                         << 0x14U) 
                                        | (QData)((IData)(
                                                          (0xfffffU 
                                                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                              >> 8U)))))),64);
            tracep->chgQData(oldp+658,((((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_J 
                                                                >> 0x13U))))) 
                                         << 0x14U) 
                                        | (QData)((IData)(
                                                          (0xfffffU 
                                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_J))))),64);
            tracep->chgQData(oldp+660,((QData)((IData)(
                                                       (0x3fU 
                                                        & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                           >> 0x10U))))),64);
            tracep->chgQData(oldp+662,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                                        >> 0x1bU)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                              << 4U)))))),64);
            tracep->chgQData(oldp+664,((0xfffffffffffffffeULL 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend)),64);
            tracep->chgQData(oldp+666,(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1),64);
            tracep->chgQData(oldp+668,(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2),64);
            tracep->chgBit(oldp+670,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+671,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+672,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+673,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+674,(((8U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                               >> 0x1aU)) 
                                        | ((4U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                  >> 0x1cU)) 
                                           | ((2U & 
                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                >> 0x1eU)) 
                                              | (1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[9U]))))),4);
            tracep->chgCData(oldp+675,((0x7fU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                 >> 0x13U))),7);
            tracep->chgBit(oldp+676,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+677,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+678,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+679,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+680,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+681,(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo),3);
            tracep->chgBit(oldp+682,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                               >> 0xeU) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                 >> 0xdU)) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                >> 0xcU)) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+683,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                              >> 0xeU) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                >> 0xdU)) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+684,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 9U))));
            tracep->chgBit(oldp+685,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 8U))));
            tracep->chgBit(oldp+686,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 7U))));
            tracep->chgBit(oldp+687,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 6U))));
            tracep->chgBit(oldp+688,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 5U))));
            tracep->chgBit(oldp+689,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 4U))));
            tracep->chgBit(oldp+690,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 3U))));
            tracep->chgBit(oldp+691,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 2U))));
            tracep->chgBit(oldp+692,(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over));
            tracep->chgBit(oldp+693,((1U & (((((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                >> 0xeU) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                  >> 0xdU)) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                 >> 0xcU)) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                >> 0xbU)) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                               >> 0xaU)))));
            tracep->chgCData(oldp+694,(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_res_sel),2);
            tracep->chgBit(oldp+695,(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_signed));
            tracep->chgBit(oldp+696,(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned));
            tracep->chgBit(oldp+697,((1U & (((((((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc0U 
                                                           & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op)))) 
                                                 | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                     >> 5U) 
                                                    & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2))) 
                                                | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                    >> 4U) 
                                                   & (~ (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2)))) 
                                               | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                   >> 3U) 
                                                  & (VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1, vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
                                                      ? 1U
                                                      : 0U))) 
                                              | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                  >> 2U) 
                                                 & (VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1, vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
                                                     ? 1U
                                                     : 0U))) 
                                             | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                 >> 1U) 
                                                & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 
                                                    < vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
                                                    ? 1U
                                                    : 0U))) 
                                            | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                               & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 
                                                   >= vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
                                                   ? 1U
                                                   : 0U))))));
            tracep->chgQData(oldp+698,(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_addr),64);
            tracep->chgBit(oldp+700,(vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2));
            tracep->chgBit(oldp+701,((VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1, vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+702,((VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1, vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+703,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 
                                       < vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+704,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 
                                       >= vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
                                       ? 1U : 0U)));
            tracep->chgQData(oldp+705,((4ULL + (((QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                      >> 0x1cU))))),64);
            tracep->chgQData(oldp+707,(vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1),64);
            tracep->chgQData(oldp+709,(vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2),64);
            tracep->chgBit(oldp+711,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+712,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+713,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+714,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+715,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+716,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+717,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+718,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+719,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+720,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+721,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+722,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                            >> 0x10U))));
            tracep->chgQData(oldp+723,(((0x100000U 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                         ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res
                                         : ((0x80000U 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                             ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res
                                             : ((0x40000U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3fU)))))) 
                                                  & (~ 
                                                     VL_SHIFTR_QQQ(64,64,64, 0xffffffffffffULL, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                                 | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res)
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+725,((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)),64);
            tracep->chgQData(oldp+727,((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                        | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)),64);
            tracep->chgQData(oldp+729,((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                        ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)),64);
            tracep->chgQData(oldp+731,(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b),64);
            tracep->chgBit(oldp+733,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                              >> 0x1aU) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                >> 0x19U)) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                               >> 0x18U)))));
            tracep->chgWData(oldp+734,(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina),65);
            tracep->chgWData(oldp+737,(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb),65);
            tracep->chgBit(oldp+740,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U])));
            tracep->chgBit(oldp+741,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U])));
            tracep->chgBit(oldp+742,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+743,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+744,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+745,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+746,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+747,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+748,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+749,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+750,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+751,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+752,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+753,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+754,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+755,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+756,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+757,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+758,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 9U))));
            tracep->chgBit(oldp+759,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 9U))));
            tracep->chgBit(oldp+760,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+761,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+762,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+763,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+764,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+765,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+766,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+767,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+768,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+769,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+770,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+771,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+772,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+773,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+774,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+775,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+776,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+777,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+778,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+779,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+780,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+781,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+782,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+783,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+784,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+785,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+786,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+787,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+788,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+789,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+790,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+791,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+792,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+793,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+794,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+795,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+796,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+797,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+798,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+799,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+800,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+801,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+802,((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+803,((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+804,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U])));
            tracep->chgBit(oldp+805,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U])));
            tracep->chgBit(oldp+806,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+807,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+808,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 2U))));
            tracep->chgBit(oldp+809,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 2U))));
            tracep->chgBit(oldp+810,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 3U))));
            tracep->chgBit(oldp+811,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 3U))));
            tracep->chgBit(oldp+812,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 4U))));
            tracep->chgBit(oldp+813,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 4U))));
            tracep->chgBit(oldp+814,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 5U))));
            tracep->chgBit(oldp+815,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 5U))));
            tracep->chgBit(oldp+816,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 6U))));
            tracep->chgBit(oldp+817,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 6U))));
            tracep->chgBit(oldp+818,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 7U))));
            tracep->chgBit(oldp+819,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 7U))));
            tracep->chgBit(oldp+820,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 8U))));
            tracep->chgBit(oldp+821,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 8U))));
            tracep->chgBit(oldp+822,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 9U))));
            tracep->chgBit(oldp+823,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 9U))));
            tracep->chgBit(oldp+824,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+825,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+826,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+827,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+828,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+829,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+830,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+831,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+832,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+833,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+834,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+835,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+836,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+837,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+838,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+839,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+840,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+841,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+842,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+843,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+844,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+845,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+846,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+847,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+848,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+849,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+850,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+851,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+852,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+853,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+854,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+855,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+856,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+857,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+858,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+859,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+860,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+861,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+862,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+863,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+864,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+865,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+866,((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+867,((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+868,((7U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+869,(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res),64);
            tracep->chgBit(oldp+871,(((0x100000U & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                       ? 0U : 1U)));
            tracep->chgQData(oldp+872,((~ VL_SHIFTR_QQQ(64,64,64, 0xffffffffffffULL, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))),64);
            tracep->chgQData(oldp+874,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                        >> 0x3fU)))))) 
                                         & (~ VL_SHIFTR_QQQ(64,64,64, 0xffffffffffffULL, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                        | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res)),64);
            tracep->chgQData(oldp+876,(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res),64);
            tracep->chgQData(oldp+878,(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_src_temp),64);
            tracep->chgWData(oldp+880,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina),65);
            tracep->chgWData(oldp+883,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb),65);
            tracep->chgWData(oldp+886,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0]),66);
            tracep->chgWData(oldp+889,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1]),66);
            tracep->chgWData(oldp+892,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2]),66);
            tracep->chgWData(oldp+895,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3]),66);
            tracep->chgWData(oldp+898,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4]),66);
            tracep->chgWData(oldp+901,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5]),66);
            tracep->chgWData(oldp+904,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6]),66);
            tracep->chgWData(oldp+907,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7]),66);
            tracep->chgWData(oldp+910,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8]),66);
            tracep->chgWData(oldp+913,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9]),66);
            tracep->chgWData(oldp+916,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[10]),66);
            tracep->chgWData(oldp+919,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[11]),66);
            tracep->chgWData(oldp+922,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[12]),66);
            tracep->chgWData(oldp+925,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[13]),66);
            tracep->chgWData(oldp+928,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[14]),66);
            tracep->chgWData(oldp+931,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[15]),66);
            tracep->chgWData(oldp+934,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[16]),66);
            tracep->chgWData(oldp+937,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[17]),66);
            tracep->chgWData(oldp+940,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[18]),66);
            tracep->chgWData(oldp+943,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[19]),66);
            tracep->chgWData(oldp+946,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[20]),66);
            tracep->chgWData(oldp+949,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[21]),66);
            tracep->chgWData(oldp+952,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[22]),66);
            tracep->chgWData(oldp+955,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[23]),66);
            tracep->chgWData(oldp+958,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[24]),66);
            tracep->chgWData(oldp+961,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[25]),66);
            tracep->chgWData(oldp+964,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[26]),66);
            tracep->chgWData(oldp+967,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[27]),66);
            tracep->chgWData(oldp+970,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[28]),66);
            tracep->chgWData(oldp+973,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[29]),66);
            tracep->chgWData(oldp+976,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[30]),66);
            tracep->chgWData(oldp+979,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[31]),66);
            tracep->chgWData(oldp+982,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0]),65);
            tracep->chgWData(oldp+985,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1]),65);
            tracep->chgWData(oldp+988,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2]),65);
            tracep->chgWData(oldp+991,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3]),65);
            tracep->chgWData(oldp+994,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4]),65);
            tracep->chgWData(oldp+997,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5]),65);
            tracep->chgWData(oldp+1000,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6]),65);
            tracep->chgWData(oldp+1003,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7]),65);
            tracep->chgWData(oldp+1006,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8]),65);
            tracep->chgWData(oldp+1009,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9]),65);
            tracep->chgWData(oldp+1012,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[10]),65);
            tracep->chgWData(oldp+1015,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[11]),65);
            tracep->chgWData(oldp+1018,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[12]),65);
            tracep->chgWData(oldp+1021,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[13]),65);
            tracep->chgWData(oldp+1024,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[14]),65);
            tracep->chgWData(oldp+1027,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[15]),65);
            tracep->chgWData(oldp+1030,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[16]),65);
            tracep->chgWData(oldp+1033,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[17]),65);
            tracep->chgWData(oldp+1036,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[18]),65);
            tracep->chgWData(oldp+1039,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[19]),65);
            tracep->chgWData(oldp+1042,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[20]),65);
            tracep->chgWData(oldp+1045,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[21]),65);
            tracep->chgWData(oldp+1048,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[22]),65);
            tracep->chgWData(oldp+1051,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[23]),65);
            tracep->chgWData(oldp+1054,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[24]),65);
            tracep->chgWData(oldp+1057,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[25]),65);
            tracep->chgWData(oldp+1060,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[26]),65);
            tracep->chgWData(oldp+1063,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[27]),65);
            tracep->chgWData(oldp+1066,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[28]),65);
            tracep->chgWData(oldp+1069,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[29]),65);
            tracep->chgWData(oldp+1072,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[30]),65);
            tracep->chgWData(oldp+1075,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[31]),65);
            tracep->chgWData(oldp+1078,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[0]),129);
            tracep->chgWData(oldp+1083,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[1]),129);
            tracep->chgWData(oldp+1088,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[2]),129);
            tracep->chgWData(oldp+1093,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[3]),129);
            tracep->chgWData(oldp+1098,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[4]),129);
            tracep->chgWData(oldp+1103,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[5]),129);
            tracep->chgWData(oldp+1108,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[6]),129);
            tracep->chgWData(oldp+1113,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[7]),129);
            tracep->chgWData(oldp+1118,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[8]),129);
            tracep->chgWData(oldp+1123,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[9]),129);
            tracep->chgWData(oldp+1128,(vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[10]),129);
            tracep->chgWData(oldp+1133,(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp),65);
            tracep->chgCData(oldp+1136,(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__cnt),7);
            tracep->chgWData(oldp+1137,(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend),129);
            tracep->chgWData(oldp+1142,(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o),128);
            tracep->chgCData(oldp+1146,(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state),2);
            tracep->chgQData(oldp+1147,(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__divisor),64);
            tracep->chgQData(oldp+1149,(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op1),64);
            tracep->chgQData(oldp+1151,(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op2),64);
            tracep->chgQData(oldp+1153,(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp),64);
            tracep->chgWData(oldp+1155,(vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r),212);
            tracep->chgQData(oldp+1162,((((QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[6U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[5U])) 
                                             << 0xcU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])) 
                                               >> 0x14U)))),64);
            tracep->chgCData(oldp+1164,((0x7fU & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] 
                                                  >> 0xdU))),7);
            tracep->chgQData(oldp+1165,((((QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])) 
                                          << 0x33U) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[3U])) 
                                             << 0x13U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])) 
                                               >> 0xdU)))),64);
            tracep->chgBit(oldp+1167,((1U & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1168,((1U & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1169,((0xfU & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U] 
                                                 >> 7U))),4);
            tracep->chgBit(oldp+1170,((1U & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U] 
                                             >> 5U))));
            tracep->chgCData(oldp+1171,((0x1fU & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])),5);
            tracep->chgQData(oldp+1172,((((QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[0U])))),64);
            tracep->chgBit(oldp+1174,((1U & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1175,((1U & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1176,((1U & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1177,((1U & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1178,((1U & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1179,((1U & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1180,((1U & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1181,((1U & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] 
                                             >> 0xdU))));
            tracep->chgCData(oldp+1182,(vlSelf->top__DOT__fslu__DOT__memu__DOT__b_data),8);
            tracep->chgSData(oldp+1183,(vlSelf->top__DOT__fslu__DOT__memu__DOT__h_data),16);
            tracep->chgIData(oldp+1184,(vlSelf->top__DOT__fslu__DOT__memu__DOT__w_data),32);
            tracep->chgQData(oldp+1185,(((0x400U & 
                                          vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])
                                          ? (((QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[6U])) 
                                              << 0x2cU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[5U])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])) 
                                                   >> 0x14U)))
                                          : 0ULL)),64);
            tracep->chgQData(oldp+1187,(((0x80000U 
                                          & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__b_data) 
                                                                     >> 7U))))) 
                                              << 8U) 
                                             | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__b_data)))
                                          : ((0x8000U 
                                              & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                              ? (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__b_data))
                                              : ((0x40000U 
                                                  & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__h_data) 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__h_data)))
                                                  : 
                                                 ((0x4000U 
                                                   & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                   ? (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__h_data))
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__memu__DOT__w_data 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__w_data)))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                     ? (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__w_data))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                      ? 
                                                     ((0x400U 
                                                       & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[6U])) 
                                                        << 0x2cU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[5U])) 
                                                           << 0xcU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])) 
                                                             >> 0x14U)))
                                                       : 0ULL)
                                                      : 0ULL)))))))),64);
            tracep->chgQData(oldp+1189,(vlSelf->top__DOT__fslu__DOT__memu__DOT__rf_wdata),64);
            tracep->chgWData(oldp+1191,(vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r),134);
            tracep->chgQData(oldp+1196,((((QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[4U])) 
                                          << 0x3aU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[3U])) 
                                             << 0x1aU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U])) 
                                               >> 6U)))),64);
            __Vtemp125749[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                [0x20U][0U];
            __Vtemp125749[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                [0x20U][1U];
            __Vtemp125749[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                [0x20U][2U];
            __Vtemp125749[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                [0x20U][3U];
            __Vtemp125749[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                [0x20U][4U];
            tracep->chgWData(oldp+1198,(__Vtemp125749),129);
            __Vtemp125750[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                [0x1fU][0U];
            __Vtemp125750[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                [0x1fU][1U];
            __Vtemp125750[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                [0x1fU][2U];
            __Vtemp125750[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                [0x1fU][3U];
            __Vtemp125750[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                [0x1fU][4U];
            tracep->chgWData(oldp+1203,(__Vtemp125750),129);
            __Vtemp125751[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                [0x1eU][0U];
            __Vtemp125751[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                [0x1eU][1U];
            __Vtemp125751[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                [0x1eU][2U];
            __Vtemp125751[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                [0x1eU][3U];
            __Vtemp125751[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                [0x1eU][4U];
            tracep->chgWData(oldp+1208,(__Vtemp125751),129);
            tracep->chgWData(oldp+1213,(vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0.s),129);
            tracep->chgWData(oldp+1218,(vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0.c),129);
            tracep->chgBit(oldp+1223,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][4U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][4U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][4U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1eU][4U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][4U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][4U])))));
            tracep->chgBit(oldp+1224,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][4U])));
            tracep->chgBit(oldp+1225,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1fU][4U])));
            tracep->chgBit(oldp+1226,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][4U])));
            tracep->chgBit(oldp+1227,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][4U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][4U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][4U]))));
            tracep->chgBit(oldp+1228,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][4U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][4U]))));
            tracep->chgBit(oldp+1229,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][4U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][4U]))));
            tracep->chgBit(oldp+1230,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][4U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][4U]))));
            tracep->chgBit(oldp+1231,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][4U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][4U]))));
            tracep->chgBit(oldp+1232,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][0U])));
            tracep->chgBit(oldp+1233,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1fU][0U])));
            tracep->chgBit(oldp+1234,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][0U])));
            tracep->chgBit(oldp+1235,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U]))));
            tracep->chgBit(oldp+1236,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][0U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1eU][0U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U])))));
            tracep->chgBit(oldp+1237,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U]))));
            tracep->chgBit(oldp+1238,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U]))));
            tracep->chgBit(oldp+1239,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U]))));
            tracep->chgBit(oldp+1240,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U]))));
            tracep->chgBit(oldp+1241,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1242,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1243,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1244,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1245,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 1U))));
            tracep->chgBit(oldp+1246,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1247,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1248,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1249,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1250,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1251,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1252,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1253,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1254,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 2U))));
            tracep->chgBit(oldp+1255,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1256,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1257,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1258,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1259,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1260,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1261,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1262,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1263,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 3U))));
            tracep->chgBit(oldp+1264,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1265,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1266,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1267,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1268,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1269,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1270,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1271,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1272,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 4U))));
            tracep->chgBit(oldp+1273,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1274,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1275,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1276,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1277,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1278,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1279,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1280,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1281,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 5U))));
            tracep->chgBit(oldp+1282,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1283,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1284,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1285,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1286,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1287,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1288,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1289,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1290,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 6U))));
            tracep->chgBit(oldp+1291,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1292,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1293,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1294,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1295,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1296,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1297,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1298,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1299,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 7U))));
            tracep->chgBit(oldp+1300,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1301,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1302,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1303,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1304,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1305,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1306,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1307,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1308,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 8U))));
            tracep->chgBit(oldp+1309,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1310,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1311,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1312,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1313,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1314,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1315,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1316,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1317,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 9U))));
            tracep->chgBit(oldp+1318,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1319,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1320,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1321,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1322,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1323,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1324,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1325,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1326,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1327,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1328,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1329,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1330,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1331,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1332,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1333,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1334,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1335,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1336,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1337,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1338,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1339,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1340,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1341,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1342,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1343,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1344,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1345,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1346,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1347,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1348,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1349,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1350,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1351,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1352,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1353,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1354,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1355,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1356,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1357,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1358,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1359,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1360,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1361,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1362,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1363,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1364,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1365,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1366,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1367,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1368,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1369,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1370,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1371,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1372,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1373,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1374,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1375,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1376,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1377,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1378,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1379,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1380,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1381,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1382,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1383,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1384,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1385,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1386,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1387,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1388,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1389,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1390,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1391,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1392,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1393,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1394,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1395,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1396,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1397,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1398,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1399,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1400,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1401,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1402,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1403,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1404,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1405,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1406,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1407,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1408,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1409,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1410,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1411,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1412,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1413,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1414,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1415,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1416,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1417,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1418,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1419,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1420,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1421,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1422,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1423,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1424,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1425,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1426,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1427,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1428,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1429,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1430,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1431,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1432,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1433,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1434,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1435,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1436,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1437,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1438,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1439,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1440,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1441,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1442,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1443,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1444,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1445,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1446,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1447,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1448,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1449,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1450,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1451,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1452,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1453,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1454,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1455,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1456,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1457,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1458,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1459,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1460,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1461,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1462,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1463,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1464,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1465,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1466,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1467,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1468,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1469,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1470,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1471,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1472,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1473,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1474,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1475,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1476,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1477,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1478,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1479,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1480,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1481,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1482,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1483,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1484,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1485,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1486,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1487,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1488,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1489,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1490,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1491,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1492,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1493,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1494,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1495,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1496,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1497,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1498,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1499,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1500,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1501,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1502,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1503,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1504,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1505,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][0U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][0U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1506,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][0U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][0U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][0U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][0U])) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1507,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1508,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1509,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1510,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][0U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1511,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][0U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1512,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1fU][0U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1513,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][0U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1514,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0x20U][0U] 
                                         ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0x1fU][0U]) 
                                        ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x1eU][0U]) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1515,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1fU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][0U]) 
                                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][0U])) 
                                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1fU][0U])) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1516,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x20U][0U] 
                                        ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x1fU][0U]) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1517,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x1fU][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x1eU][0U]) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1518,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x20U][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x1eU][0U]) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1519,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x20U][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x1fU][0U]) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1520,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][1U])));
            tracep->chgBit(oldp+1521,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1fU][1U])));
            tracep->chgBit(oldp+1522,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][1U])));
            tracep->chgBit(oldp+1523,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U]))));
            tracep->chgBit(oldp+1524,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][1U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1eU][1U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U])))));
            tracep->chgBit(oldp+1525,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U]))));
            tracep->chgBit(oldp+1526,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U]))));
            tracep->chgBit(oldp+1527,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U]))));
            tracep->chgBit(oldp+1528,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U]))));
            tracep->chgBit(oldp+1529,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1530,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1531,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1532,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1533,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 1U))));
            tracep->chgBit(oldp+1534,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1535,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1536,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1537,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1538,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1539,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1540,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1541,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1542,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 2U))));
            tracep->chgBit(oldp+1543,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1544,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1545,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1546,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1547,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1548,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1549,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1550,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1551,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 3U))));
            tracep->chgBit(oldp+1552,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1553,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1554,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1555,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1556,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1557,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1558,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1559,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1560,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 4U))));
            tracep->chgBit(oldp+1561,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1562,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1563,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1564,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1565,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1566,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1567,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1568,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1569,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 5U))));
            tracep->chgBit(oldp+1570,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1571,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1572,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1573,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1574,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1575,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1576,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1577,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1578,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 6U))));
            tracep->chgBit(oldp+1579,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1580,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1581,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1582,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1583,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1584,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1585,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1586,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1587,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 7U))));
            tracep->chgBit(oldp+1588,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1589,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1590,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1591,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1592,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1593,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1594,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1595,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1596,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 8U))));
            tracep->chgBit(oldp+1597,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1598,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1599,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1600,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1601,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1602,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1603,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1604,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1605,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 9U))));
            tracep->chgBit(oldp+1606,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1607,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1608,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1609,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1610,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1611,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1612,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1613,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1614,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1615,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1616,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1617,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1618,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1619,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1620,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1621,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1622,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1623,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1624,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1625,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1626,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1627,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1628,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1629,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1630,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1631,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1632,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1633,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1634,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1635,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1636,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1637,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1638,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1639,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1640,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1641,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1642,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1643,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1644,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1645,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1646,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1647,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1648,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1649,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1650,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1651,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1652,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1653,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1654,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1655,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1656,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1657,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1658,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1659,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1660,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1661,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1662,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1663,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1664,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1665,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1666,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1667,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1668,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1669,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1670,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1671,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1672,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1673,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1674,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1675,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1676,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1677,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1678,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1679,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1680,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1681,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1682,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1683,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1684,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1685,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1686,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1687,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1688,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1689,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1690,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1691,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1692,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1693,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1694,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1695,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1696,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1697,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1698,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1699,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1700,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1701,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1702,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1703,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1704,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1705,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1706,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1707,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1708,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1709,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1710,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1711,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1712,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1713,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1714,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1715,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1716,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1717,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1718,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1719,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1720,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1721,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1722,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1723,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1724,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1725,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1726,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1727,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1728,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1729,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1730,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1731,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1732,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1733,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1734,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1735,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1736,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1737,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1738,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1739,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1740,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1741,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1742,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1743,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1744,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1745,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1746,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1747,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1748,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1749,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1750,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1751,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1752,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1753,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1754,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1755,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1756,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1757,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1758,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1759,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1760,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1761,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1762,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1763,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1764,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1765,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1766,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1767,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1768,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1769,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1770,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1771,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1772,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1773,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1774,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1775,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1776,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1777,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1778,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1779,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1780,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1781,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1782,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1783,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1784,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1785,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1786,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1787,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1788,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1789,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1790,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1791,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1fU][1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1792,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1793,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x20U][1U] 
                                               ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][1U]) 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1794,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1eU][1U]) 
                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x20U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0x1eU][1U])) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][1U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1fU][1U])) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1795,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1796,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1797,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][1U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1798,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][1U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1799,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][1U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1800,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1fU][1U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1801,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][1U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1802,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0x20U][1U] 
                                         ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0x1fU][1U]) 
                                        ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x1eU][1U]) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1803,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1fU][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][1U]) 
                                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][1U])) 
                                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1fU][1U])) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1804,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x20U][1U] 
                                        ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x1fU][1U]) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1805,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x1fU][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x1eU][1U]) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1806,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x20U][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x1eU][1U]) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1807,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x20U][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x1fU][1U]) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1808,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][2U])));
            tracep->chgBit(oldp+1809,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1fU][2U])));
            tracep->chgBit(oldp+1810,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][2U])));
            tracep->chgBit(oldp+1811,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1fU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][2U]))));
            tracep->chgBit(oldp+1812,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1fU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1eU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x20U][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1eU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x20U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1fU][2U])))));
        }
    }
}