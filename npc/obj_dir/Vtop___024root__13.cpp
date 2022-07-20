// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

extern const VlWide<10>/*319:0*/ Vtop__ConstPool__CONST_6a3c0088_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__31(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__31\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp71636;
    VlWide<5>/*159:0*/ __Vtemp71638;
    VlWide<4>/*127:0*/ __Vtemp71644;
    // Body
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                 [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                 [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][1U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [3U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [2U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [3U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [2U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [3U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [2U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [2U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                 [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                 [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][2U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [3U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [2U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [3U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [2U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [3U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [2U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [2U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[4U] 
        = ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
              [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
              [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [2U][3U])) 
           >> 0x1fU);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[4U] 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                  [1U][4U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                  [2U][4U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                 [3U][4U]));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                     [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[4U] 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                  [0x15U][4U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                  [0x16U][4U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                 [0U][4U]));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                    [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                        [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][3U])));
    __Vtemp71636[2U] = ((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divw) 
                            | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divuw)) 
                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remw)) 
                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remuw)) 
                         << 0x1fU) | (((((((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addiw) 
                                               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                                              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
                                             | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                                            | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
                                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
                                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                                         | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                                        | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraw)) 
                                       << 0x1eU) | 
                                      ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sb) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw) 
                                                                    << 0x14U) 
                                                                   | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd) 
                                                                      << 0x13U))))))))))) 
                                       | ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mul) 
                                            << 0x12U) 
                                           | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulh) 
                                               << 0x11U) 
                                              | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulhsu) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulhu) 
                                                     << 0xfU) 
                                                    | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulw) 
                                                       << 0xeU))))) 
                                          | ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_rem) 
                                               << 0xdU) 
                                              | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remu) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remw) 
                                                     << 0xbU) 
                                                    | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remuw) 
                                                       << 0xaU)))) 
                                             | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_div) 
                                                 << 9U) 
                                                | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divu) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divw) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divuw) 
                                                          << 6U) 
                                                         | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrw) 
                                                             << 5U) 
                                                            | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrs) 
                                                                << 4U) 
                                                               | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrc) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrwi) 
                                                                      << 2U) 
                                                                     | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrsi) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrci)))))))))))))));
    __Vtemp71638[0U] = ((vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                         << 0x1bU) | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__alu_op) 
                                       << 0xfU) | (
                                                   ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src1) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2) 
                                                       << 8U) 
                                                      | (((((((((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                                                    | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                                                                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                                                                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                                                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                                                                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                                               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                                                              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sb)) 
                                                             | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                                                            | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                                                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd)) 
                                                          << 7U) 
                                                         | ((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sb) 
                                                                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                                                               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                                                              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd)) 
                                                             << 6U) 
                                                            | ((0x20U 
                                                                & ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0x3fe0U 
                                                                                & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                                                                                | vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
                                                                                >> 0x12U)) 
                                                                                | (0x3fffe0U 
                                                                                & (vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                                                                                >> 0xaU))) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_jalr) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_beq) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addi) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slti) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltiu) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xori) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ori) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_andi) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slli) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srli) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srai) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_add) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sub) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sll) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slt) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltu) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xor) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srl) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sra) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_or) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_and) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srli) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srai) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addiw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slliw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srliw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraiw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_subw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sllw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srlw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrs) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrc) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrwi) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrsi) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrci) 
                                                                                << 5U)) 
                                                                               | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mul) 
                                                                                << 5U)) 
                                                                              | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulh) 
                                                                                << 5U)) 
                                                                             | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulhsu) 
                                                                                << 5U)) 
                                                                            | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulhu) 
                                                                               << 5U)) 
                                                                           | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_div) 
                                                                              << 5U)) 
                                                                          | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divu) 
                                                                             << 5U)) 
                                                                         | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_rem) 
                                                                            << 5U)) 
                                                                        | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remu) 
                                                                           << 5U)) 
                                                                       | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulw) 
                                                                          << 5U)) 
                                                                      | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divw) 
                                                                         << 5U)) 
                                                                     | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divuw) 
                                                                        << 5U)) 
                                                                    | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remw) 
                                                                       << 5U)) 
                                                                   | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remuw) 
                                                                      << 5U))) 
                                                               | (0x1fU 
                                                                  & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                                     >> 7U)))))))));
    __Vtemp71644[0U] = (IData)((((vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
                                  >> 5U) & ((0x1fU 
                                             & vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U]) 
                                            == (0x1fU 
                                                & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x14U))))
                                 ? (((QData)((IData)(
                                                     vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[0U])))
                                 : (((vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
                                      >> 5U) & ((0x1fU 
                                                 & vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U]) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                    >> 0x14U))))
                                     ? (((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[0U])))
                                     : (((vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                          >> 5U) & 
                                         ((0x1fU & 
                                           vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x14U))))
                                         ? (((QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                         : ((IData)(vlSelf->rst)
                                             ? 0ULL
                                             : ((0U 
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
                                                   : 0ULL))))))));
    __Vtemp71644[1U] = (IData)(((((vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
                                   >> 5U) & ((0x1fU 
                                              & vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U]) 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                    >> 0x14U))))
                                  ? (((QData)((IData)(
                                                      vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[0U])))
                                  : (((vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
                                       >> 5U) & ((0x1fU 
                                                  & vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U]) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x14U))))
                                      ? (((QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[0U])))
                                      : (((vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                           >> 5U) & 
                                          ((0x1fU & 
                                            vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]) 
                                           == (0x1fU 
                                               & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x14U))))
                                          ? (((QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                          : ((IData)(vlSelf->rst)
                                              ? 0ULL
                                              : ((0U 
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
                                                    : 0ULL))))))) 
                                >> 0x20U));
    __Vtemp71644[2U] = (IData)((((vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
                                  >> 5U) & ((0x1fU 
                                             & vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U]) 
                                            == (0x1fU 
                                                & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0xfU))))
                                 ? (((QData)((IData)(
                                                     vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[0U])))
                                 : (((vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
                                      >> 5U) & ((0x1fU 
                                                 & vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U]) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                    >> 0xfU))))
                                     ? (((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[0U])))
                                     : (((vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                          >> 5U) & 
                                         ((0x1fU & 
                                           vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0xfU))))
                                         ? (((QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                         : ((IData)(vlSelf->rst)
                                             ? 0ULL
                                             : ((0U 
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
                                                   : 0ULL))))))));
    __Vtemp71644[3U] = (IData)(((((vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
                                   >> 5U) & ((0x1fU 
                                              & vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U]) 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                    >> 0xfU))))
                                  ? (((QData)((IData)(
                                                      vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[0U])))
                                  : (((vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
                                       >> 5U) & ((0x1fU 
                                                  & vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U]) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0xfU))))
                                      ? (((QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[0U])))
                                      : (((vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                           >> 5U) & 
                                          ((0x1fU & 
                                            vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]) 
                                           == (0x1fU 
                                               & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0xfU))))
                                          ? (((QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                          : ((IData)(vlSelf->rst)
                                              ? 0ULL
                                              : ((0U 
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
                                                    : 0ULL))))))) 
                                >> 0x20U));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[0U] 
        = __Vtemp71644[0U];
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[1U] 
        = __Vtemp71644[1U];
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[2U] 
        = __Vtemp71644[2U];
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[3U] 
        = __Vtemp71644[3U];
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[4U] 
        = ((__Vtemp71638[0U] << 1U) | (((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                            | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                         | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                                        | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                       | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[5U] 
        = ((__Vtemp71638[0U] >> 0x1fU) | ((0xffffffeU 
                                           & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 4U)) 
                                          | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U])))) 
                                             << 0x1cU)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[6U] 
        = ((1U & ((IData)((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U])))) 
                  >> 4U)) | ((0xffffffeU & ((IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U])))) 
                                            >> 4U)) 
                             | ((IData)(((((QData)((IData)(
                                                           vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U]))) 
                                         >> 0x20U)) 
                                << 0x1cU)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[7U] 
        = ((1U & ((IData)(((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U]))) 
                           >> 0x20U)) >> 4U)) | ((0xffffffeU 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U]))) 
                                                              >> 0x20U)) 
                                                     >> 4U)) 
                                                 | (__Vtemp71636[2U] 
                                                    << 0x1cU)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[8U] 
        = ((1U & (__Vtemp71636[2U] >> 4U)) | (((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh) 
                                                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                                               << 0x1fU) 
                                              | (((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw) 
                                                    | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                                                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                                                  << 0x1eU) 
                                                 | ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd) 
                                                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulw) 
                                                        << 0x1cU) 
                                                       | (0xffffffeU 
                                                          & (__Vtemp71636[2U] 
                                                             >> 4U)))))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[9U] 
        = ((0xfffffffeU & (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ecall) 
                            << 2U) | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ebreak) 
                                      << 1U))) | (1U 
                                                  & ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                                       | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                                                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sb)) 
                                                     | (((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh) 
                                                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                                                         >> 1U) 
                                                        | (((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw) 
                                                              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                                                             | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                                                            >> 2U) 
                                                           | ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd) 
                                                                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                                               >> 3U) 
                                                              | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulw) 
                                                                 >> 4U)))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x19U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x19U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x19U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x19U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x19U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[2U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[2U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[2U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[2U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[2U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[1U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[1U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[1U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[1U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[1U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s[4U];
    if (vlSelf->top__DOT__fslu__DOT__idu__DOT__flag) {
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[0U] 
            = Vtop__ConstPool__CONST_6a3c0088_0[0U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[1U] 
            = Vtop__ConstPool__CONST_6a3c0088_0[1U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[2U] 
            = Vtop__ConstPool__CONST_6a3c0088_0[2U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[3U] 
            = Vtop__ConstPool__CONST_6a3c0088_0[3U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[4U] 
            = Vtop__ConstPool__CONST_6a3c0088_0[4U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[5U] 
            = Vtop__ConstPool__CONST_6a3c0088_0[5U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[6U] 
            = Vtop__ConstPool__CONST_6a3c0088_0[6U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[7U] 
            = Vtop__ConstPool__CONST_6a3c0088_0[7U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[8U] 
            = Vtop__ConstPool__CONST_6a3c0088_0[8U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[9U] 
            = Vtop__ConstPool__CONST_6a3c0088_0[9U];
    } else {
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[0U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[0U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[1U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[1U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[2U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[2U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[3U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[3U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[4U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[4U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[5U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[5U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[6U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[6U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[7U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[7U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[8U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[8U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[9U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[9U];
    }
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                    [1U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [4U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                  [0U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                    [1U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [4U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                  [0U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                    [1U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [4U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                  [0U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [1U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                         [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [1U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                         [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [1U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                         [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [1U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                         [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [4U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                        [1U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [4U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                        [1U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [4U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                        [1U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [4U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                        [1U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [1U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [1U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [1U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [1U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [4U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [1U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [4U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [1U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [4U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [1U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [4U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [1U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [4U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [1U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [4U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [1U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [4U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [1U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [4U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [1U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [1U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [1U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [1U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [1U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [4U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [1U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [4U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [1U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [4U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [1U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [4U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [1U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                 [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                 [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [0U][0U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                    [1U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [4U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                  [0U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                    [1U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [4U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                  [0U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                    [1U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [4U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                  [0U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [1U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                         [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [1U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                         [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [1U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                         [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [1U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                         [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [4U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                        [1U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [4U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                        [1U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [4U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                        [1U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [4U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                        [1U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [1U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [1U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [1U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [1U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [4U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [1U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [4U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [1U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [4U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [1U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [4U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [1U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [4U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [1U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [4U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [1U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [4U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [1U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [4U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [1U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [1U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [1U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [1U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [1U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [4U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [1U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [4U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [1U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [4U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [1U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [4U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [1U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                 [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                 [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [0U][1U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                    [1U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [4U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                  [0U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                    [1U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [4U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                  [0U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                    [1U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [4U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                  [0U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [1U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                         [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [1U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                         [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [1U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                         [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [1U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                         [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [4U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                        [1U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [4U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                        [1U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [4U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                        [1U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [4U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                        [1U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [1U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [1U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [1U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [1U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [4U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [1U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [4U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [1U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [4U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [1U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [4U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [1U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [4U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [1U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [4U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [1U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [4U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [1U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [4U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [1U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [1U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [1U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [1U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [1U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [4U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [1U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [4U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [1U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [4U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [1U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [4U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [1U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                 [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                 [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [0U][2U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                    [1U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [4U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                  [0U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                    [1U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [4U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                  [0U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                       [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                    [1U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [4U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                  [0U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [1U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                         [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [1U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                         [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [1U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                         [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                          [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [1U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                         [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [4U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                        [1U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [4U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                        [1U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [4U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                        [1U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [4U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                        [1U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [1U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [1U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [1U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [1U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [4U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [1U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [4U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [1U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [4U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [1U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [4U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [1U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [4U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [1U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [4U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [1U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [4U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [1U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [4U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [1U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [1U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [1U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [1U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [4U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [1U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [4U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [1U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [4U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [1U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [4U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [1U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [4U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [1U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[4U] 
        = ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
              [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
              [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [1U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [4U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                         [0U][3U])) 
           >> 0x1fU);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x18U][0U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                        [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x18U][0U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                        [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x18U][0U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                        [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [2U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x18U][0U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [2U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x18U][0U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [2U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x18U][0U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [2U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x18U][0U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [2U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x18U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [2U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x18U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [2U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x18U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [2U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x18U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [2U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x18U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [2U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x18U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [2U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x18U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [2U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x18U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [2U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x18U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [2U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x18U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [2U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x18U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [2U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x18U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                              [2U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x18U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                              [2U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x18U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                              [2U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x18U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                              [2U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x18U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                               [2U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x18U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                               [2U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x18U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                               [2U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x18U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                               [2U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x18U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                [2U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x18U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                [2U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x18U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                [2U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x18U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                [2U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x18U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x17U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x17U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x18U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x18U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                  [2U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x17U][0U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x18U][1U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                        [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x18U][1U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                        [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x18U][1U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                        [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [2U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x18U][1U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [2U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x18U][1U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [2U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x18U][1U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [2U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x18U][1U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [2U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x18U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [2U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x18U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [2U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x18U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [2U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x18U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [2U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x18U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [2U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x18U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [2U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x18U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [2U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x18U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [2U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x18U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [2U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x18U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [2U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x18U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [2U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x18U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                              [2U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x18U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                              [2U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x18U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                              [2U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x18U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                              [2U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x18U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                               [2U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x18U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                               [2U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x18U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                               [2U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x18U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                               [2U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x18U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                [2U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x18U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                [2U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x18U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                [2U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x18U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                [2U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                [0x18U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x17U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x17U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x18U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                 [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x18U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                                  [2U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x17U][1U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x18U][2U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                        [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x18U][2U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                        [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                       [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x18U][2U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                        [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [2U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x18U][2U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [2U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x18U][2U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [2U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x18U][2U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                          [2U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x18U][2U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                           [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [2U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x18U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [2U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x18U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [2U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x18U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                           [2U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x18U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                            [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [2U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x18U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [2U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x18U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [2U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x18U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                            [2U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x18U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                             [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [2U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x18U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [2U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x18U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [2U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x18U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                             [2U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x18U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                              [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                              [2U][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x18U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                              [2U][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x18U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                              [2U][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x18U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                              [2U][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0x18U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                               [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                               [2U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x18U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                               [2U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x18U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                               [2U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x18U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x17U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x18U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                               [2U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0x18U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s
                                [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x17U][2U])) << 1U)));
}
