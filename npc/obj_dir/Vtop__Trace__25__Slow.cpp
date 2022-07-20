// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceFullSub24(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<5>/*159:0*/ __Vtemp145888;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+31864,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][0U])) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+31865,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][0U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][0U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+31866,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][0U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+31867,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][0U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+31868,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][0U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+31869,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x19U][0U] >> 0x1fU)));
        tracep->fullBit(oldp+31870,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1aU][0U] >> 0x1fU)));
        tracep->fullBit(oldp+31871,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1bU][0U] >> 0x1fU)));
        tracep->fullBit(oldp+31872,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x19U][0U] 
                                       ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1aU][0U]) 
                                      ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1bU][0U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+31873,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1aU][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1bU][0U]) 
                                       | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][0U])) 
                                      | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x19U][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1aU][0U])) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+31874,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x19U][0U] ^ 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1aU][0U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+31875,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1aU][0U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1bU][0U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+31876,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x19U][0U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1bU][0U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+31877,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x19U][0U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1aU][0U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+31878,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x19U][1U])));
        tracep->fullBit(oldp+31879,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1aU][1U])));
        tracep->fullBit(oldp+31880,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1bU][1U])));
        tracep->fullBit(oldp+31881,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U]))));
        tracep->fullBit(oldp+31882,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][1U]) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][1U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U])))));
        tracep->fullBit(oldp+31883,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U]))));
        tracep->fullBit(oldp+31884,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U]))));
        tracep->fullBit(oldp+31885,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U]))));
        tracep->fullBit(oldp+31886,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U]))));
        tracep->fullBit(oldp+31887,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 1U))));
        tracep->fullBit(oldp+31888,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 1U))));
        tracep->fullBit(oldp+31889,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 1U))));
        tracep->fullBit(oldp+31890,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+31891,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 1U))));
        tracep->fullBit(oldp+31892,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+31893,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+31894,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+31895,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+31896,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 2U))));
        tracep->fullBit(oldp+31897,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 2U))));
        tracep->fullBit(oldp+31898,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 2U))));
        tracep->fullBit(oldp+31899,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+31900,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 2U))));
        tracep->fullBit(oldp+31901,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+31902,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+31903,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+31904,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+31905,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 3U))));
        tracep->fullBit(oldp+31906,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 3U))));
        tracep->fullBit(oldp+31907,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 3U))));
        tracep->fullBit(oldp+31908,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+31909,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 3U))));
        tracep->fullBit(oldp+31910,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+31911,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+31912,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+31913,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+31914,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 4U))));
        tracep->fullBit(oldp+31915,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 4U))));
        tracep->fullBit(oldp+31916,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 4U))));
        tracep->fullBit(oldp+31917,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+31918,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 4U))));
        tracep->fullBit(oldp+31919,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+31920,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+31921,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+31922,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+31923,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 5U))));
        tracep->fullBit(oldp+31924,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 5U))));
        tracep->fullBit(oldp+31925,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 5U))));
        tracep->fullBit(oldp+31926,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+31927,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 5U))));
        tracep->fullBit(oldp+31928,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+31929,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+31930,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+31931,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+31932,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 6U))));
        tracep->fullBit(oldp+31933,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 6U))));
        tracep->fullBit(oldp+31934,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 6U))));
        tracep->fullBit(oldp+31935,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+31936,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 6U))));
        tracep->fullBit(oldp+31937,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+31938,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+31939,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+31940,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+31941,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 7U))));
        tracep->fullBit(oldp+31942,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 7U))));
        tracep->fullBit(oldp+31943,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 7U))));
        tracep->fullBit(oldp+31944,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+31945,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 7U))));
        tracep->fullBit(oldp+31946,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+31947,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+31948,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+31949,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+31950,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 8U))));
        tracep->fullBit(oldp+31951,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 8U))));
        tracep->fullBit(oldp+31952,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 8U))));
        tracep->fullBit(oldp+31953,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+31954,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 8U))));
        tracep->fullBit(oldp+31955,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+31956,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+31957,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+31958,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+31959,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 9U))));
        tracep->fullBit(oldp+31960,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 9U))));
        tracep->fullBit(oldp+31961,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 9U))));
        tracep->fullBit(oldp+31962,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+31963,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 9U))));
        tracep->fullBit(oldp+31964,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+31965,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+31966,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+31967,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+31968,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+31969,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+31970,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+31971,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+31972,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+31973,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+31974,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+31975,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+31976,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+31977,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+31978,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+31979,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+31980,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+31981,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+31982,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+31983,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+31984,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+31985,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+31986,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+31987,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+31988,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+31989,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+31990,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+31991,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+31992,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+31993,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+31994,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+31995,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+31996,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+31997,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+31998,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+31999,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32000,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32001,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32002,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32003,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32004,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32005,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32006,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32007,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32008,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32009,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32010,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32011,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32012,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32013,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32014,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32015,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32016,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32017,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32018,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32019,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32020,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32021,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32022,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32023,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32024,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32025,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32026,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32027,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32028,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32029,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32030,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32031,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32032,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32033,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32034,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32035,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32036,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32037,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32038,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32039,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32040,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32041,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32042,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32043,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32044,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32045,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32046,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32047,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32048,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32049,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32050,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32051,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32052,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32053,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32054,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32055,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32056,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32057,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32058,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32059,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32060,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32061,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32062,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32063,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32064,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32065,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32066,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32067,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32068,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32069,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32070,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32071,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32072,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32073,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32074,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32075,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32076,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32077,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32078,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32079,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32080,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32081,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32082,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32083,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32084,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32085,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32086,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32087,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32088,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32089,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32090,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32091,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32092,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32093,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32094,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32095,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32096,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32097,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32098,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32099,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32100,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32101,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32102,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32103,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32104,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32105,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32106,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32107,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32108,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32109,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32110,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32111,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32112,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32113,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32114,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32115,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32116,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32117,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32118,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32119,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32120,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32121,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32122,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32123,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32124,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32125,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32126,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32127,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32128,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32129,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32130,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32131,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32132,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32133,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32134,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32135,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32136,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32137,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32138,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32139,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32140,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32141,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32142,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32143,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32144,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32145,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32146,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32147,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32148,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32149,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][1U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32150,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32151,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32152,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][1U])) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32153,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32154,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32155,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32156,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][1U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32157,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x19U][1U] >> 0x1fU)));
        tracep->fullBit(oldp+32158,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1aU][1U] >> 0x1fU)));
        tracep->fullBit(oldp+32159,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1bU][1U] >> 0x1fU)));
        tracep->fullBit(oldp+32160,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x19U][1U] 
                                       ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1aU][1U]) 
                                      ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1bU][1U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32161,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1aU][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1bU][1U]) 
                                       | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][1U])) 
                                      | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x19U][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1aU][1U])) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32162,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x19U][1U] ^ 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1aU][1U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32163,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1aU][1U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1bU][1U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32164,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x19U][1U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1bU][1U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32165,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x19U][1U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1aU][1U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32166,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x19U][2U])));
        tracep->fullBit(oldp+32167,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1aU][2U])));
        tracep->fullBit(oldp+32168,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1bU][2U])));
        tracep->fullBit(oldp+32169,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U]))));
        tracep->fullBit(oldp+32170,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][2U]) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][2U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U])))));
        tracep->fullBit(oldp+32171,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U]))));
        tracep->fullBit(oldp+32172,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U]))));
        tracep->fullBit(oldp+32173,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U]))));
        tracep->fullBit(oldp+32174,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U]))));
        tracep->fullBit(oldp+32175,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 1U))));
        tracep->fullBit(oldp+32176,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 1U))));
        tracep->fullBit(oldp+32177,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 1U))));
        tracep->fullBit(oldp+32178,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+32179,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 1U))));
        tracep->fullBit(oldp+32180,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+32181,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+32182,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+32183,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+32184,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 2U))));
        tracep->fullBit(oldp+32185,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 2U))));
        tracep->fullBit(oldp+32186,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 2U))));
        tracep->fullBit(oldp+32187,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+32188,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 2U))));
        tracep->fullBit(oldp+32189,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+32190,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+32191,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+32192,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+32193,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 3U))));
        tracep->fullBit(oldp+32194,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 3U))));
        tracep->fullBit(oldp+32195,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 3U))));
        tracep->fullBit(oldp+32196,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+32197,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 3U))));
        tracep->fullBit(oldp+32198,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+32199,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+32200,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+32201,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+32202,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 4U))));
        tracep->fullBit(oldp+32203,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 4U))));
        tracep->fullBit(oldp+32204,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 4U))));
        tracep->fullBit(oldp+32205,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+32206,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 4U))));
        tracep->fullBit(oldp+32207,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+32208,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+32209,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+32210,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+32211,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 5U))));
        tracep->fullBit(oldp+32212,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 5U))));
        tracep->fullBit(oldp+32213,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 5U))));
        tracep->fullBit(oldp+32214,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+32215,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 5U))));
        tracep->fullBit(oldp+32216,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+32217,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+32218,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+32219,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+32220,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 6U))));
        tracep->fullBit(oldp+32221,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 6U))));
        tracep->fullBit(oldp+32222,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 6U))));
        tracep->fullBit(oldp+32223,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+32224,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 6U))));
        tracep->fullBit(oldp+32225,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+32226,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+32227,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+32228,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+32229,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 7U))));
        tracep->fullBit(oldp+32230,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 7U))));
        tracep->fullBit(oldp+32231,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 7U))));
        tracep->fullBit(oldp+32232,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+32233,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 7U))));
        tracep->fullBit(oldp+32234,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+32235,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+32236,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+32237,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+32238,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 8U))));
        tracep->fullBit(oldp+32239,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 8U))));
        tracep->fullBit(oldp+32240,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 8U))));
        tracep->fullBit(oldp+32241,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+32242,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 8U))));
        tracep->fullBit(oldp+32243,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+32244,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+32245,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+32246,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+32247,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 9U))));
        tracep->fullBit(oldp+32248,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 9U))));
        tracep->fullBit(oldp+32249,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 9U))));
        tracep->fullBit(oldp+32250,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+32251,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 9U))));
        tracep->fullBit(oldp+32252,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+32253,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+32254,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+32255,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+32256,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32257,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32258,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32259,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32260,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32261,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32262,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32263,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32264,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32265,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32266,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32267,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32268,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32269,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32270,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32271,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32272,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32273,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32274,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32275,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32276,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32277,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32278,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32279,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32280,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32281,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32282,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32283,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32284,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32285,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32286,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32287,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32288,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32289,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32290,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32291,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32292,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32293,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32294,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32295,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32296,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32297,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32298,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32299,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32300,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32301,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32302,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32303,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32304,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32305,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32306,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32307,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32308,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32309,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32310,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32311,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32312,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32313,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32314,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32315,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32316,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32317,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32318,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32319,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32320,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32321,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32322,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32323,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32324,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32325,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32326,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32327,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32328,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32329,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32330,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32331,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32332,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32333,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32334,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32335,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32336,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32337,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32338,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32339,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32340,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32341,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32342,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32343,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32344,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32345,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32346,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32347,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32348,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32349,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32350,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32351,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32352,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32353,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32354,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32355,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32356,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32357,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32358,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32359,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32360,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32361,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32362,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32363,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32364,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32365,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32366,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32367,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32368,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32369,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32370,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32371,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32372,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32373,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32374,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32375,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32376,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32377,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32378,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32379,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32380,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32381,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32382,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32383,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32384,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32385,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32386,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32387,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32388,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32389,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32390,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32391,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32392,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32393,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32394,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32395,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32396,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32397,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32398,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32399,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32400,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32401,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32402,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32403,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32404,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32405,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32406,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32407,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32408,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32409,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32410,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32411,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32412,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32413,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32414,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32415,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32416,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32417,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32418,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32419,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32420,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32421,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32422,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32423,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32424,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32425,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32426,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32427,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32428,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32429,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32430,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32431,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32432,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32433,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32434,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32435,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32436,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32437,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][2U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32438,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32439,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][2U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32440,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][2U])) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32441,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32442,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32443,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32444,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][2U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32445,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x19U][2U] >> 0x1fU)));
        tracep->fullBit(oldp+32446,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1aU][2U] >> 0x1fU)));
        tracep->fullBit(oldp+32447,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1bU][2U] >> 0x1fU)));
        tracep->fullBit(oldp+32448,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x19U][2U] 
                                       ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1aU][2U]) 
                                      ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1bU][2U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32449,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1aU][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1bU][2U]) 
                                       | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][2U])) 
                                      | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x19U][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1aU][2U])) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32450,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x19U][2U] ^ 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1aU][2U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32451,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1aU][2U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1bU][2U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32452,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x19U][2U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1bU][2U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32453,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x19U][2U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1aU][2U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32454,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x19U][3U])));
        tracep->fullBit(oldp+32455,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1aU][3U])));
        tracep->fullBit(oldp+32456,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1bU][3U])));
        tracep->fullBit(oldp+32457,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U]))));
        tracep->fullBit(oldp+32458,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][3U]) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][3U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U])))));
        tracep->fullBit(oldp+32459,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U]))));
        tracep->fullBit(oldp+32460,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U]))));
        tracep->fullBit(oldp+32461,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U]))));
        tracep->fullBit(oldp+32462,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U]))));
        tracep->fullBit(oldp+32463,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 1U))));
        tracep->fullBit(oldp+32464,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 1U))));
        tracep->fullBit(oldp+32465,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 1U))));
        tracep->fullBit(oldp+32466,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+32467,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 1U))));
        tracep->fullBit(oldp+32468,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+32469,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+32470,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+32471,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+32472,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 2U))));
        tracep->fullBit(oldp+32473,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 2U))));
        tracep->fullBit(oldp+32474,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 2U))));
        tracep->fullBit(oldp+32475,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+32476,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 2U))));
        tracep->fullBit(oldp+32477,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+32478,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+32479,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+32480,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+32481,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 3U))));
        tracep->fullBit(oldp+32482,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 3U))));
        tracep->fullBit(oldp+32483,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 3U))));
        tracep->fullBit(oldp+32484,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+32485,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 3U))));
        tracep->fullBit(oldp+32486,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+32487,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+32488,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+32489,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+32490,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 4U))));
        tracep->fullBit(oldp+32491,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 4U))));
        tracep->fullBit(oldp+32492,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 4U))));
        tracep->fullBit(oldp+32493,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+32494,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 4U))));
        tracep->fullBit(oldp+32495,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+32496,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+32497,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+32498,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+32499,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 5U))));
        tracep->fullBit(oldp+32500,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 5U))));
        tracep->fullBit(oldp+32501,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 5U))));
        tracep->fullBit(oldp+32502,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+32503,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 5U))));
        tracep->fullBit(oldp+32504,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+32505,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+32506,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+32507,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+32508,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 6U))));
        tracep->fullBit(oldp+32509,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 6U))));
        tracep->fullBit(oldp+32510,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 6U))));
        tracep->fullBit(oldp+32511,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+32512,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 6U))));
        tracep->fullBit(oldp+32513,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+32514,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+32515,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+32516,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+32517,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 7U))));
        tracep->fullBit(oldp+32518,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 7U))));
        tracep->fullBit(oldp+32519,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 7U))));
        tracep->fullBit(oldp+32520,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+32521,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 7U))));
        tracep->fullBit(oldp+32522,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+32523,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+32524,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+32525,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+32526,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 8U))));
        tracep->fullBit(oldp+32527,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 8U))));
        tracep->fullBit(oldp+32528,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 8U))));
        tracep->fullBit(oldp+32529,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+32530,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 8U))));
        tracep->fullBit(oldp+32531,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+32532,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+32533,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+32534,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+32535,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 9U))));
        tracep->fullBit(oldp+32536,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 9U))));
        tracep->fullBit(oldp+32537,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 9U))));
        tracep->fullBit(oldp+32538,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+32539,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 9U))));
        tracep->fullBit(oldp+32540,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+32541,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+32542,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+32543,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+32544,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32545,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32546,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32547,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32548,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32549,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32550,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32551,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32552,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32553,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32554,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32555,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32556,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32557,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32558,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32559,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32560,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32561,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32562,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32563,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32564,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32565,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32566,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32567,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32568,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32569,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32570,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32571,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32572,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32573,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32574,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32575,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32576,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32577,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32578,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32579,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32580,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32581,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32582,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32583,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32584,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32585,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32586,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32587,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32588,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32589,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32590,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32591,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32592,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32593,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32594,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32595,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32596,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32597,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32598,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32599,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32600,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32601,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32602,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32603,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32604,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32605,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32606,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32607,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32608,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32609,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32610,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32611,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32612,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32613,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32614,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32615,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32616,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32617,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32618,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32619,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32620,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32621,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32622,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32623,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32624,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32625,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32626,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32627,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32628,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32629,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32630,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32631,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32632,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32633,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32634,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32635,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32636,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32637,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32638,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32639,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32640,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32641,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32642,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32643,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32644,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32645,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32646,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32647,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32648,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32649,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32650,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32651,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32652,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32653,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32654,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32655,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32656,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32657,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32658,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32659,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32660,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32661,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32662,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32663,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32664,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32665,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32666,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32667,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32668,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32669,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32670,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32671,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32672,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32673,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32674,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32675,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32676,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32677,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32678,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32679,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32680,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32681,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32682,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32683,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32684,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32685,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32686,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32687,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32688,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32689,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32690,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32691,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32692,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32693,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32694,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32695,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32696,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32697,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32698,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32699,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32700,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32701,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32702,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32703,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32704,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32705,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32706,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32707,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32708,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32709,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32710,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32711,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32712,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32713,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32714,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32715,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32716,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32717,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32718,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32719,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32720,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32721,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32722,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32723,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32724,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32725,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1aU][3U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32726,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32727,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1aU][3U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32728,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1aU][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32729,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32730,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32731,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32732,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1aU][3U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32733,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x19U][3U] >> 0x1fU)));
        tracep->fullBit(oldp+32734,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1aU][3U] >> 0x1fU)));
        tracep->fullBit(oldp+32735,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1bU][3U] >> 0x1fU)));
        tracep->fullBit(oldp+32736,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x19U][3U] 
                                       ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1aU][3U]) 
                                      ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1bU][3U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32737,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1aU][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1bU][3U]) 
                                       | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][3U])) 
                                      | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x19U][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1aU][3U])) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32738,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x19U][3U] ^ 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1aU][3U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32739,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1aU][3U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1bU][3U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32740,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x19U][3U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1bU][3U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32741,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x19U][3U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1aU][3U]) 
                                     >> 0x1fU)));
        __Vtemp145888[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [0x1cU][0U];
        __Vtemp145888[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [0x1cU][1U];
        __Vtemp145888[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [0x1cU][2U];
        __Vtemp145888[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [0x1cU][3U];
        __Vtemp145888[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
            [0x1cU][4U];
        tracep->fullWData(oldp+32742,(__Vtemp145888),129);
        tracep->fullBit(oldp+32747,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][4U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1cU][4U]) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][4U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1cU][4U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [0U][4U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][4U])))));
        tracep->fullBit(oldp+32748,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1cU][4U])));
        tracep->fullBit(oldp+32749,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][4U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][4U]) 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][4U]))));
        tracep->fullBit(oldp+32750,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                           [1U][4U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][4U]))));
        tracep->fullBit(oldp+32751,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                           [0U][4U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][4U]))));
        tracep->fullBit(oldp+32752,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1cU][0U])));
        tracep->fullBit(oldp+32753,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U]) 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U]))));
        tracep->fullBit(oldp+32754,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1cU][0U]) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1cU][0U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [0U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U])))));
        tracep->fullBit(oldp+32755,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                           [1U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U]))));
        tracep->fullBit(oldp+32756,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                           [0U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U]))));
        tracep->fullBit(oldp+32757,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 1U))));
        tracep->fullBit(oldp+32758,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+32759,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 1U))));
        tracep->fullBit(oldp+32760,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+32761,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+32762,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 2U))));
        tracep->fullBit(oldp+32763,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+32764,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 2U))));
        tracep->fullBit(oldp+32765,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+32766,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+32767,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 3U))));
        tracep->fullBit(oldp+32768,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+32769,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 3U))));
        tracep->fullBit(oldp+32770,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+32771,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+32772,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 4U))));
        tracep->fullBit(oldp+32773,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+32774,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 4U))));
        tracep->fullBit(oldp+32775,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+32776,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+32777,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 5U))));
        tracep->fullBit(oldp+32778,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+32779,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 5U))));
        tracep->fullBit(oldp+32780,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+32781,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+32782,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 6U))));
        tracep->fullBit(oldp+32783,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+32784,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 6U))));
        tracep->fullBit(oldp+32785,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+32786,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+32787,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 7U))));
        tracep->fullBit(oldp+32788,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+32789,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 7U))));
        tracep->fullBit(oldp+32790,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+32791,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+32792,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 8U))));
        tracep->fullBit(oldp+32793,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+32794,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 8U))));
        tracep->fullBit(oldp+32795,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+32796,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+32797,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 9U))));
        tracep->fullBit(oldp+32798,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+32799,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 9U))));
        tracep->fullBit(oldp+32800,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+32801,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+32802,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32803,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32804,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32805,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32806,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32807,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32808,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32809,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32810,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32811,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32812,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32813,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32814,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32815,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32816,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32817,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32818,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32819,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32820,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32821,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32822,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32823,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32824,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32825,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32826,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32827,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32828,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32829,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32830,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32831,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32832,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32833,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32834,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32835,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32836,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32837,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32838,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32839,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32840,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32841,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32842,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32843,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32844,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32845,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32846,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+32847,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32848,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32849,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32850,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32851,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+32852,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32853,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32854,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32855,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32856,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+32857,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32858,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32859,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32860,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32861,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+32862,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32863,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32864,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32865,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32866,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+32867,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32868,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32869,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32870,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32871,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+32872,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32873,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32874,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32875,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32876,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+32877,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32878,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32879,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32880,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32881,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+32882,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32883,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32884,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32885,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32886,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+32887,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32888,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32889,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32890,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32891,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+32892,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32893,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32894,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32895,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32896,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+32897,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32898,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32899,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32900,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32901,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+32902,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][0U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32903,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][0U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][0U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32904,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][0U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][0U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][0U])) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32905,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32906,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][0U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+32907,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1cU][0U] >> 0x1fU)));
        tracep->fullBit(oldp+32908,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                       [0U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                       [1U][0U]) ^ 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1cU][0U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32909,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                        [1U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1cU][0U]) 
                                       | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                          [0U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1cU][0U])) 
                                      | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                         [0U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                         [1U][0U])) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32910,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                      [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1cU][0U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32911,(((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                      [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1cU][0U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+32912,((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1cU][1U])));
        tracep->fullBit(oldp+32913,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U]) 
                                           ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U]))));
        tracep->fullBit(oldp+32914,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1cU][1U]) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1cU][1U])) 
                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [0U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U])))));
        tracep->fullBit(oldp+32915,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                           [1U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U]))));
        tracep->fullBit(oldp+32916,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                           [0U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U]))));
        tracep->fullBit(oldp+32917,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 1U))));
        tracep->fullBit(oldp+32918,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+32919,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 1U))));
        tracep->fullBit(oldp+32920,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+32921,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 1U))));
        tracep->fullBit(oldp+32922,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 2U))));
        tracep->fullBit(oldp+32923,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+32924,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 2U))));
        tracep->fullBit(oldp+32925,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+32926,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 2U))));
        tracep->fullBit(oldp+32927,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 3U))));
        tracep->fullBit(oldp+32928,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+32929,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 3U))));
        tracep->fullBit(oldp+32930,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+32931,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 3U))));
        tracep->fullBit(oldp+32932,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 4U))));
        tracep->fullBit(oldp+32933,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+32934,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 4U))));
        tracep->fullBit(oldp+32935,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+32936,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 4U))));
        tracep->fullBit(oldp+32937,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 5U))));
        tracep->fullBit(oldp+32938,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+32939,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 5U))));
        tracep->fullBit(oldp+32940,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+32941,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 5U))));
        tracep->fullBit(oldp+32942,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 6U))));
        tracep->fullBit(oldp+32943,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+32944,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 6U))));
        tracep->fullBit(oldp+32945,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+32946,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 6U))));
        tracep->fullBit(oldp+32947,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 7U))));
        tracep->fullBit(oldp+32948,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+32949,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 7U))));
        tracep->fullBit(oldp+32950,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+32951,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 7U))));
        tracep->fullBit(oldp+32952,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 8U))));
        tracep->fullBit(oldp+32953,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+32954,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 8U))));
        tracep->fullBit(oldp+32955,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+32956,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 8U))));
        tracep->fullBit(oldp+32957,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 9U))));
        tracep->fullBit(oldp+32958,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+32959,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 9U))));
        tracep->fullBit(oldp+32960,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+32961,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 9U))));
        tracep->fullBit(oldp+32962,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32963,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32964,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32965,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32966,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+32967,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32968,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32969,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32970,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32971,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+32972,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32973,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32974,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32975,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32976,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xcU))));
        tracep->fullBit(oldp+32977,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32978,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32979,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32980,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32981,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+32982,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32983,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32984,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32985,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32986,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+32987,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32988,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32989,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32990,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32991,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0xfU))));
        tracep->fullBit(oldp+32992,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32993,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32994,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32995,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32996,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x10U))));
        tracep->fullBit(oldp+32997,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32998,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+32999,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+33000,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+33001,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x11U))));
        tracep->fullBit(oldp+33002,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+33003,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+33004,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+33005,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+33006,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x12U))));
        tracep->fullBit(oldp+33007,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+33008,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+33009,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+33010,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+33011,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x13U))));
        tracep->fullBit(oldp+33012,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+33013,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+33014,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+33015,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+33016,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x14U))));
        tracep->fullBit(oldp+33017,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+33018,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+33019,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+33020,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+33021,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x15U))));
        tracep->fullBit(oldp+33022,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+33023,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+33024,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+33025,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+33026,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x16U))));
        tracep->fullBit(oldp+33027,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+33028,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+33029,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+33030,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+33031,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x17U))));
        tracep->fullBit(oldp+33032,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+33033,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+33034,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+33035,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+33036,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x18U))));
        tracep->fullBit(oldp+33037,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+33038,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+33039,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+33040,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+33041,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x19U))));
        tracep->fullBit(oldp+33042,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+33043,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+33044,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+33045,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+33046,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+33047,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+33048,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+33049,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+33050,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+33051,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+33052,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+33053,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+33054,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+33055,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+33056,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+33057,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+33058,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+33059,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+33060,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+33061,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+33062,((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1cU][1U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+33063,((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [0U][1U] 
                                             ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                             [1U][1U]) 
                                            ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+33064,((1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                              [1U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1cU][1U]) 
                                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                                [0U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1cU][1U])) 
                                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [0U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                               [1U][1U])) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+33065,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+33066,((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                            [0U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1cU][1U]) 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+33067,((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                     [0x1cU][1U] >> 0x1fU)));
        tracep->fullBit(oldp+33068,((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                       [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                       [1U][1U]) ^ 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0x1cU][1U]) 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+33069,(((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                        [1U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1cU][1U]) 
                                       | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                          [0U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1cU][1U])) 
                                      | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                         [0U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                                         [1U][1U])) 
                                     >> 0x1fU)));
    }
}
