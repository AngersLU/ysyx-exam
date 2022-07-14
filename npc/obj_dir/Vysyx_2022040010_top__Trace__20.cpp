// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_2022040010_top__Syms.h"


void Vysyx_2022040010_top___024root__traceChgSub20(Vysyx_2022040010_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<5>/*159:0*/ __Vtemp213343;
    VlWide<5>/*159:0*/ __Vtemp213344;
    VlWide<5>/*159:0*/ __Vtemp213345;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 26753);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+0,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xcU][2U] 
                                           ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xdU][2U]) 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+1,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xdU][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xeU][2U]) 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+2,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xcU][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xeU][2U]) 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+3,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xcU][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xdU][2U]) 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+4,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xcU][2U] 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+5,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xdU][2U] 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+6,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xeU][2U] 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+7,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][2U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][2U]) 
                                           ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xeU][2U]) 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+8,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][2U]) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xcU][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][2U])) 
                                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][2U])) 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+9,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xcU][2U] 
                                           ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xdU][2U]) 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+10,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][2U]) 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+11,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][2U]) 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+12,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][2U]) 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+13,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0xcU][2U] >> 0x1fU)));
            tracep->chgBit(oldp+14,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0xdU][2U] >> 0x1fU)));
            tracep->chgBit(oldp+15,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0xeU][2U] >> 0x1fU)));
            tracep->chgBit(oldp+16,((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xcU][2U] ^ 
                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xdU][2U]) 
                                      ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xeU][2U]) >> 0x1fU)));
            tracep->chgBit(oldp+17,(((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xdU][2U] 
                                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xeU][2U]) 
                                       | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xcU][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xeU][2U])) 
                                      | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xcU][2U] 
                                         & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xdU][2U])) 
                                     >> 0x1fU)));
            tracep->chgBit(oldp+18,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xcU][2U] ^ 
                                      vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xdU][2U]) >> 0x1fU)));
            tracep->chgBit(oldp+19,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xdU][2U] & 
                                      vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xeU][2U]) >> 0x1fU)));
            tracep->chgBit(oldp+20,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xcU][2U] & 
                                      vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xeU][2U]) >> 0x1fU)));
            tracep->chgBit(oldp+21,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xcU][2U] & 
                                      vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xdU][2U]) >> 0x1fU)));
            tracep->chgBit(oldp+22,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0xcU][3U])));
            tracep->chgBit(oldp+23,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0xdU][3U])));
            tracep->chgBit(oldp+24,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0xeU][3U])));
            tracep->chgBit(oldp+25,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U]) 
                                           ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xeU][3U]))));
            tracep->chgBit(oldp+26,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xcU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U])) 
                                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U])))));
            tracep->chgBit(oldp+27,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xcU][3U] 
                                           ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xdU][3U]))));
            tracep->chgBit(oldp+28,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xdU][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xeU][3U]))));
            tracep->chgBit(oldp+29,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xcU][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xeU][3U]))));
            tracep->chgBit(oldp+30,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xcU][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xdU][3U]))));
            tracep->chgBit(oldp+31,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xcU][3U] 
                                           >> 1U))));
            tracep->chgBit(oldp+32,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xdU][3U] 
                                           >> 1U))));
            tracep->chgBit(oldp+33,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xeU][3U] 
                                           >> 1U))));
            tracep->chgBit(oldp+34,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 1U))));
            tracep->chgBit(oldp+35,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xeU][3U]) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xeU][3U])) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xcU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U])) 
                                           >> 1U))));
            tracep->chgBit(oldp+36,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U]) 
                                           >> 1U))));
            tracep->chgBit(oldp+37,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 1U))));
            tracep->chgBit(oldp+38,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 1U))));
            tracep->chgBit(oldp+39,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U]) 
                                           >> 1U))));
            tracep->chgBit(oldp+40,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xcU][3U] 
                                           >> 2U))));
            tracep->chgBit(oldp+41,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xdU][3U] 
                                           >> 2U))));
            tracep->chgBit(oldp+42,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xeU][3U] 
                                           >> 2U))));
            tracep->chgBit(oldp+43,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 2U))));
            tracep->chgBit(oldp+44,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xeU][3U]) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xeU][3U])) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xcU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U])) 
                                           >> 2U))));
            tracep->chgBit(oldp+45,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U]) 
                                           >> 2U))));
            tracep->chgBit(oldp+46,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 2U))));
            tracep->chgBit(oldp+47,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 2U))));
            tracep->chgBit(oldp+48,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U]) 
                                           >> 2U))));
            tracep->chgBit(oldp+49,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xcU][3U] 
                                           >> 3U))));
            tracep->chgBit(oldp+50,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xdU][3U] 
                                           >> 3U))));
            tracep->chgBit(oldp+51,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xeU][3U] 
                                           >> 3U))));
            tracep->chgBit(oldp+52,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 3U))));
            tracep->chgBit(oldp+53,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xeU][3U]) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xeU][3U])) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xcU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U])) 
                                           >> 3U))));
            tracep->chgBit(oldp+54,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U]) 
                                           >> 3U))));
            tracep->chgBit(oldp+55,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 3U))));
            tracep->chgBit(oldp+56,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 3U))));
            tracep->chgBit(oldp+57,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U]) 
                                           >> 3U))));
            tracep->chgBit(oldp+58,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xcU][3U] 
                                           >> 4U))));
            tracep->chgBit(oldp+59,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xdU][3U] 
                                           >> 4U))));
            tracep->chgBit(oldp+60,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xeU][3U] 
                                           >> 4U))));
            tracep->chgBit(oldp+61,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 4U))));
            tracep->chgBit(oldp+62,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xeU][3U]) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xeU][3U])) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xcU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U])) 
                                           >> 4U))));
            tracep->chgBit(oldp+63,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U]) 
                                           >> 4U))));
            tracep->chgBit(oldp+64,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 4U))));
            tracep->chgBit(oldp+65,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 4U))));
            tracep->chgBit(oldp+66,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U]) 
                                           >> 4U))));
            tracep->chgBit(oldp+67,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xcU][3U] 
                                           >> 5U))));
            tracep->chgBit(oldp+68,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xdU][3U] 
                                           >> 5U))));
            tracep->chgBit(oldp+69,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xeU][3U] 
                                           >> 5U))));
            tracep->chgBit(oldp+70,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 5U))));
            tracep->chgBit(oldp+71,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xeU][3U]) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xeU][3U])) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xcU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U])) 
                                           >> 5U))));
            tracep->chgBit(oldp+72,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U]) 
                                           >> 5U))));
            tracep->chgBit(oldp+73,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 5U))));
            tracep->chgBit(oldp+74,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 5U))));
            tracep->chgBit(oldp+75,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U]) 
                                           >> 5U))));
            tracep->chgBit(oldp+76,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xcU][3U] 
                                           >> 6U))));
            tracep->chgBit(oldp+77,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xdU][3U] 
                                           >> 6U))));
            tracep->chgBit(oldp+78,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xeU][3U] 
                                           >> 6U))));
            tracep->chgBit(oldp+79,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 6U))));
            tracep->chgBit(oldp+80,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xeU][3U]) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xeU][3U])) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xcU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U])) 
                                           >> 6U))));
            tracep->chgBit(oldp+81,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U]) 
                                           >> 6U))));
            tracep->chgBit(oldp+82,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 6U))));
            tracep->chgBit(oldp+83,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 6U))));
            tracep->chgBit(oldp+84,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U]) 
                                           >> 6U))));
            tracep->chgBit(oldp+85,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xcU][3U] 
                                           >> 7U))));
            tracep->chgBit(oldp+86,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xdU][3U] 
                                           >> 7U))));
            tracep->chgBit(oldp+87,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xeU][3U] 
                                           >> 7U))));
            tracep->chgBit(oldp+88,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 7U))));
            tracep->chgBit(oldp+89,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xeU][3U]) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xeU][3U])) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xcU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U])) 
                                           >> 7U))));
            tracep->chgBit(oldp+90,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U]) 
                                           >> 7U))));
            tracep->chgBit(oldp+91,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 7U))));
            tracep->chgBit(oldp+92,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 7U))));
            tracep->chgBit(oldp+93,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U]) 
                                           >> 7U))));
            tracep->chgBit(oldp+94,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xcU][3U] 
                                           >> 8U))));
            tracep->chgBit(oldp+95,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xdU][3U] 
                                           >> 8U))));
            tracep->chgBit(oldp+96,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xeU][3U] 
                                           >> 8U))));
            tracep->chgBit(oldp+97,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U]) 
                                           >> 8U))));
            tracep->chgBit(oldp+98,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xeU][3U]) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xeU][3U])) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xcU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U])) 
                                           >> 8U))));
            tracep->chgBit(oldp+99,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U]) 
                                           >> 8U))));
            tracep->chgBit(oldp+100,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+101,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+102,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+103,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 9U))));
            tracep->chgBit(oldp+104,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 9U))));
            tracep->chgBit(oldp+105,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 9U))));
            tracep->chgBit(oldp+106,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+107,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 9U))));
            tracep->chgBit(oldp+108,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+109,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+110,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+111,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+112,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+113,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+114,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+115,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+116,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+117,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+118,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+119,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+120,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+121,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+122,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+123,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+124,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+125,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+126,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+127,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+128,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+129,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+130,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+131,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+132,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+133,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+134,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+135,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+136,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+137,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+138,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+139,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+140,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+141,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+142,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+143,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+144,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+145,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+146,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+147,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+148,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+149,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+150,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+151,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+152,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+153,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+154,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+155,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+156,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+157,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+158,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+159,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+160,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+161,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+162,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+163,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+164,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+165,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+166,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+167,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+168,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+169,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+170,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+171,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+172,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+173,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+174,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+175,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+176,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+177,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+178,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+179,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+180,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+181,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+182,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+183,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+184,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+185,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+186,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+187,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+188,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+189,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+190,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+191,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+192,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+193,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+194,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+195,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+196,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+197,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+198,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+199,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+200,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+201,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+202,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+203,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+204,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+205,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+206,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+207,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+208,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+209,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+210,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+211,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+212,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+213,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+214,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+215,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+216,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+217,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+218,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+219,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+220,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+221,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+222,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+223,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+224,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+225,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+226,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+227,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+228,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+229,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+230,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+231,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+232,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+233,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+234,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+235,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+236,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+237,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+238,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+239,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+240,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+241,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+242,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+243,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+244,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+245,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+246,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+247,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+248,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+249,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+250,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+251,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+252,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+253,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+254,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+255,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+256,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+257,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+258,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+259,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+260,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+261,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+262,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+263,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+264,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+265,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+266,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+267,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+268,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+269,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+270,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+271,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+272,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+273,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+274,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+275,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+276,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+277,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+278,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+279,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+280,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+281,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+282,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+283,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+284,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+285,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+286,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+287,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+288,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+289,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+290,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+291,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+292,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xcU][3U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+293,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xdU][3U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+294,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xeU][3U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+295,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xcU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xdU][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+296,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xdU][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xeU][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xcU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xeU][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xcU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xdU][3U])) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+297,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+298,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+299,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xeU][3U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+300,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xcU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xdU][3U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+301,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xcU][3U] >> 0x1fU)));
            tracep->chgBit(oldp+302,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xdU][3U] >> 0x1fU)));
            tracep->chgBit(oldp+303,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xeU][3U] >> 0x1fU)));
            tracep->chgBit(oldp+304,((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xcU][3U] 
                                        ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xdU][3U]) 
                                       ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xeU][3U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+305,(((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xdU][3U] 
                                         & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xeU][3U]) 
                                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xcU][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xeU][3U])) 
                                       | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xcU][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xdU][3U])) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+306,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xcU][3U] ^ 
                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xdU][3U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+307,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xdU][3U] & 
                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xeU][3U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+308,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xcU][3U] & 
                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xeU][3U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+309,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xcU][3U] & 
                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xdU][3U]) 
                                      >> 0x1fU)));
            __Vtemp213343[0U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                [0xfU][0U];
            __Vtemp213343[1U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                [0xfU][1U];
            __Vtemp213343[2U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                [0xfU][2U];
            __Vtemp213343[3U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                [0xfU][3U];
            __Vtemp213343[4U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                [0xfU][4U];
            tracep->chgWData(oldp+310,(__Vtemp213343),129);
            __Vtemp213344[0U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                [0x10U][0U];
            __Vtemp213344[1U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                [0x10U][1U];
            __Vtemp213344[2U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                [0x10U][2U];
            __Vtemp213344[3U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                [0x10U][3U];
            __Vtemp213344[4U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                [0x10U][4U];
            tracep->chgWData(oldp+315,(__Vtemp213344),129);
            __Vtemp213345[0U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                [0x11U][0U];
            __Vtemp213345[1U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                [0x11U][1U];
            __Vtemp213345[2U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                [0x11U][2U];
            __Vtemp213345[3U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                [0x11U][3U];
            __Vtemp213345[4U] = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                [0x11U][4U];
            tracep->chgWData(oldp+320,(__Vtemp213345),129);
            tracep->chgBit(oldp+325,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][4U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][4U]) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][4U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][4U])) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][4U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][4U])))));
            tracep->chgBit(oldp+326,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xfU][4U])));
            tracep->chgBit(oldp+327,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x10U][4U])));
            tracep->chgBit(oldp+328,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x11U][4U])));
            tracep->chgBit(oldp+329,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][4U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][4U]) 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][4U]))));
            tracep->chgBit(oldp+330,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][4U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][4U]))));
            tracep->chgBit(oldp+331,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][4U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][4U]))));
            tracep->chgBit(oldp+332,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][4U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][4U]))));
            tracep->chgBit(oldp+333,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][4U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][4U]))));
            tracep->chgBit(oldp+334,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xfU][0U])));
            tracep->chgBit(oldp+335,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x10U][0U])));
            tracep->chgBit(oldp+336,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x11U][0U])));
            tracep->chgBit(oldp+337,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U]))));
            tracep->chgBit(oldp+338,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][0U]) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][0U])) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U])))));
            tracep->chgBit(oldp+339,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U]))));
            tracep->chgBit(oldp+340,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U]))));
            tracep->chgBit(oldp+341,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U]))));
            tracep->chgBit(oldp+342,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U]))));
            tracep->chgBit(oldp+343,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+344,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+345,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+346,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+347,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 1U))));
            tracep->chgBit(oldp+348,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+349,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+350,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+351,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+352,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+353,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+354,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+355,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+356,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 2U))));
            tracep->chgBit(oldp+357,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+358,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+359,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+360,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+361,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+362,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+363,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+364,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+365,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 3U))));
            tracep->chgBit(oldp+366,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+367,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+368,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+369,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+370,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+371,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+372,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+373,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+374,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 4U))));
            tracep->chgBit(oldp+375,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+376,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+377,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+378,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+379,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+380,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+381,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+382,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+383,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 5U))));
            tracep->chgBit(oldp+384,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+385,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+386,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+387,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+388,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+389,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+390,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+391,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+392,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 6U))));
            tracep->chgBit(oldp+393,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+394,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+395,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+396,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+397,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+398,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+399,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+400,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+401,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 7U))));
            tracep->chgBit(oldp+402,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+403,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+404,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+405,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+406,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+407,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+408,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+409,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+410,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 8U))));
            tracep->chgBit(oldp+411,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+412,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+413,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+414,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+415,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 9U))));
            tracep->chgBit(oldp+416,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 9U))));
            tracep->chgBit(oldp+417,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 9U))));
            tracep->chgBit(oldp+418,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+419,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 9U))));
            tracep->chgBit(oldp+420,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+421,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+422,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+423,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+424,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+425,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+426,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+427,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+428,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+429,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+430,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+431,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+432,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+433,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+434,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+435,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+436,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+437,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+438,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+439,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+440,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+441,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+442,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+443,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+444,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+445,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+446,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+447,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+448,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+449,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+450,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+451,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+452,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+453,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+454,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+455,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+456,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+457,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+458,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+459,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+460,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+461,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+462,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+463,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+464,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+465,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+466,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+467,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+468,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+469,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+470,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+471,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+472,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+473,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+474,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+475,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+476,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+477,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+478,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+479,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+480,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+481,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+482,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+483,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+484,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+485,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+486,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+487,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+488,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+489,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+490,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+491,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+492,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+493,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+494,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+495,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+496,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+497,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+498,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+499,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+500,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+501,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+502,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+503,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+504,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+505,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+506,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+507,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+508,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+509,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+510,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+511,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+512,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+513,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+514,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+515,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+516,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+517,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+518,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+519,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+520,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+521,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+522,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+523,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+524,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+525,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+526,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+527,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+528,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+529,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+530,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+531,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+532,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+533,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+534,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+535,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+536,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+537,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+538,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+539,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+540,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+541,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+542,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+543,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+544,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+545,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+546,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+547,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+548,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+549,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+550,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+551,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+552,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+553,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+554,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+555,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+556,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+557,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+558,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+559,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+560,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+561,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+562,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+563,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+564,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+565,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+566,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+567,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+568,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+569,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+570,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+571,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+572,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+573,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+574,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+575,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+576,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+577,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+578,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+579,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+580,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+581,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+582,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+583,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+584,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+585,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+586,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+587,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+588,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+589,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+590,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+591,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+592,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+593,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+594,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+595,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+596,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+597,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+598,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+599,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+600,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+601,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+602,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+603,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+604,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][0U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+605,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][0U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+606,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][0U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+607,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][0U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][0U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+608,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][0U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][0U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][0U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][0U])) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+609,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+610,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+611,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][0U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+612,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][0U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+613,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xfU][0U] >> 0x1fU)));
            tracep->chgBit(oldp+614,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x10U][0U] >> 0x1fU)));
            tracep->chgBit(oldp+615,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x11U][0U] >> 0x1fU)));
            tracep->chgBit(oldp+616,((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xfU][0U] 
                                        ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x10U][0U]) 
                                       ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x11U][0U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+617,(((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x10U][0U] 
                                         & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x11U][0U]) 
                                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xfU][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x11U][0U])) 
                                       | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xfU][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x10U][0U])) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+618,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xfU][0U] ^ 
                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x10U][0U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+619,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x10U][0U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x11U][0U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+620,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xfU][0U] & 
                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x11U][0U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+621,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xfU][0U] & 
                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x10U][0U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+622,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xfU][1U])));
            tracep->chgBit(oldp+623,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x10U][1U])));
            tracep->chgBit(oldp+624,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x11U][1U])));
            tracep->chgBit(oldp+625,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U]))));
            tracep->chgBit(oldp+626,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][1U]) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][1U])) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U])))));
            tracep->chgBit(oldp+627,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U]))));
            tracep->chgBit(oldp+628,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U]))));
            tracep->chgBit(oldp+629,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U]))));
            tracep->chgBit(oldp+630,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U]))));
            tracep->chgBit(oldp+631,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+632,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+633,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+634,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+635,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 1U))));
            tracep->chgBit(oldp+636,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+637,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+638,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+639,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+640,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 2U))));
            tracep->chgBit(oldp+641,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 2U))));
            tracep->chgBit(oldp+642,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 2U))));
            tracep->chgBit(oldp+643,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+644,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 2U))));
            tracep->chgBit(oldp+645,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+646,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+647,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+648,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+649,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 3U))));
            tracep->chgBit(oldp+650,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 3U))));
            tracep->chgBit(oldp+651,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 3U))));
            tracep->chgBit(oldp+652,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+653,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 3U))));
            tracep->chgBit(oldp+654,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+655,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+656,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+657,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+658,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 4U))));
            tracep->chgBit(oldp+659,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 4U))));
            tracep->chgBit(oldp+660,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 4U))));
            tracep->chgBit(oldp+661,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+662,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 4U))));
            tracep->chgBit(oldp+663,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+664,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+665,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+666,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+667,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 5U))));
            tracep->chgBit(oldp+668,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 5U))));
            tracep->chgBit(oldp+669,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 5U))));
            tracep->chgBit(oldp+670,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+671,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 5U))));
            tracep->chgBit(oldp+672,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+673,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+674,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+675,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+676,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 6U))));
            tracep->chgBit(oldp+677,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 6U))));
            tracep->chgBit(oldp+678,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 6U))));
            tracep->chgBit(oldp+679,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+680,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 6U))));
            tracep->chgBit(oldp+681,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+682,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+683,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+684,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+685,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 7U))));
            tracep->chgBit(oldp+686,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 7U))));
            tracep->chgBit(oldp+687,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 7U))));
            tracep->chgBit(oldp+688,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+689,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 7U))));
            tracep->chgBit(oldp+690,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+691,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+692,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+693,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+694,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 8U))));
            tracep->chgBit(oldp+695,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 8U))));
            tracep->chgBit(oldp+696,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 8U))));
            tracep->chgBit(oldp+697,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+698,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 8U))));
            tracep->chgBit(oldp+699,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+700,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+701,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+702,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+703,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 9U))));
            tracep->chgBit(oldp+704,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 9U))));
            tracep->chgBit(oldp+705,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 9U))));
            tracep->chgBit(oldp+706,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+707,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 9U))));
            tracep->chgBit(oldp+708,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+709,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+710,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+711,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+712,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+713,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+714,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+715,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+716,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+717,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+718,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+719,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+720,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+721,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+722,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+723,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+724,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+725,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+726,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+727,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+728,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+729,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+730,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+731,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+732,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+733,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+734,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+735,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+736,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+737,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+738,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+739,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+740,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+741,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+742,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+743,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+744,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+745,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+746,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+747,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+748,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+749,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+750,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+751,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+752,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+753,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+754,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+755,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+756,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+757,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+758,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+759,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+760,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+761,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+762,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+763,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+764,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+765,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+766,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+767,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+768,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+769,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+770,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+771,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+772,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+773,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+774,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+775,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+776,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+777,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+778,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+779,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+780,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+781,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+782,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+783,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+784,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+785,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+786,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+787,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+788,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+789,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+790,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+791,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+792,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+793,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+794,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+795,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+796,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+797,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+798,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+799,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+800,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+801,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+802,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+803,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+804,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+805,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+806,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+807,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+808,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+809,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+810,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+811,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+812,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+813,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+814,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+815,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+816,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+817,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+818,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+819,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+820,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+821,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+822,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+823,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+824,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+825,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+826,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+827,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+828,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+829,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+830,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+831,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+832,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+833,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+834,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+835,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+836,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+837,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+838,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+839,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+840,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+841,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+842,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+843,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+844,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+845,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+846,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+847,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+848,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+849,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+850,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+851,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+852,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+853,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+854,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+855,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+856,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+857,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+858,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+859,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+860,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+861,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+862,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+863,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+864,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+865,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+866,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+867,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+868,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+869,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+870,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+871,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+872,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+873,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+874,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+875,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+876,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+877,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+878,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+879,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+880,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+881,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+882,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+883,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+884,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+885,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+886,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+887,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+888,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+889,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+890,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+891,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+892,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][1U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+893,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][1U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+894,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][1U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+895,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][1U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][1U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+896,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][1U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][1U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][1U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][1U])) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+897,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+898,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+899,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][1U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+900,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][1U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+901,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xfU][1U] >> 0x1fU)));
            tracep->chgBit(oldp+902,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x10U][1U] >> 0x1fU)));
            tracep->chgBit(oldp+903,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x11U][1U] >> 0x1fU)));
            tracep->chgBit(oldp+904,((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xfU][1U] 
                                        ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x10U][1U]) 
                                       ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x11U][1U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+905,(((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x10U][1U] 
                                         & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x11U][1U]) 
                                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xfU][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x11U][1U])) 
                                       | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xfU][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x10U][1U])) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+906,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xfU][1U] ^ 
                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x10U][1U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+907,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x10U][1U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x11U][1U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+908,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xfU][1U] & 
                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x11U][1U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+909,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xfU][1U] & 
                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x10U][1U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+910,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xfU][2U])));
            tracep->chgBit(oldp+911,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x10U][2U])));
            tracep->chgBit(oldp+912,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x11U][2U])));
            tracep->chgBit(oldp+913,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][2U]))));
            tracep->chgBit(oldp+914,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U])) 
                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U])))));
            tracep->chgBit(oldp+915,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][2U] 
                                            ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][2U]))));
            tracep->chgBit(oldp+916,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][2U]))));
            tracep->chgBit(oldp+917,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][2U]))));
            tracep->chgBit(oldp+918,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][2U]))));
            tracep->chgBit(oldp+919,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+920,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+921,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+922,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+923,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][2U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][2U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U])) 
                                            >> 1U))));
            tracep->chgBit(oldp+924,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+925,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+926,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+927,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+928,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][2U] 
                                            >> 2U))));
            tracep->chgBit(oldp+929,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][2U] 
                                            >> 2U))));
            tracep->chgBit(oldp+930,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][2U] 
                                            >> 2U))));
            tracep->chgBit(oldp+931,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+932,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][2U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][2U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U])) 
                                            >> 2U))));
            tracep->chgBit(oldp+933,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+934,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+935,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+936,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+937,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][2U] 
                                            >> 3U))));
            tracep->chgBit(oldp+938,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][2U] 
                                            >> 3U))));
            tracep->chgBit(oldp+939,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][2U] 
                                            >> 3U))));
            tracep->chgBit(oldp+940,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+941,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][2U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][2U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U])) 
                                            >> 3U))));
            tracep->chgBit(oldp+942,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+943,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+944,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+945,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+946,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][2U] 
                                            >> 4U))));
            tracep->chgBit(oldp+947,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][2U] 
                                            >> 4U))));
            tracep->chgBit(oldp+948,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][2U] 
                                            >> 4U))));
            tracep->chgBit(oldp+949,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+950,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][2U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][2U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U])) 
                                            >> 4U))));
            tracep->chgBit(oldp+951,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+952,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+953,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+954,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+955,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+956,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+957,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+958,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+959,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][2U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][2U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U])) 
                                            >> 5U))));
            tracep->chgBit(oldp+960,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+961,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+962,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+963,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+964,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+965,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+966,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+967,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+968,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][2U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][2U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U])) 
                                            >> 6U))));
            tracep->chgBit(oldp+969,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+970,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+971,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+972,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+973,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+974,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+975,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+976,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+977,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][2U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][2U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U])) 
                                            >> 7U))));
            tracep->chgBit(oldp+978,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+979,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+980,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+981,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+982,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+983,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+984,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+985,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+986,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][2U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][2U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U])) 
                                            >> 8U))));
            tracep->chgBit(oldp+987,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+988,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+989,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+990,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+991,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][2U] 
                                            >> 9U))));
            tracep->chgBit(oldp+992,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x10U][2U] 
                                            >> 9U))));
            tracep->chgBit(oldp+993,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][2U] 
                                            >> 9U))));
            tracep->chgBit(oldp+994,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+995,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][2U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][2U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U])) 
                                            >> 9U))));
            tracep->chgBit(oldp+996,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+997,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+998,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+999,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+1000,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1001,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1002,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1003,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1004,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1005,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1006,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1007,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1008,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1009,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1010,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1011,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1012,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1013,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1014,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1015,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1016,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1017,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1018,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1019,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1020,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1021,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1022,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1023,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1024,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1025,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1026,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1027,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1028,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1029,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1030,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1031,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1032,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1033,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1034,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1035,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1036,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1037,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1038,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1039,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1040,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1041,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1042,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1043,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1044,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1045,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1046,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1047,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1048,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1049,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1050,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1051,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1052,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1053,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1054,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1055,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1056,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1057,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1058,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1059,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1060,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1061,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1062,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1063,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1064,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1065,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1066,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1067,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1068,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1069,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1070,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1071,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1072,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1073,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1074,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1075,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1076,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1077,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1078,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1079,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1080,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1081,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1082,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1083,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1084,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1085,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1086,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1087,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1088,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1089,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1090,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1091,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1092,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1093,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1094,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1095,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1096,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1097,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1098,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1099,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1100,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1101,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1102,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1103,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1104,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1105,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1106,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1107,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1108,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1109,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1110,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1111,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1112,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1113,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1114,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1115,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1116,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1117,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1118,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1119,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1120,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1121,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1122,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1123,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1124,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1125,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1126,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1127,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1128,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1129,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1130,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1131,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1132,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1133,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1134,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1135,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1136,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1137,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1138,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1139,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1140,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1141,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1142,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1143,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1144,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1145,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1146,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1147,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1148,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1149,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1150,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1151,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1152,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1153,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1154,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1155,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1156,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1157,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1158,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1159,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1160,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1161,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1162,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1163,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1164,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1165,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1166,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1167,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1168,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1169,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1170,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1171,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1172,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1173,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1174,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1175,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1176,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1177,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1178,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1179,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1180,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][2U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1181,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][2U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1182,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][2U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1183,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][2U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][2U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1184,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][2U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][2U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][2U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][2U])) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1185,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1186,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1187,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][2U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1188,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][2U]) 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1189,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xfU][2U] >> 0x1fU)));
            tracep->chgBit(oldp+1190,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x10U][2U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1191,((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x11U][2U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1192,((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xfU][2U] 
                                         ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x10U][2U]) 
                                        ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x11U][2U]) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1193,(((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x10U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x11U][2U]) 
                                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xfU][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x11U][2U])) 
                                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xfU][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x10U][2U])) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1194,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xfU][2U] 
                                        ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x10U][2U]) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1195,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x10U][2U] 
                                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x11U][2U]) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1196,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xfU][2U] 
                                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x11U][2U]) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1197,(((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xfU][2U] 
                                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x10U][2U]) 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1198,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xfU][3U])));
            tracep->chgBit(oldp+1199,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x10U][3U])));
            tracep->chgBit(oldp+1200,((1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x11U][3U])));
            tracep->chgBit(oldp+1201,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][3U]))));
            tracep->chgBit(oldp+1202,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x11U][3U]) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x11U][3U])) 
                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0xfU][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][3U])))));
            tracep->chgBit(oldp+1203,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][3U] 
                                             ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][3U]))));
            tracep->chgBit(oldp+1204,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][3U]))));
            tracep->chgBit(oldp+1205,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][3U]))));
            tracep->chgBit(oldp+1206,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][3U]))));
            tracep->chgBit(oldp+1207,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][3U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1208,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][3U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1209,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][3U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1210,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1211,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][3U])) 
                                             >> 1U))));
            tracep->chgBit(oldp+1212,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1213,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1214,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1215,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 1U))));
            tracep->chgBit(oldp+1216,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][3U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1217,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][3U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1218,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][3U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1219,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1220,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][3U])) 
                                             >> 2U))));
            tracep->chgBit(oldp+1221,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1222,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1223,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1224,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 2U))));
            tracep->chgBit(oldp+1225,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][3U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1226,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][3U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1227,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][3U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1228,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1229,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][3U])) 
                                             >> 3U))));
            tracep->chgBit(oldp+1230,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1231,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1232,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1233,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 3U))));
            tracep->chgBit(oldp+1234,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][3U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1235,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][3U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1236,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][3U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1237,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1238,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][3U])) 
                                             >> 4U))));
            tracep->chgBit(oldp+1239,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1240,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1241,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1242,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 4U))));
            tracep->chgBit(oldp+1243,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][3U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1244,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][3U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1245,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][3U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1246,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1247,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][3U])) 
                                             >> 5U))));
            tracep->chgBit(oldp+1248,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1249,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1250,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1251,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 5U))));
            tracep->chgBit(oldp+1252,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][3U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1253,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][3U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1254,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][3U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1255,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1256,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][3U])) 
                                             >> 6U))));
            tracep->chgBit(oldp+1257,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1258,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1259,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1260,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 6U))));
            tracep->chgBit(oldp+1261,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][3U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1262,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][3U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1263,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][3U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1264,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1265,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][3U])) 
                                             >> 7U))));
            tracep->chgBit(oldp+1266,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1267,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1268,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1269,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 7U))));
            tracep->chgBit(oldp+1270,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][3U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1271,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][3U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1272,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][3U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1273,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1274,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][3U])) 
                                             >> 8U))));
            tracep->chgBit(oldp+1275,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1276,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1277,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1278,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 8U))));
            tracep->chgBit(oldp+1279,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][3U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1280,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][3U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1281,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][3U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1282,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1283,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][3U])) 
                                             >> 9U))));
            tracep->chgBit(oldp+1284,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1285,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1286,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1287,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 9U))));
            tracep->chgBit(oldp+1288,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][3U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1289,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][3U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1290,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][3U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1291,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1292,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][3U])) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1293,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1294,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1295,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1296,((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xfU][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x10U][3U]) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1297,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xfU][3U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1298,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x10U][3U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1299,((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x11U][3U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1300,((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xfU][3U] 
                                               ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x10U][3U]) 
                                              ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x11U][3U]) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1301,((1U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x10U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x11U][3U]) 
                                               | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xfU][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x11U][3U])) 
                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0xfU][3U] 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                 [0x10U][3U])) 
                                             >> 0xbU))));
        }
    }
}
