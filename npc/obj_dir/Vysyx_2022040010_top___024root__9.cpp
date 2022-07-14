// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_2022040010_top.h for the primary calling header

#include "Vysyx_2022040010_top___024root.h"
#include "Vysyx_2022040010_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vysyx_2022040010_top___024root___combo__TOP__27(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___combo__TOP__27\n"); );
    // Body
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[2U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[2U]) 
           | (0x20000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x13U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x14U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x12U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x14U][2U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x12U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x13U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[2U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[2U]) 
           | (0x40000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x13U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x14U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x12U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x14U][2U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x12U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x13U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[2U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[2U]) 
           | (0x80000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x13U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x14U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x12U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x14U][2U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x12U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x13U][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x13U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x14U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x12U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x14U][2U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x12U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x13U][2U])) 
              >> 0x1fU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (2U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x12U][3U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x14U][3U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (4U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x12U][3U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x14U][3U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (8U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x12U][3U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x14U][3U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x10U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x12U][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x14U][3U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x20U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x12U][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x14U][3U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x40U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x12U][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x14U][3U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x80U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x12U][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x14U][3U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x100U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x12U][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x14U][3U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x200U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x12U][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x14U][3U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x400U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x12U][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x14U][3U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x800U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x12U][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x14U][3U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x1000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x12U][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x14U][3U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x2000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x12U][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x14U][3U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x4000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x12U][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x14U][3U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x8000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x12U][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x14U][3U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x10000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x12U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x14U][3U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x20000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x12U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x14U][3U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x40000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x12U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x14U][3U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x80000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x12U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x14U][3U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x100000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x12U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x14U][3U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x200000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x12U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x14U][3U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x400000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x12U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x14U][3U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x800000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x12U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x14U][3U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x1000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x12U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x14U][3U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x2000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x12U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x14U][3U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x4000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x12U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x14U][3U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x8000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x12U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x14U][3U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x10000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x12U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x14U][3U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x20000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x12U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x14U][3U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x40000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x12U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x14U][3U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U]) 
           | (0x80000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x12U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x14U][3U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x13U][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[4U] 
        = ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
              [0x13U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
              [0x14U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x14U][3U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x12U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x13U][3U])) 
           >> 0x1fU);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (2U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x19U][0U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1bU][0U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (4U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x19U][0U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1bU][0U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (8U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x19U][0U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1bU][0U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x10U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][0U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x20U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][0U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x40U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][0U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x80U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][0U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x100U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][0U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x200U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][0U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x400U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][0U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x800U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][0U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x1000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][0U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x2000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][0U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x4000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][0U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x8000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][0U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x10000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][0U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x20000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][0U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x40000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][0U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x80000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][0U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x100000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][0U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][0U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x200000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][0U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][0U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x400000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][0U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][0U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x800000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][0U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][0U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x1000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][0U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x2000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][0U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x4000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][0U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x8000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][0U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][0U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x10000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][0U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x20000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][0U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x40000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][0U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]) 
           | (0x80000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][0U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][0U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1aU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x1aU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x1bU][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1bU][0U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x19U][0U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x1aU][0U])) 
              >> 0x1fU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (2U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x19U][1U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1bU][1U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (4U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x19U][1U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1bU][1U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (8U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x19U][1U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1bU][1U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x10U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][1U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x20U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][1U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x40U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][1U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x80U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][1U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x100U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x200U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x400U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x800U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][1U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x1000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x2000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x4000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x8000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][1U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x10000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][1U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x20000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][1U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x40000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][1U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x80000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][1U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x100000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x200000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x400000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x800000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][1U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][1U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x1000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][1U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x2000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][1U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x4000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][1U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x8000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][1U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][1U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x10000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x20000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x40000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U]) 
           | (0x80000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][1U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][1U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1aU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x1aU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x1bU][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1bU][1U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x19U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x1aU][1U])) 
              >> 0x1fU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (2U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x19U][2U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1bU][2U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (4U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x19U][2U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1bU][2U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (8U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x19U][2U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1bU][2U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x10U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][2U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x20U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][2U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x40U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][2U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x80U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][2U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x100U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x200U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x400U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x800U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][2U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x1000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x2000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x4000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x8000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][2U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x10000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][2U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x20000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][2U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x40000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][2U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x80000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][2U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x100000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x200000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x400000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x800000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][2U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][2U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x1000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][2U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x2000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][2U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x4000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][2U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x8000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][2U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][2U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x10000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x20000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x40000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U]) 
           | (0x80000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][2U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][2U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1aU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x1aU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x1bU][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1bU][2U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x19U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x1aU][2U])) 
              >> 0x1fU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (2U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x19U][3U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1bU][3U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (4U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x19U][3U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1bU][3U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (8U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x19U][3U] 
                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x1bU][3U])) 
                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x10U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][3U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x20U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][3U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x40U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][3U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x80U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x19U][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x1bU][3U])) 
                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x100U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x200U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x400U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x800U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x19U][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x1bU][3U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x1000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x2000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x4000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x8000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x19U][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x1bU][3U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x10000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][3U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x20000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][3U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x40000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][3U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x80000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x19U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x1bU][3U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x100000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x200000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x400000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x800000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x19U][3U] 
                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x1bU][3U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x1000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][3U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x2000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][3U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x4000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][3U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x8000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1bU][3U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x10000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x20000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x40000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U]) 
           | (0x80000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x19U][3U] 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x1bU][3U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x1aU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[4U] 
        = ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
              [0x1aU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
              [0x1bU][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1bU][3U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x19U][3U] 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x1aU][3U])) 
           >> 0x1fU);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (2U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                       [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                    [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0U][0U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [9U][0U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [0xaU][0U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (4U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                       [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                    [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0U][0U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [9U][0U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [0xaU][0U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (8U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                       [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                    [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0U][0U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [9U][0U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [0xaU][0U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x10U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                          [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0U][0U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x20U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                          [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0U][0U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x40U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                          [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0U][0U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x80U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                          [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0U][0U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x100U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][0U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][0U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x200U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][0U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][0U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x400U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][0U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][0U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x800U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][0U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][0U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x1000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][0U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0U][0U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x2000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][0U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0U][0U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x4000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][0U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0U][0U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x8000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][0U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0U][0U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x10000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                          [9U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0U][0U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x20000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                          [9U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0U][0U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x40000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                          [9U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0U][0U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x80000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                          [9U][0U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0U][0U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x100000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x200000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x400000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x800000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][0U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][0U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x1000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x2000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x4000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x8000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][0U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x10000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][0U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x20000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][0U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x40000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][0U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]) 
           | (0x80000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][0U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][0U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [0xaU][0U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                 [0xaU][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0U][0U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][0U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][0U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][0U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][0U])) 
              >> 0x1fU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (2U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                       [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                    [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0U][1U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [9U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [0xaU][1U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (4U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                       [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                    [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0U][1U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [9U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [0xaU][1U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (8U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                       [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                    [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0U][1U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [9U][1U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [0xaU][1U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x10U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                          [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0U][1U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x20U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                          [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0U][1U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x40U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                          [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0U][1U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x80U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                          [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0U][1U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x100U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][1U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][1U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x200U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][1U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][1U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x400U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][1U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][1U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x800U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][1U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][1U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x1000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][1U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0U][1U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x2000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][1U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0U][1U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x4000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][1U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0U][1U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x8000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][1U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0U][1U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x10000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                          [9U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0U][1U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x20000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                          [9U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0U][1U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x40000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                          [9U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0U][1U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x80000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                          [9U][1U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0U][1U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x100000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x200000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x400000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x800000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][1U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][1U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x1000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x2000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x4000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x8000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][1U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x10000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][1U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x20000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][1U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x40000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][1U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U]) 
           | (0x80000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][1U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][1U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [0xaU][1U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                 [0xaU][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0U][1U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][1U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][1U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][1U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][1U])) 
              >> 0x1fU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (2U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                       [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                    [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0U][2U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [9U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [0xaU][2U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (4U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                       [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                    [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0U][2U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [9U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [0xaU][2U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (8U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                       [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                    [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0U][2U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [9U][2U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [0xaU][2U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x10U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                          [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0U][2U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x20U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                          [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0U][2U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x40U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                          [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0U][2U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x80U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                          [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0U][2U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x100U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][2U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][2U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x200U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][2U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][2U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x400U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][2U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][2U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x800U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][2U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][2U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x1000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][2U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0U][2U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x2000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][2U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0U][2U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x4000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][2U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0U][2U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x8000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][2U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0U][2U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x10000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                          [9U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0U][2U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x20000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                          [9U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0U][2U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x40000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                          [9U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0U][2U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x80000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                          [9U][2U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0U][2U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x100000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x200000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x400000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x800000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][2U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][2U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x1000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x2000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x4000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x8000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][2U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x10000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][2U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x20000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][2U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x40000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][2U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U]) 
           | (0x80000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][2U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][2U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [0xaU][2U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                 [0xaU][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0U][2U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][2U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][2U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][2U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [0xaU][2U])) 
              >> 0x1fU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (2U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                       [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                    [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0U][3U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [9U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [0xaU][3U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (4U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                       [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                    [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0U][3U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [9U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [0xaU][3U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (8U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                       [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                    [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0U][3U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [9U][3U] 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                                  [0xaU][3U])) 
                    << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x10U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                          [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0U][3U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x20U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                          [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0U][3U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x40U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                          [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0U][3U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x80U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                          [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                       [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0U][3U])) | 
                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                         [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x100U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][3U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][3U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x200U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][3U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][3U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x400U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][3U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][3U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x800U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                        [9U][3U] & 
                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0U][3U])) 
                         | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x1000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][3U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0U][3U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x2000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][3U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0U][3U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x4000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][3U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0U][3U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x8000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                            [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][3U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0U][3U])) 
                          | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x10000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                          [9U][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0U][3U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x20000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                          [9U][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0U][3U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x40000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                          [9U][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0U][3U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x80000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                             [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                          [9U][3U] 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0U][3U])) 
                           | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x100000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x200000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x400000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x800000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                              [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                           [9U][3U] 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0U][3U])) 
                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x1000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x2000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x4000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x8000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                               [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                            [9U][3U] 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0U][3U])) 
                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x10000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][3U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x20000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][3U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x40000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][3U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U]) 
           | (0x80000000U & ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                             [9U][3U] 
                                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0U][3U])) 
                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                 [0xaU][3U])) << 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[4U] 
        = ((((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
              [0xaU][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
              [0U][3U]) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                           [9U][3U] & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0U][3U])) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [9U][3U] & 
                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s
                                         [0xaU][3U])) 
           >> 0x1fU);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[4U] 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                  [0x19U][4U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                  [0x1aU][4U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x1bU][4U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (2U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (4U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (8U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x10U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x20U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x40U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x80U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x100U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x200U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x400U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x800U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x1000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x2000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x4000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x8000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x10000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x20000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x40000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x80000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x100000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x200000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x400000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x800000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x1000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x2000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x4000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x8000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x10000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x20000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x40000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U]) 
           | (0x80000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (2U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (4U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (8U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x10U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x20U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x40U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x80U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x100U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x200U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x400U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x800U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x1000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x2000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x4000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x8000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x10000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x20000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x40000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x80000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x100000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x200000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x400000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x800000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x1000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x2000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x4000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x8000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x10000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x20000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x40000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U]) 
           | (0x80000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (2U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (4U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (8U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x10U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x20U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x40U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x80U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x100U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x200U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x400U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x800U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x1000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x2000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x4000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x8000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x10000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x20000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x40000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x80000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x100000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x200000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x400000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x800000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x1000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x2000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x4000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x8000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x10000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x20000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x40000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U]) 
           | (0x80000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (2U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (4U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (8U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x10U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x20U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x40U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x80U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x100U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x200U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x400U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x800U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x1000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x2000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x4000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x8000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x10000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x20000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x40000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x80000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x100000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x200000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x400000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x800000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x1000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x2000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x4000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x8000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x10000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x20000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x40000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U]) 
           | (0x80000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x19U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x1aU][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x1bU][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[4U] 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                  [0x12U][4U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                  [0x13U][4U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x14U][4U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (2U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (4U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (8U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x10U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x20U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x40U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x80U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x100U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x200U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x400U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x800U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x1000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x2000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x4000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x8000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x10000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x20000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x40000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x80000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x100000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x200000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x400000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x800000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x1000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x2000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x4000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x8000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x10000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x20000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x40000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U]) 
           | (0x80000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (2U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (4U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (8U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x10U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x20U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x40U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x80U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x100U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x200U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x400U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x800U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x1000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x2000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x4000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x8000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x10000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x20000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x40000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x80000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x100000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x200000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x400000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x800000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x1000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x2000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x4000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x8000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x10000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x20000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x40000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U]) 
           | (0x80000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][1U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][1U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][1U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (2U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (4U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (8U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x10U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x20U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x40U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x80U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x100U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x200U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x400U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x800U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x1000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x2000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x4000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x8000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x10000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x20000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x40000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x80000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x100000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x200000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x400000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x800000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x1000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x2000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x4000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x8000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x10000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x20000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x40000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U]) 
           | (0x80000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][2U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][2U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][2U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (2U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (4U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (8U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x10U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x20U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x40U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x80U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x100U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x200U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x400U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x800U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x1000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x2000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x4000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x8000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x10000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x20000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x40000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x80000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x100000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x200000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x400000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x800000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x1000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x2000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x4000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x8000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x10000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x20000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x40000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U]) 
           | (0x80000000U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x12U][3U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x13U][3U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x14U][3U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s[4U] 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                  [0xcU][4U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                  [0xdU][4U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0xeU][4U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s[0U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s[0U]) 
           | (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xcU][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xdU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xeU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s[0U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s[0U]) 
           | (2U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xcU][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xdU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xeU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s[0U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s[0U]) 
           | (4U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xcU][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xdU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xeU][0U])));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s[0U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s[0U]) 
           | (8U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xcU][0U] ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xdU][0U]) ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xeU][0U])));
}
