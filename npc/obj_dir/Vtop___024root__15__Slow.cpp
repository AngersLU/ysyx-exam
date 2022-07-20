// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024root___settle__TOP__16(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__16\n"); );
    // Body
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [0U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [1U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1cU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [0U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [1U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1cU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [0U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [1U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1cU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [0U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [1U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1cU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [0U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [1U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1cU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [0U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [1U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1cU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [0U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [1U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1cU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [0U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [1U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1cU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [0U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [1U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1cU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [0U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [1U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1cU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [0U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [1U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1cU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [0U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [1U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1cU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [0U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [1U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1cU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [0U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [1U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1cU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [0U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [1U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1cU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                     [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                        [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                         [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                          [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                           [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                            [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                             [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [0U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s
                              [1U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1cU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[1U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[1U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[1U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[1U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[1U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[4U] 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                  [0x1dU][4U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                  [0U][4U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                 [1U][4U]));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                    [1U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x1dU][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                  [0U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                     [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                    [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                    [1U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x1dU][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                  [0U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                     [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                    [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                    [1U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x1dU][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                  [0U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                     [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                    [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][0U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                     [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                    [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][0U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][0U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][0U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [1U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [1U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [1U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [1U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                 [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                 [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                 [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                 [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                 [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                 [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][0U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[0U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                    [1U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x1dU][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                  [0U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                     [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                    [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                    [1U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x1dU][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                  [0U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                     [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                    [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                    [1U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x1dU][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                  [0U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                     [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                    [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][1U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                     [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                    [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][1U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][1U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][1U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [1U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [1U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [1U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [1U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                 [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                 [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                 [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[1U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                 [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                 [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                 [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][1U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[1U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                    [1U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x1dU][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                  [0U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                     [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                    [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                    [1U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x1dU][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                  [0U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                     [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                    [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                    [1U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x1dU][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                  [0U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                     [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                    [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][2U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                     [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                    [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][2U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][2U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][2U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [1U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [1U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [1U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [1U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                 [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                 [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                 [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[2U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                 [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                 [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                 [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [0U][2U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[2U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                    [1U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x1dU][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                  [0U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                     [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                    [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                    [1U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x1dU][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                  [0U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                     [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                    [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                    [1U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x1dU][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                                  [0U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                     [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                    [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][3U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                     [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                    [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][3U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][3U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1dU][3U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                       [1U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                       [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x1dU][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                        [1U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                        [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [1U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [1U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                         [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [1U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [1U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1dU][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                          [1U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                          [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1dU][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                           [1U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                               [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1dU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                            [1U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                 [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                            [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                 [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                 [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[3U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1dU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                             [1U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                 [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[4U] 
        = ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
              [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
              [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1dU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                           [1U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x1dU][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                                         [0U][3U])) 
           >> 0x1fU);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s[3U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1dU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                              [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s
                             [1U][3U])));
}

void Vtop___024root____Vdpiimwrap_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__34(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__34\n"); );
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtop___024root___initial__TOP__34(vlSelf);
}

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) VL_ATTR_COLD;
void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) VL_ATTR_COLD;
void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) VL_ATTR_COLD;
void Vtop___024root___settle__TOP__4(Vtop___024root* vlSelf) VL_ATTR_COLD;
void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf) VL_ATTR_COLD;
void Vtop___024root___settle__TOP__6(Vtop___024root* vlSelf) VL_ATTR_COLD;
void Vtop___024root___settle__TOP__7(Vtop___024root* vlSelf) VL_ATTR_COLD;
void Vtop___024root___settle__TOP__8(Vtop___024root* vlSelf) VL_ATTR_COLD;
void Vtop___024root___settle__TOP__9(Vtop___024root* vlSelf) VL_ATTR_COLD;
void Vtop___024root___settle__TOP__10(Vtop___024root* vlSelf) VL_ATTR_COLD;
void Vtop___024root___settle__TOP__11(Vtop___024root* vlSelf) VL_ATTR_COLD;
void Vtop___024root___settle__TOP__12(Vtop___024root* vlSelf) VL_ATTR_COLD;
void Vtop___024root___settle__TOP__13(Vtop___024root* vlSelf) VL_ATTR_COLD;
void Vtop___024root___settle__TOP__14(Vtop___024root* vlSelf) VL_ATTR_COLD;
void Vtop___024root___settle__TOP__15(Vtop___024root* vlSelf) VL_ATTR_COLD;

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__2(vlSelf);
    Vtop___024root___settle__TOP__3(vlSelf);
    Vtop___024root___settle__TOP__4(vlSelf);
    Vtop___024root___settle__TOP__5(vlSelf);
    Vtop___024root___settle__TOP__6(vlSelf);
    Vtop___024root___settle__TOP__7(vlSelf);
    Vtop___024root___settle__TOP__8(vlSelf);
    Vtop___024root___settle__TOP__9(vlSelf);
    Vtop___024root___settle__TOP__10(vlSelf);
    Vtop___024root___settle__TOP__11(vlSelf);
    Vtop___024root___settle__TOP__12(vlSelf);
    Vtop___024root___settle__TOP__13(vlSelf);
    Vtop___024root___settle__TOP__14(vlSelf);
    Vtop___024root___settle__TOP__15(vlSelf);
    Vtop___024root___settle__TOP__16(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->isram_e = 0;
    vlSelf->isram_addr = 0;
    vlSelf->isram_rdata = 0;
    vlSelf->dsram_e = 0;
    vlSelf->dsram_we = 0;
    vlSelf->debug_wb_pc = 0;
    vlSelf->bubble = 0;
    vlSelf->top__DOT__dsram_rdata = 0;
    VL_ZERO_RESET_W(65, vlSelf->top__DOT__fslu__DOT__if_to_id_bus);
    VL_ZERO_RESET_W(291, vlSelf->top__DOT__fslu__DOT__id_to_ex_bus);
    VL_ZERO_RESET_W(65, vlSelf->top__DOT__fslu__DOT__br_bus);
    VL_ZERO_RESET_W(70, vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus);
    VL_ZERO_RESET_W(70, vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus);
    vlSelf->top__DOT__fslu__DOT__stall = 0;
    vlSelf->top__DOT__fslu__DOT__stallreq_for_bru = 0;
    vlSelf->top__DOT__fslu__DOT__ifu__DOT__pc_reg = 0;
    vlSelf->top__DOT__fslu__DOT__ifu__DOT__ce_reg = 0;
    vlSelf->top__DOT__fslu__DOT__ifu__DOT__next_pc = 0;
    VL_ZERO_RESET_W(65, vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__flag = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__buf_inst = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addi = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_add = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addiw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sub = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_subw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slti = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltiu = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slt = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltu = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slli = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srli = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srai = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slliw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srliw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraiw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sll = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srl = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sra = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sllw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srlw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xori = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ori = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_andi = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xor = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_or = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_and = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ecall = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ebreak = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sb = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_jalr = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_beq = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrs = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrc = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrwi = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrsi = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrci = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mul = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulh = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulhsu = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulhu = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_div = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divu = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divuw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remuw = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_rem = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remu = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__alu_op = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src1 = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 = 0;
    VL_ZERO_RESET_W(291, vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1 = 0;
    vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2 = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(291, vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__flag = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_S = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_J = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2 = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_result = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__ex_rd_last = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__stallreq_for_div = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1 = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2 = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_start = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_signed = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_res_sel = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1_i = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2_i = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_signed = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_addr = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2 = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_ueq_rs2 = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2 = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_rs1_forward = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_rs2_forward = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_forward_data = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__rs2_forward_data = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result = 0;
    VL_ZERO_RESET_W(65, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina);
    VL_ZERO_RESET_W(65, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb);
    VL_ZERO_RESET_W(65, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c);
    VL_ZERO_RESET_W(65, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__0__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__1__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__2__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__3__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__4__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__5__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__6__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__7__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__8__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__9__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__10__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__11__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__12__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__13__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__14__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__15__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__16__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__17__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__18__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__19__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__20__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__21__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__22__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__23__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__24__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__25__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__26__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__27__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__28__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__29__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__30__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__31__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__32__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__33__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__34__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__35__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__36__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__37__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__38__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__39__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__40__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__41__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__42__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__43__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__44__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__45__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__46__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__47__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__48__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__49__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__50__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__51__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__52__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__53__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__54__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__55__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__56__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__57__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__58__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__59__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__60__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__61__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__62__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__63__KET____DOT__bitx__c = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_src_temp = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_result_temp);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__one_ina = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__one_inb = 0;
    for (int __Vi0=0; __Vi0<33; ++__Vi0) {
        VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[__Vi0]);
    }
    VL_ZERO_RESET_W(65, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina);
    VL_ZERO_RESET_W(65, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb);
    for (int __Vi0=0; __Vi0<33; ++__Vi0) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        VL_ZERO_RESET_W(65, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<30; ++__Vi0) {
        VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[__Vi0]);
    }
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__s);
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[__Vi0]);
    }
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u11__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u11__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u12__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u12__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u13__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u13__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__s);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[__Vi0]);
    }
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__s);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[__Vi0]);
    }
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s[__Vi0]);
    }
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__s);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[__Vi0]);
    }
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__5__KET____DOT__ux__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__5__KET____DOT__ux__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__6__KET____DOT__ux__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__6__KET____DOT__ux__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__7__KET____DOT__ux__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__7__KET____DOT__ux__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__8__KET____DOT__ux__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__8__KET____DOT__ux__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__9__KET____DOT__ux__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__9__KET____DOT__ux__s);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__10__KET____DOT__ux__c);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__10__KET____DOT__ux__s);
    VL_ZERO_RESET_W(65, vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__cnt = 0;
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__divisor = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op1 = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op2 = 0;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp = 0;
    VL_ZERO_RESET_W(212, vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r);
    vlSelf->top__DOT__fslu__DOT__memu__DOT__flag = 0;
    vlSelf->top__DOT__fslu__DOT__memu__DOT__sel_rf_sel = 0;
    vlSelf->top__DOT__fslu__DOT__memu__DOT__b_data = 0;
    vlSelf->top__DOT__fslu__DOT__memu__DOT__h_data = 0;
    vlSelf->top__DOT__fslu__DOT__memu__DOT__w_data = 0;
    vlSelf->top__DOT__fslu__DOT__memu__DOT__rf_wdata = 0;
    VL_ZERO_RESET_W(134, vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r);
    vlSelf->__Vtask_top__DOT__mem_read__0__rdata = 0;
    VL_ZERO_RESET_W(65, vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c);
    for (int __Vi0=0; __Vi0<30; ++__Vi0) {
        VL_ZERO_RESET_W(129, vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[__Vi0]);
    }
    VL_ZERO_RESET_W(129, vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c);
    VL_ZERO_RESET_W(129, vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c);
    VL_ZERO_RESET_W(129, vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c);
    VL_ZERO_RESET_W(129, vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c);
    VL_ZERO_RESET_W(129, vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c);
    VL_ZERO_RESET_W(129, vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
