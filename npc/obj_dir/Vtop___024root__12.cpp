// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024root____Vdpiimwrap_top__DOT__mem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vtop___024root____Vdpiimwrap_top__DOT__mem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___combo__TOP__30(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__30\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp69310;
    VlWide<3>/*95:0*/ __Vtemp69311;
    VlWide<3>/*95:0*/ __Vtemp69313;
    VlWide<3>/*95:0*/ __Vtemp69317;
    VlWide<3>/*95:0*/ __Vtemp69319;
    VlWide<3>/*95:0*/ __Vtemp69321;
    // Body
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [2U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [4U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [2U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [4U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[4U] 
        = ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
              [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
              [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [3U][3U])) 
           >> 0x1fU);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[4U] 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                  [2U][4U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                  [3U][4U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [4U][4U]));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[4U] 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                  [0xaU][4U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                  [0U][4U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [1U][4U]));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                     [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                    [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[4U] 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                  [5U][4U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                  [6U][4U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0xbU][4U]));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][0U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][0U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][1U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][1U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][2U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][2U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][2U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (2U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (8U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                     [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                    [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x10U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x20U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x40U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x80U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x100U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x200U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x400U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x800U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                        [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x1000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x2000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x4000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x8000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x10000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x20000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x40000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x80000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x100000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x200000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x400000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x800000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x1000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x2000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x4000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x8000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x10000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x20000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x40000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U]) 
           | (0x80000000U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][3U] ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][3U]) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][3U])));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_jalr 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 7U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_beq 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 3U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mul 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                    >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulh 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulhsu 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 2U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulhu 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 3U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                    >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_div 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 4U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divu 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 4U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divuw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_rem 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 6U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remu 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 7U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 6U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remuw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 7U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src1 
        = ((1U & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src1)) 
           | ((4U & (vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                     >> 0x15U)) | (2U & (vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                                         >> 0x16U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 
        = ((0xbU & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2)) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                     | vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
                    >> 0x15U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrw 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrs 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 2U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrc 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 3U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrwi 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 5U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrsi 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 6U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrci 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 7U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ecall 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                   >> 0x13U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & (~ (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                       >> 0x14U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ebreak 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                   >> 0x13U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                    >> 0x14U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sb 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                  >> 3U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 2U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 3U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slli 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & (~ (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x1eU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srli 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (~ (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x1eU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srai 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x1eU)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slliw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & (~ (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x1eU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srliw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (~ (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x1eU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraiw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x1eU)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addi 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addiw 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x1bU) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slti 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 2U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltiu 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 3U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xori 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 4U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ori 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 6U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_andi 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 7U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 2U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 6U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 4U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 5U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 3U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_add 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sub 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_subw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sll 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sllw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slt 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 2U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltu 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 3U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srl 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srlw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sra 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xor 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 4U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_or 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 6U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_and 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 7U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    __Vtemp69310[1U] = (((IData)(((- (QData)((IData)(
                                                     (1U 
                                                      & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                           >> 0x14U) 
                                                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                             >> 0x13U)) 
                                                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                            >> 0x12U)))))) 
                                  & ((0x100000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                      ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res
                                      : ((0x80000U 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                          ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res
                                          : ((0x40000U 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3fU)))))) 
                                                  & (~ 
                                                     VL_SHIFTR_QQQ(64,64,64, 0xffffffffffffULL, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                                 | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res)
                                              : 0ULL))))) 
                         >> 0x1fU) | ((IData)((((- (QData)((IData)(
                                                                   (1U 
                                                                    & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                         >> 0x14U) 
                                                                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                           >> 0x13U)) 
                                                                       | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                          >> 0x12U)))))) 
                                                & ((0x100000U 
                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                    ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res
                                                    : 
                                                   ((0x80000U 
                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                     ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res
                                                     : 
                                                    ((0x40000U 
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
                                                      : 0ULL)))) 
                                               >> 0x20U)) 
                                      << 1U));
    __Vtemp69311[0U] = (1U | (((IData)(((- (QData)((IData)(
                                                           (1U 
                                                            & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                >> 0x1bU) 
                                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                  >> 0x1aU)))))) 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result)) 
                               << 1U) | (1U | ((IData)(
                                                       ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x14U) 
                                                                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x13U)) 
                                                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x12U)))))) 
                                                        & ((0x100000U 
                                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                            ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res
                                                            : 
                                                           ((0x80000U 
                                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                             ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res
                                                             : 
                                                            ((0x40000U 
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
                                                              : 0ULL))))) 
                                               << 1U))));
    __Vtemp69311[2U] = (((IData)((((- (QData)((IData)(
                                                      (1U 
                                                       & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                           >> 0x1bU) 
                                                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                             >> 0x1aU)))))) 
                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result) 
                                  >> 0x20U)) | (IData)(
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x14U) 
                                                                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x13U)) 
                                                                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x12U)))))) 
                                                         & ((0x100000U 
                                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                             ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res
                                                             : 
                                                            ((0x80000U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                              ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res
                                                              : 
                                                             ((0x40000U 
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
                                                               : 0ULL)))) 
                                                        >> 0x20U))) 
                        >> 0x1fU);
    __Vtemp69313[1U] = (((((IData)(((- (QData)((IData)(
                                                       (1U 
                                                        & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                            >> 0x1bU) 
                                                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                              >> 0x1aU)))))) 
                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result)) 
                           >> 0x1fU) | ((IData)((((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                          >> 0x1bU) 
                                                                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                            >> 0x1aU)))))) 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result) 
                                                 >> 0x20U)) 
                                        << 1U)) | __Vtemp69310[1U]) 
                        | (((IData)(((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                            >> 0x17U))))) 
                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                            >> 0x1fU) | ((IData)(((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                          >> 0x17U))))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                                  >> 0x20U)) 
                                         << 1U)));
    __Vtemp69317[1U] = ((__Vtemp69313[1U] | (((IData)(
                                                      ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                              >> 0x16U))))) 
                                                       & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                          | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                              >> 0x1fU) 
                                             | ((IData)(
                                                        (((- (QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x16U))))) 
                                                          & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                             | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                                         >> 0x20U)) 
                                                << 1U))) 
                        | (((IData)(((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                            >> 0x15U))))) 
                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                        ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                            >> 0x1fU) | ((IData)(((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                          >> 0x15U))))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                      ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                                  >> 0x20U)) 
                                         << 1U)));
    __Vtemp69319[0U] = (1U | ((((__Vtemp69311[0U] | 
                                 ((IData)(((- (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                  >> 0x17U))))) 
                                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                  << 1U)) | (1U | ((IData)(
                                                           ((- (QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x16U))))) 
                                                            & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                               | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                                   << 1U))) 
                               | (1U | ((IData)(((- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                        >> 0x15U))))) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                    ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                        << 1U))) | 
                              (1U | ((IData)(((- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                     >> 0x19U))))) 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result)) 
                                     << 1U))));
    __Vtemp69319[2U] = ((((__Vtemp69311[2U] | ((IData)(
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x17U))))) 
                                                         & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                                        >> 0x20U)) 
                                               >> 0x1fU)) 
                          | ((IData)((((- (QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                              >> 0x16U))))) 
                                       & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                          | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                      >> 0x20U)) >> 0x1fU)) 
                         | ((IData)((((- (QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                             >> 0x15U))))) 
                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                         ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                     >> 0x20U)) >> 0x1fU)) 
                        | ((IData)((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                            >> 0x19U))))) 
                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result) 
                                    >> 0x20U)) >> 0x1fU));
    __Vtemp69321[1U] = ((__Vtemp69317[1U] | (((IData)(
                                                      ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                              >> 0x19U))))) 
                                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result)) 
                                              >> 0x1fU) 
                                             | ((IData)(
                                                        (((- (QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x19U))))) 
                                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result) 
                                                         >> 0x20U)) 
                                                << 1U))) 
                        | (((IData)(((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                            >> 0x18U))))) 
                                     & (QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U])))))) 
                            >> 0x1fU) | ((IData)(((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                          >> 0x18U))))) 
                                                   & (QData)((IData)(
                                                                     (1U 
                                                                      & (~ 
                                                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U]))))) 
                                                  >> 0x20U)) 
                                         << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_result 
        = (((QData)((IData)(((__Vtemp69319[2U] | ((IData)(
                                                          (((- (QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x18U))))) 
                                                            & (QData)((IData)(
                                                                              (1U 
                                                                               & (~ 
                                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U]))))) 
                                                           >> 0x20U)) 
                                                  >> 0x1fU)) 
                             | ((IData)((((- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                 >> 0x11U))))) 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2) 
                                         >> 0x20U)) 
                                >> 0x1fU)))) << 0x3fU) 
           | (((QData)((IData)((__Vtemp69321[1U] | 
                                (((IData)(((- (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                  >> 0x11U))))) 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                  >> 0x1fU) | ((IData)(
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x11U))))) 
                                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2) 
                                                        >> 0x20U)) 
                                               << 1U))))) 
               << 0x1fU) | ((QData)((IData)((1U | (
                                                   (__Vtemp69319[0U] 
                                                    | ((IData)(
                                                               ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x18U))))) 
                                                                & (QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U])))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      | ((IData)(
                                                                 ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x11U))))) 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                                         << 1U)))))) 
                            >> 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x13U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x13U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x13U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x13U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x13U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[1U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[1U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[1U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[1U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[1U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[0U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[0U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[0U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[0U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[0U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[2U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[2U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[2U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[2U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[2U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s[4U];
    vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 
        = ((7U & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2)) 
           | (((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slli) 
                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srli)) 
                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srai)) 
                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
              << 3U));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 
        = ((0xdU & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2)) 
           | (((((((((((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addi) 
                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addiw)) 
                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slti)) 
                         | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltiu)) 
                        | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xori)) 
                       | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ori)) 
                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_andi)) 
                     | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb)) 
                    | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
              << 1U));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 
        = ((0xeU & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2)) 
           | (((((((((((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_add) 
                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sub)) 
                         | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
                        | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sll)) 
                       | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slt)) 
                     | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltu)) 
                    | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srl)) 
                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sra)) 
                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraw)) 
                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xor)) 
               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_or)) 
              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_and)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src1 
        = ((6U & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src1)) 
           | (((((((((((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addi) 
                                                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addiw)) 
                                                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_add)) 
                                                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                                                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sub)) 
                                               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
                                              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slti)) 
                                             | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltiu)) 
                                            | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slli)) 
                                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srli)) 
                                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srai)) 
                                         | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                                        | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
                                       | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
                                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sll)) 
                                     | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                                    | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slt)) 
                                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltu)) 
                                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srl)) 
                                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sra)) 
                               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraw)) 
                              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xori)) 
                             | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ori)) 
                            | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_andi)) 
                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xor)) 
                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_or)) 
                         | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_and)) 
                        | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb)) 
                       | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                     | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                    | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sb)) 
                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__alu_op = 
        ((0x800U & (((((((((((((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_add) 
                                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addi)) 
                                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addiw)) 
                                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb)) 
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
                     << 0xbU) | (0xff800U & (vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                                             >> 0xcU)))) 
         | ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sub) 
              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
             << 0xaU) | ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slt) 
                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slti)) 
                          << 9U) | ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltu) 
                                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltiu)) 
                                     << 8U) | ((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_and) 
                                                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_andi)) 
                                                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrc)) 
                                                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrci)) 
                                                << 7U) 
                                               | ((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_or) 
                                                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ori)) 
                                                     | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrs)) 
                                                    | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrsi)) 
                                                   << 6U) 
                                                  | ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xor) 
                                                       | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xori)) 
                                                      << 5U) 
                                                     | ((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sll) 
                                                            | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slli)) 
                                                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                                                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                                                         << 4U) 
                                                        | ((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srl) 
                                                               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srli)) 
                                                              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
                                                             | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                                                            << 3U) 
                                                           | ((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sra) 
                                                                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srai)) 
                                                                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
                                                                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraw)) 
                                                               << 2U) 
                                                              | ((2U 
                                                                  & (((0x3feU 
                                                                       & (vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                                                                          >> 0x16U)) 
                                                                      | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrw) 
                                                                         << 1U)) 
                                                                     | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrwi) 
                                                                        << 1U))) 
                                                                 | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ecall) 
                                                                    | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ebreak)))))))))))));
    Vtop___024root____Vdpiimwrap_top__DOT__mem_read_TOP(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_result, vlSelf->__Vtask_top__DOT__mem_read__0__rdata);
    vlSelf->top__DOT__dsram_rdata = vlSelf->__Vtask_top__DOT__mem_read__0__rdata;
    Vtop___024root____Vdpiimwrap_top__DOT__mem_write_TOP(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_result, 
                                                         ((0x40000U 
                                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                                           ? (QData)((IData)(
                                                                             (0xffU 
                                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                                            ? (QData)((IData)(
                                                                              (0xffffU 
                                                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                                             ? (QData)((IData)(
                                                                               vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U]))
                                                             : 
                                                            (((QData)((IData)(
                                                                              vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))))), 
                                                         ((0x20000000U 
                                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                                           ? 0xffU
                                                           : 
                                                          ((0x40000000U 
                                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                                            ? 0xfU
                                                            : 
                                                           ((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                             >> 0x1fU)
                                                             ? 3U
                                                             : 
                                                            ((1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[9U])
                                                              ? 1U
                                                              : 0U)))));
    vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[0U] = (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_result);
    vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[1U] = (IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_result 
                                                             >> 0x20U));
    vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U] = 
        ((0x20U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                   >> 1U)) | (0x1fU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                       >> 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [0U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x15U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x16U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [0U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x15U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x16U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [0U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x15U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x16U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x15U][0U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [0U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x15U][0U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [0U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x15U][0U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [0U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x15U][0U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [0U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x15U][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [0U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x15U][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [0U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x15U][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [0U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x15U][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [0U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [0U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [0U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [0U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [0U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x15U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [0U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x15U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [0U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x15U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [0U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x15U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [0U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x15U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [0U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x15U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [0U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x15U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [0U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x15U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [0U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x15U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [0U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x15U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [0U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x15U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [0U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x15U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [0U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x16U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x16U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                 [0U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x16U][0U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [0U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x15U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x16U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [0U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x15U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x16U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [0U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x15U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x16U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x15U][1U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [0U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x15U][1U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [0U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x15U][1U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [0U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x15U][1U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [0U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x15U][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [0U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x15U][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [0U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x15U][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [0U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x15U][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [0U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [0U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [0U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [0U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [0U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x15U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [0U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x15U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [0U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x15U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [0U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x15U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [0U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x15U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [0U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x15U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [0U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x15U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [0U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x15U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [0U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x15U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [0U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x15U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [0U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x15U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [0U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x15U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [0U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x16U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x16U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                 [0U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x16U][1U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [0U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x15U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x16U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [0U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x15U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x16U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [0U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x15U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x16U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x15U][2U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [0U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x15U][2U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [0U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x15U][2U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [0U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x15U][2U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [0U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x15U][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [0U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x15U][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [0U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x15U][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [0U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x15U][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [0U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [0U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [0U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [0U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [0U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x15U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [0U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x15U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [0U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x15U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [0U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x15U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [0U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x15U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [0U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x15U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [0U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x15U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [0U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x15U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [0U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x15U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [0U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x15U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [0U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x15U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [0U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x15U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [0U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x16U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0x16U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                 [0U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x16U][2U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [0U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x15U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x16U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [0U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x15U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x16U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [0U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x15U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0x16U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x15U][3U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [0U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x15U][3U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [0U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x15U][3U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [0U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0x15U][3U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [0U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x15U][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [0U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x15U][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [0U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x15U][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [0U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0x15U][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [0U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [0U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [0U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [0U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [0U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x15U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [0U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x15U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [0U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x15U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [0U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0x15U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [0U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x15U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [0U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x15U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [0U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x15U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [0U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0x15U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [0U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0x15U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [0U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x15U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [0U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x15U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [0U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x15U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [0U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0x15U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [0U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0x16U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[4U] 
        = ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
              [0x16U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
              [0U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0x15U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [0U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x15U][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0x16U][3U])) 
           >> 0x1fU);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [3U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [2U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [3U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [2U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [3U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [2U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [2U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                 [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                 [3U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [2U][0U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [3U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [2U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [3U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [2U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                       [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                    [3U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [1U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                                  [2U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                          [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                       [3U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                         [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                           [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [1U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                        [3U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                            [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [1U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                         [3U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                             [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [1U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                          [3U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                              [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [1U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                           [3U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                               [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [1U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                            [3U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [2U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[1U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                [3U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [1U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                             [3U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [1U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s
                                 [2U][1U])) << 1U)));
}
