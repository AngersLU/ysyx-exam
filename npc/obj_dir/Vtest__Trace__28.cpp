// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest__Syms.h"


void Vtest___024root__traceChgSub28(Vtest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 37541);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+0,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                     [0x1dU][1U] ^ 
                                     vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                     [0x1cU][1U]) >> 0x1fU)));
            tracep->chgBit(oldp+1,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                     [0x1cU][1U] & 
                                     vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                     [0x1bU][1U]) >> 0x1fU)));
            tracep->chgBit(oldp+2,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                     [0x1dU][1U] & 
                                     vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                     [0x1bU][1U]) >> 0x1fU)));
            tracep->chgBit(oldp+3,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                     [0x1dU][1U] & 
                                     vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                     [0x1cU][1U]) >> 0x1fU)));
            tracep->chgBit(oldp+4,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0x1dU][2U])));
            tracep->chgBit(oldp+5,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0x1cU][2U])));
            tracep->chgBit(oldp+6,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0x1bU][2U])));
            tracep->chgBit(oldp+7,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1dU][2U] 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1cU][2U]) 
                                          ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1bU][2U]))));
            tracep->chgBit(oldp+8,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1bU][2U])) 
                                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U])))));
            tracep->chgBit(oldp+9,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1dU][2U] 
                                          ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1cU][2U]))));
            tracep->chgBit(oldp+10,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1cU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1bU][2U]))));
            tracep->chgBit(oldp+11,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1dU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1bU][2U]))));
            tracep->chgBit(oldp+12,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1dU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1cU][2U]))));
            tracep->chgBit(oldp+13,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1dU][2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+14,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1cU][2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+15,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1bU][2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+16,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 1U))));
            tracep->chgBit(oldp+17,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1dU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U])) 
                                           >> 1U))));
            tracep->chgBit(oldp+18,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 1U))));
            tracep->chgBit(oldp+19,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 1U))));
            tracep->chgBit(oldp+20,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 1U))));
            tracep->chgBit(oldp+21,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 1U))));
            tracep->chgBit(oldp+22,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1dU][2U] 
                                           >> 2U))));
            tracep->chgBit(oldp+23,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1cU][2U] 
                                           >> 2U))));
            tracep->chgBit(oldp+24,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1bU][2U] 
                                           >> 2U))));
            tracep->chgBit(oldp+25,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 2U))));
            tracep->chgBit(oldp+26,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1dU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U])) 
                                           >> 2U))));
            tracep->chgBit(oldp+27,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 2U))));
            tracep->chgBit(oldp+28,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 2U))));
            tracep->chgBit(oldp+29,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 2U))));
            tracep->chgBit(oldp+30,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 2U))));
            tracep->chgBit(oldp+31,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1dU][2U] 
                                           >> 3U))));
            tracep->chgBit(oldp+32,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1cU][2U] 
                                           >> 3U))));
            tracep->chgBit(oldp+33,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1bU][2U] 
                                           >> 3U))));
            tracep->chgBit(oldp+34,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 3U))));
            tracep->chgBit(oldp+35,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1dU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U])) 
                                           >> 3U))));
            tracep->chgBit(oldp+36,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 3U))));
            tracep->chgBit(oldp+37,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 3U))));
            tracep->chgBit(oldp+38,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 3U))));
            tracep->chgBit(oldp+39,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 3U))));
            tracep->chgBit(oldp+40,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1dU][2U] 
                                           >> 4U))));
            tracep->chgBit(oldp+41,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1cU][2U] 
                                           >> 4U))));
            tracep->chgBit(oldp+42,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1bU][2U] 
                                           >> 4U))));
            tracep->chgBit(oldp+43,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 4U))));
            tracep->chgBit(oldp+44,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1dU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U])) 
                                           >> 4U))));
            tracep->chgBit(oldp+45,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 4U))));
            tracep->chgBit(oldp+46,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 4U))));
            tracep->chgBit(oldp+47,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 4U))));
            tracep->chgBit(oldp+48,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 4U))));
            tracep->chgBit(oldp+49,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1dU][2U] 
                                           >> 5U))));
            tracep->chgBit(oldp+50,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1cU][2U] 
                                           >> 5U))));
            tracep->chgBit(oldp+51,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1bU][2U] 
                                           >> 5U))));
            tracep->chgBit(oldp+52,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 5U))));
            tracep->chgBit(oldp+53,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1dU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U])) 
                                           >> 5U))));
            tracep->chgBit(oldp+54,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 5U))));
            tracep->chgBit(oldp+55,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 5U))));
            tracep->chgBit(oldp+56,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 5U))));
            tracep->chgBit(oldp+57,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 5U))));
            tracep->chgBit(oldp+58,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1dU][2U] 
                                           >> 6U))));
            tracep->chgBit(oldp+59,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1cU][2U] 
                                           >> 6U))));
            tracep->chgBit(oldp+60,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1bU][2U] 
                                           >> 6U))));
            tracep->chgBit(oldp+61,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 6U))));
            tracep->chgBit(oldp+62,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1dU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U])) 
                                           >> 6U))));
            tracep->chgBit(oldp+63,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 6U))));
            tracep->chgBit(oldp+64,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 6U))));
            tracep->chgBit(oldp+65,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 6U))));
            tracep->chgBit(oldp+66,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 6U))));
            tracep->chgBit(oldp+67,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1dU][2U] 
                                           >> 7U))));
            tracep->chgBit(oldp+68,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1cU][2U] 
                                           >> 7U))));
            tracep->chgBit(oldp+69,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1bU][2U] 
                                           >> 7U))));
            tracep->chgBit(oldp+70,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 7U))));
            tracep->chgBit(oldp+71,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1dU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U])) 
                                           >> 7U))));
            tracep->chgBit(oldp+72,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 7U))));
            tracep->chgBit(oldp+73,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 7U))));
            tracep->chgBit(oldp+74,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 7U))));
            tracep->chgBit(oldp+75,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 7U))));
            tracep->chgBit(oldp+76,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1dU][2U] 
                                           >> 8U))));
            tracep->chgBit(oldp+77,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1cU][2U] 
                                           >> 8U))));
            tracep->chgBit(oldp+78,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1bU][2U] 
                                           >> 8U))));
            tracep->chgBit(oldp+79,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 8U))));
            tracep->chgBit(oldp+80,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1dU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U])) 
                                           >> 8U))));
            tracep->chgBit(oldp+81,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 8U))));
            tracep->chgBit(oldp+82,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 8U))));
            tracep->chgBit(oldp+83,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 8U))));
            tracep->chgBit(oldp+84,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 8U))));
            tracep->chgBit(oldp+85,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1dU][2U] 
                                           >> 9U))));
            tracep->chgBit(oldp+86,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1cU][2U] 
                                           >> 9U))));
            tracep->chgBit(oldp+87,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1bU][2U] 
                                           >> 9U))));
            tracep->chgBit(oldp+88,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 9U))));
            tracep->chgBit(oldp+89,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1dU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U])) 
                                           >> 9U))));
            tracep->chgBit(oldp+90,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 9U))));
            tracep->chgBit(oldp+91,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 9U))));
            tracep->chgBit(oldp+92,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 9U))));
            tracep->chgBit(oldp+93,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 9U))));
            tracep->chgBit(oldp+94,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1dU][2U] 
                                           >> 0xaU))));
            tracep->chgBit(oldp+95,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1cU][2U] 
                                           >> 0xaU))));
            tracep->chgBit(oldp+96,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1bU][2U] 
                                           >> 0xaU))));
            tracep->chgBit(oldp+97,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U]) 
                                           >> 0xaU))));
            tracep->chgBit(oldp+98,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1dU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U])) 
                                           >> 0xaU))));
            tracep->chgBit(oldp+99,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U]) 
                                           >> 0xaU))));
            tracep->chgBit(oldp+100,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+101,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+102,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+103,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+104,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+105,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+106,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+107,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+108,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+109,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+110,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+111,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+112,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+113,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+114,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+115,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+116,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+117,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+118,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+119,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+120,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+121,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+122,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+123,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+124,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+125,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+126,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+127,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+128,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+129,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+130,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+131,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+132,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+133,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+134,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+135,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+136,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+137,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+138,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+139,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+140,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+141,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+142,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+143,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+144,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+145,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+146,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+147,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+148,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+149,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+150,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+151,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+152,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+153,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+154,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+155,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+156,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+157,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+158,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+159,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+160,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+161,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+162,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+163,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+164,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+165,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+166,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+167,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+168,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+169,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+170,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+171,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+172,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+173,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+174,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+175,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+176,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+177,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+178,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+179,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+180,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+181,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+182,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+183,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+184,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+185,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+186,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+187,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+188,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+189,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+190,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+191,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+192,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+193,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+194,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+195,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+196,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+197,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+198,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+199,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+200,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+201,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+202,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+203,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+204,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+205,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+206,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+207,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+208,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+209,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+210,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+211,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+212,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+213,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+214,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+215,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+216,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+217,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+218,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+219,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+220,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+221,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+222,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+223,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+224,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+225,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+226,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+227,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+228,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+229,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+230,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+231,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+232,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+233,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+234,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+235,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+236,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+237,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+238,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+239,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+240,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+241,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+242,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+243,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+244,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+245,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+246,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+247,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+248,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+249,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+250,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+251,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+252,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+253,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+254,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+255,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+256,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+257,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+258,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+259,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+260,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+261,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+262,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+263,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+264,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+265,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+266,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+267,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+268,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+269,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+270,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+271,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+272,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+273,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+274,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][2U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+275,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][2U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+276,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][2U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+277,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][2U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][2U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+278,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][2U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][2U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][2U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][2U])) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+279,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+280,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+281,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][2U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+282,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][2U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+283,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                      [0x1dU][2U] >> 0x1fU)));
            tracep->chgBit(oldp+284,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                      [0x1cU][2U] >> 0x1fU)));
            tracep->chgBit(oldp+285,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                      [0x1bU][2U] >> 0x1fU)));
            tracep->chgBit(oldp+286,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x1dU][2U] 
                                        ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x1cU][2U]) 
                                       ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1bU][2U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+287,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0x1cU][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0x1bU][2U]) 
                                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1dU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1bU][2U])) 
                                       | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1dU][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1cU][2U])) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+288,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1dU][2U] 
                                       ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1cU][2U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+289,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1cU][2U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1bU][2U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+290,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1dU][2U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1bU][2U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+291,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1dU][2U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1cU][2U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+292,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                      [0x1dU][3U])));
            tracep->chgBit(oldp+293,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                      [0x1cU][3U])));
            tracep->chgBit(oldp+294,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                      [0x1bU][3U])));
            tracep->chgBit(oldp+295,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U]))));
            tracep->chgBit(oldp+296,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1dU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U])))));
            tracep->chgBit(oldp+297,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U]))));
            tracep->chgBit(oldp+298,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U]))));
            tracep->chgBit(oldp+299,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U]))));
            tracep->chgBit(oldp+300,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U]))));
            tracep->chgBit(oldp+301,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 1U))));
            tracep->chgBit(oldp+302,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 1U))));
            tracep->chgBit(oldp+303,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 1U))));
            tracep->chgBit(oldp+304,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+305,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 1U))));
            tracep->chgBit(oldp+306,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+307,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+308,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+309,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 1U))));
            tracep->chgBit(oldp+310,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 2U))));
            tracep->chgBit(oldp+311,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 2U))));
            tracep->chgBit(oldp+312,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 2U))));
            tracep->chgBit(oldp+313,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+314,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 2U))));
            tracep->chgBit(oldp+315,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+316,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+317,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+318,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 2U))));
            tracep->chgBit(oldp+319,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 3U))));
            tracep->chgBit(oldp+320,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 3U))));
            tracep->chgBit(oldp+321,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 3U))));
            tracep->chgBit(oldp+322,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+323,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 3U))));
            tracep->chgBit(oldp+324,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+325,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+326,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+327,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 3U))));
            tracep->chgBit(oldp+328,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 4U))));
            tracep->chgBit(oldp+329,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 4U))));
            tracep->chgBit(oldp+330,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 4U))));
            tracep->chgBit(oldp+331,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+332,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 4U))));
            tracep->chgBit(oldp+333,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+334,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+335,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+336,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 4U))));
            tracep->chgBit(oldp+337,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 5U))));
            tracep->chgBit(oldp+338,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 5U))));
            tracep->chgBit(oldp+339,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 5U))));
            tracep->chgBit(oldp+340,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+341,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 5U))));
            tracep->chgBit(oldp+342,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+343,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+344,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+345,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 5U))));
            tracep->chgBit(oldp+346,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 6U))));
            tracep->chgBit(oldp+347,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 6U))));
            tracep->chgBit(oldp+348,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 6U))));
            tracep->chgBit(oldp+349,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+350,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 6U))));
            tracep->chgBit(oldp+351,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+352,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+353,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+354,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 6U))));
            tracep->chgBit(oldp+355,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 7U))));
            tracep->chgBit(oldp+356,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 7U))));
            tracep->chgBit(oldp+357,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 7U))));
            tracep->chgBit(oldp+358,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+359,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 7U))));
            tracep->chgBit(oldp+360,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+361,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+362,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+363,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 7U))));
            tracep->chgBit(oldp+364,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 8U))));
            tracep->chgBit(oldp+365,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 8U))));
            tracep->chgBit(oldp+366,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 8U))));
            tracep->chgBit(oldp+367,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+368,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 8U))));
            tracep->chgBit(oldp+369,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+370,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+371,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+372,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 8U))));
            tracep->chgBit(oldp+373,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 9U))));
            tracep->chgBit(oldp+374,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 9U))));
            tracep->chgBit(oldp+375,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 9U))));
            tracep->chgBit(oldp+376,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+377,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 9U))));
            tracep->chgBit(oldp+378,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+379,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+380,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+381,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 9U))));
            tracep->chgBit(oldp+382,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+383,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+384,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+385,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+386,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+387,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+388,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+389,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+390,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+391,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+392,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+393,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+394,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+395,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+396,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+397,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+398,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+399,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+400,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+401,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+402,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+403,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+404,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+405,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+406,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+407,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+408,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+409,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+410,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+411,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+412,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+413,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+414,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+415,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+416,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+417,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+418,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+419,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+420,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+421,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+422,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+423,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+424,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+425,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+426,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+427,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+428,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+429,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+430,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+431,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+432,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+433,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+434,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+435,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+436,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+437,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+438,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+439,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+440,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+441,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+442,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+443,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+444,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+445,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+446,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+447,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+448,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+449,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+450,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+451,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+452,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+453,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+454,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+455,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+456,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+457,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+458,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+459,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+460,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+461,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+462,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+463,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+464,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+465,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+466,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+467,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+468,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+469,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+470,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+471,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+472,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+473,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+474,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+475,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+476,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+477,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+478,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+479,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+480,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+481,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+482,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+483,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+484,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+485,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+486,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+487,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+488,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+489,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+490,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+491,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+492,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+493,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+494,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+495,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+496,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+497,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+498,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+499,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+500,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+501,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+502,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+503,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+504,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+505,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+506,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+507,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+508,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+509,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+510,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+511,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+512,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+513,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+514,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+515,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+516,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+517,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+518,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+519,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+520,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+521,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+522,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+523,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+524,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+525,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+526,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+527,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+528,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+529,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+530,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+531,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+532,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+533,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+534,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+535,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+536,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+537,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+538,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+539,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+540,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+541,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+542,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+543,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+544,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+545,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+546,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+547,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+548,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+549,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+550,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+551,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+552,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+553,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+554,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+555,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+556,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+557,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+558,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+559,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+560,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+561,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+562,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1dU][3U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+563,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1cU][3U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+564,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1bU][3U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+565,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1dU][3U] 
                                              ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1cU][3U]) 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+566,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1cU][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                               [0x1bU][3U]) 
                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1dU][3U] 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                 [0x1bU][3U])) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1dU][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                [0x1cU][3U])) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+567,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+568,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+569,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1bU][3U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+570,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1cU][3U]) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+571,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                      [0x1dU][3U] >> 0x1fU)));
            tracep->chgBit(oldp+572,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                      [0x1cU][3U] >> 0x1fU)));
            tracep->chgBit(oldp+573,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                      [0x1bU][3U] >> 0x1fU)));
            tracep->chgBit(oldp+574,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x1dU][3U] 
                                        ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0x1cU][3U]) 
                                       ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1bU][3U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+575,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0x1cU][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0x1bU][3U]) 
                                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1dU][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1bU][3U])) 
                                       | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1dU][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1cU][3U])) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+576,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1dU][3U] 
                                       ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1cU][3U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+577,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1cU][3U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1bU][3U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+578,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1dU][3U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1bU][3U]) 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+579,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1dU][3U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1cU][3U]) 
                                      >> 0x1fU)));
            tracep->chgWData(oldp+580,(vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux.s),129);
            tracep->chgWData(oldp+585,(vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux.c),129);
        }
        tracep->chgQData(oldp+590,(vlSelf->addr_i),64);
        tracep->chgQData(oldp+592,(vlSelf->addr_o),64);
        tracep->chgBit(oldp+594,(vlSelf->clk));
        tracep->chgBit(oldp+595,(vlSelf->rst));
        tracep->chgBit(oldp+596,(vlSelf->isram_e));
        tracep->chgQData(oldp+597,(vlSelf->isram_addr),64);
        tracep->chgIData(oldp+599,(vlSelf->isram_rdata),32);
        tracep->chgBit(oldp+600,(vlSelf->dsram_e));
        tracep->chgBit(oldp+601,(vlSelf->dsram_we));
        tracep->chgQData(oldp+602,(vlSelf->debug_wb_pc),64);
        tracep->chgBit(oldp+604,(vlSelf->bubble));
        tracep->chgQData(oldp+605,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                    >> 0xfU)))
                                                ? 0ULL
                                                : (
                                                   ((((0x1fU 
                                                       & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                          >> 0xfU)) 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U])) 
                                                     & (vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                                        >> 5U)) 
                                                    & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1)
                                                     ? 
                                                    vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs
                                                    [
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                        >> 0xfU))]
                                                     : 0ULL))))),64);
        tracep->chgQData(oldp+607,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                    >> 0x14U)))
                                                ? 0ULL
                                                : (
                                                   ((((0x1fU 
                                                       & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                          >> 0x14U)) 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U])) 
                                                     & (vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                                        >> 5U)) 
                                                    & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2)
                                                     ? 
                                                    vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs
                                                    [
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                        >> 0x14U))]
                                                     : 0ULL))))),64);
        tracep->chgQData(oldp+609,((((vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
                                      >> 5U) & ((0x1fU 
                                                 & vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U]) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                    >> 0xfU))))
                                     ? (((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[0U])))
                                     : (((vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
                                          >> 5U) & 
                                         ((0x1fU & 
                                           vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U]) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0xfU))))
                                         ? (((QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[0U])))
                                         : (((vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                              >> 5U) 
                                             & ((0x1fU 
                                                 & vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                    >> 0xfU))))
                                             ? (((QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                             : ((IData)(vlSelf->rst)
                                                 ? 0ULL
                                                 : 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                      >> 0xfU)))
                                                  ? 0ULL
                                                  : 
                                                 (((((0x1fU 
                                                      & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                         >> 0xfU)) 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U])) 
                                                    & (vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                                       >> 5U)) 
                                                   & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1)
                                                    ? 
                                                   vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                       >> 0xfU))]
                                                    : 0ULL)))))))),64);
        tracep->chgQData(oldp+611,((((vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
                                      >> 5U) & ((0x1fU 
                                                 & vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U]) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                    >> 0x14U))))
                                     ? (((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[0U])))
                                     : (((vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
                                          >> 5U) & 
                                         ((0x1fU & 
                                           vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U]) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x14U))))
                                         ? (((QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[0U])))
                                         : (((vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                              >> 5U) 
                                             & ((0x1fU 
                                                 & vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                    >> 0x14U))))
                                             ? (((QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                             : ((IData)(vlSelf->rst)
                                                 ? 0ULL
                                                 : 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                      >> 0x14U)))
                                                  ? 0ULL
                                                  : 
                                                 (((((0x1fU 
                                                      & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                         >> 0x14U)) 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U])) 
                                                    & (vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                                       >> 5U)) 
                                                   & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2)
                                                    ? 
                                                   vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                       >> 0x14U))]
                                                    : 0ULL)))))))),64);
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
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
