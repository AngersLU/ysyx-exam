// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__18(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__18\n"); );
    // Body
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[2U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [2U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [1U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [1U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [2U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [1U][2U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [2U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [1U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [2U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [1U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [2U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [1U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [2U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [2U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [2U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [2U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [2U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [2U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [2U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [2U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [2U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [2U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [2U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [2U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [2U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [2U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [2U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [2U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [2U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [2U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [2U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[3U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [2U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [1U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[4U] 
        = ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
              [1U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
              [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [2U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [1U][3U])) 
           >> 0x1fU);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [3U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [5U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [4U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [3U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [5U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [4U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [3U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [5U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [4U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [3U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [3U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [3U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [3U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [5U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [3U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [5U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [3U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [5U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [3U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [5U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [3U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [3U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [3U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [3U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [3U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [5U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [3U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [5U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [3U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [5U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [3U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [5U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [3U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [5U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [3U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [5U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [3U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [5U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [3U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [5U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [3U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [3U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [3U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [3U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [3U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [5U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [3U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [5U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [3U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [5U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [3U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [5U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [3U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [4U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [4U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [4U][0U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [3U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [5U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [4U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [3U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [5U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [4U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [3U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [5U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [4U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [3U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [3U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [3U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [3U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [5U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [3U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [5U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [3U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [5U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [3U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [5U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [3U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [3U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [3U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [3U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [3U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [5U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [3U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [5U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [3U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [5U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [3U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [5U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [3U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [5U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [3U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [5U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [3U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [5U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [3U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [5U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [3U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [3U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [3U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [3U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [3U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [5U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [3U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [5U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [3U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [5U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [3U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[1U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [5U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [3U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [4U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [4U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [4U][1U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [3U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [5U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [4U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [3U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [5U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [4U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [3U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [5U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [4U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [3U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [3U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [3U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [3U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [5U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [3U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [5U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [3U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [5U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [3U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [5U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [3U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [3U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [3U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [3U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [3U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [5U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [3U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [5U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [3U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [5U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [3U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [5U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [3U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [5U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [3U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [5U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [3U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [5U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [3U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [5U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [3U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [3U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [3U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [3U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [3U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [5U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [3U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [5U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [3U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [5U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [3U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[2U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [5U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [3U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [4U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [4U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [3U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [4U][2U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [3U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [5U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [4U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [3U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [5U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [4U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [3U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [5U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [4U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [3U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [3U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [3U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [3U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [5U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [3U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [5U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [3U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [5U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [3U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [5U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [3U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [3U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [3U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [3U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [3U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [5U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [3U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [5U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [3U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [5U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [3U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [5U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [3U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [5U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [3U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [5U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [3U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [5U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [3U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [5U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [3U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [3U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [3U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [3U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [5U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [3U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [5U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [3U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [5U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [3U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [5U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [3U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[3U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [5U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [3U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [4U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[4U] 
        = ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
              [4U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
              [3U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [3U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [5U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [4U][3U])) 
           >> 0x1fU);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [6U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [8U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [7U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [6U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [8U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [7U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [6U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [8U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [7U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [6U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [6U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [6U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [6U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [8U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [6U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [8U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [6U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [8U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [6U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [8U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [6U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [6U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [6U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [6U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [6U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [8U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [6U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [8U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [6U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [8U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [6U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [8U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [6U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [8U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [6U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [8U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [6U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [8U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [6U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [8U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [6U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [6U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [6U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [6U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [6U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [8U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [6U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [8U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [6U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [8U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [6U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [8U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [6U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [7U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [7U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [6U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [7U][0U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [6U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [8U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [7U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [6U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [8U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [7U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [6U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [8U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [7U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [6U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [6U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [6U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [6U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [8U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [6U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [8U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [6U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [8U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [6U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [8U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [6U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [6U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [6U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [6U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [6U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [8U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [6U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [8U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [6U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [8U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [6U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [8U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [6U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [8U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [6U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [8U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [6U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [8U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [6U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [8U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [6U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [6U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [6U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [6U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [6U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [8U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [6U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [8U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [6U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [8U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [6U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[1U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [8U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [6U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [7U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [7U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [6U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [7U][1U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [6U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [8U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [7U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [6U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [8U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [7U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [6U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [8U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [7U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [6U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [6U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [6U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [6U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [8U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [6U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [8U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [6U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [8U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [6U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [8U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [6U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [6U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [6U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [6U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [6U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [8U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [6U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [8U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [6U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [8U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [6U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [8U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [6U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [8U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [6U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [8U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [6U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [8U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [6U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [8U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [6U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [6U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [6U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [6U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [6U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [8U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [6U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [8U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [6U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [8U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [6U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[2U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [8U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [6U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [7U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [7U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [6U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [7U][2U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [6U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [8U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [7U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [6U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [8U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [7U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [6U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [8U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [7U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [6U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [6U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [6U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [6U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [8U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [6U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [8U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [6U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [8U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [6U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [8U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [6U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [6U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [6U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [6U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [6U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [8U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [6U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [8U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [6U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [8U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [6U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [8U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [6U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [8U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [6U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [8U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [6U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [8U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [6U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [8U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [6U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [6U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [6U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [6U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [8U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [6U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [8U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [6U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [8U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [6U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [8U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [6U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[3U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [8U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [6U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [7U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[4U] 
        = ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
              [7U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
              [6U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [8U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [6U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [8U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [7U][3U])) 
           >> 0x1fU);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [9U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xbU][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xaU][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [9U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xbU][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xaU][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [9U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xbU][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xaU][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0xbU][0U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [9U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0xbU][0U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [9U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0xbU][0U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [9U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0xbU][0U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [9U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0xbU][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [9U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0xbU][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [9U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0xbU][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [9U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0xbU][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [9U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [9U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [9U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [9U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [9U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xbU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [9U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xbU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [9U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xbU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [9U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xbU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [9U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xbU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [9U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xbU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [9U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xbU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [9U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xbU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [9U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [9U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [9U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [9U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [9U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0xbU][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [9U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0xbU][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [9U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0xbU][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [9U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0xbU][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [9U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xaU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [9U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xaU][0U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [9U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xbU][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xaU][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [9U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xbU][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xaU][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [9U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xbU][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xaU][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0xbU][1U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [9U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0xbU][1U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [9U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0xbU][1U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [9U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0xbU][1U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [9U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0xbU][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [9U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0xbU][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [9U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0xbU][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [9U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0xbU][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [9U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [9U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [9U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [9U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [9U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xbU][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [9U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xbU][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [9U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xbU][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [9U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xbU][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [9U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xbU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [9U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xbU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [9U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xbU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [9U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xbU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [9U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [9U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [9U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [9U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [9U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0xbU][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [9U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0xbU][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [9U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0xbU][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [9U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[1U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0xbU][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [9U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xaU][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [9U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xaU][1U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [9U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xbU][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xaU][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [9U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xbU][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xaU][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [9U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xbU][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xaU][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0xbU][2U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [9U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0xbU][2U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [9U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0xbU][2U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [9U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0xbU][2U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [9U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0xbU][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [9U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0xbU][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [9U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0xbU][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [9U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0xbU][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [9U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [9U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [9U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [9U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [9U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xbU][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [9U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xbU][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [9U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xbU][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [9U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xbU][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [9U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xbU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [9U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xbU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [9U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xbU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [9U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xbU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [9U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [9U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [9U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [9U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [9U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0xbU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [9U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0xbU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [9U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0xbU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [9U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[2U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0xbU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [9U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xaU][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                 [9U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xaU][2U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [9U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xbU][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xaU][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [9U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xbU][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xaU][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                    [9U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xbU][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                                  [0xaU][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0xbU][3U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [9U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0xbU][3U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [9U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0xbU][3U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [9U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0xbU][3U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [9U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                         [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0xbU][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [9U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0xbU][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [9U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0xbU][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [9U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [0xbU][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                        [9U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [9U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [9U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [9U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [9U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xbU][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [9U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xbU][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [9U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xbU][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [9U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xbU][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [9U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xbU][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [9U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xbU][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [9U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xbU][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [9U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xbU][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [9U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [9U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [9U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [9U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xbU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [9U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0xbU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [9U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0xbU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [9U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0xbU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [9U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[3U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0xbU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [9U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                 [0xaU][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[4U] 
        = ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
              [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
              [9U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xbU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [9U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xbU][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xaU][3U])) 
           >> 0x1fU);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                      [0xeU][0U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                      [0xcU][0U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0xdU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                      [0xeU][0U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                      [0xcU][0U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0xdU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                      [0xeU][0U] & 
                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                      [0xcU][0U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0xdU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xeU][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xcU][0U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xdU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xeU][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xcU][0U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xdU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xeU][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xcU][0U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xdU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xeU][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                         [0xcU][0U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xdU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xeU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xcU][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xdU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xeU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xcU][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xdU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xeU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xcU][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xdU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xeU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0xcU][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xdU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xeU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xcU][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xdU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xeU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xcU][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xdU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xeU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xcU][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xdU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xeU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0xcU][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xdU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xeU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xcU][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xdU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xdU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0xcU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xeU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0xcU][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xeU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0xdU][0U])) << 1U)));
}
