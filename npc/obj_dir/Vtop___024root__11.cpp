// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__29(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__29\n"); );
    // Body
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d = (
                                                   (0xf8ffffffU 
                                                    & vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d) 
                                                   | (((0x1aU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                            >> 7U))) 
                                                       << 0x1aU) 
                                                      | (((0x19U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                               >> 7U))) 
                                                          << 0x19U) 
                                                         | ((0x18U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                                 >> 7U))) 
                                                            << 0x18U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d = (
                                                   (0xc7ffffffU 
                                                    & vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d) 
                                                   | (((0x1dU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                            >> 7U))) 
                                                       << 0x1dU) 
                                                      | (((0x1cU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                               >> 7U))) 
                                                          << 0x1cU) 
                                                         | ((0x1bU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                                 >> 7U))) 
                                                            << 0x1bU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d = (
                                                   (0x3fffffffU 
                                                    & vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d) 
                                                   | (((0x1fU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                            >> 7U))) 
                                                       << 0x1fU) 
                                                      | ((0x1eU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                              >> 7U))) 
                                                         << 0x1eU)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xfffffff8U & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (((2U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                       >> 0x19U)) << 2U) | (((1U == 
                                              (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                               >> 0x19U)) 
                                             << 1U) 
                                            | (0U == 
                                               (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                >> 0x19U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xffffffc7U & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xfffffff8U & (((5U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x19U)) << 5U) 
                             | (((4U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                                 << 4U) | ((3U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                           << 3U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xfffffe3fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xffffffc0U & (((8U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x19U)) << 8U) 
                             | (((7U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                                 << 7U) | ((6U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                           << 6U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xfffff1ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xfffffe00U & (((0xbU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 0x19U)) 
                              << 0xbU) | (((0xaU == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xaU) 
                                          | ((9U == 
                                              (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                               >> 0x19U)) 
                                             << 9U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xffff8fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xfffff000U & (((0xeU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 0x19U)) 
                              << 0xeU) | (((0xdU == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xdU) 
                                          | ((0xcU 
                                              == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xcU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xfffc7fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xffff8000U & (((0x11U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x11U) | (((0x10U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x10U) 
                                           | ((0xfU 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0xfU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xffe3ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xfffc0000U & (((0x14U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x14U) | (((0x13U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x13U) 
                                           | ((0x12U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x12U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xff1fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xffe00000U & (((0x17U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x17U) | (((0x16U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x16U) 
                                           | ((0x15U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x15U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xf8ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xff000000U & (((0x1aU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1aU) | (((0x19U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x19U) 
                                           | ((0x18U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x18U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xc7ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xf8000000U & (((0x1dU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1dU) | (((0x1cU 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1cU) 
                                           | ((0x1bU 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1bU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0x3fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xc0000000U & (((0x1fU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1fU) | ((0x1eU == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0x1eU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0x3fffffffU & ((0x3fffffffU & (0x20U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U))) 
                             | ((0x3fffffffU & ((0x1fU 
                                                 == 
                                                 (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                                >> 1U)) 
                                | ((0x1eU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x19U)) 
                                   >> 2U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfffffff1U & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfffffffeU & (((0x23U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 3U) | (((0x22U == 
                                          (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 2U) | (
                                                   (0x21U 
                                                    == 
                                                    (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 1U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xffffff8fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfffffff0U & (((0x26U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 6U) | (((0x25U == 
                                          (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 5U) | (
                                                   (0x24U 
                                                    == 
                                                    (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 4U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfffffc7fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xffffff80U & (((0x29U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 9U) | (((0x28U == 
                                          (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 8U) | (
                                                   (0x27U 
                                                    == 
                                                    (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 7U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xffffe3ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfffffc00U & (((0x2cU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xcU) | (((0x2bU == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xbU) 
                                          | ((0x2aU 
                                              == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xaU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xffff1fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xffffe000U & (((0x2fU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xfU) | (((0x2eU == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xeU) 
                                          | ((0x2dU 
                                              == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xdU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfff8ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xffff0000U & (((0x32U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x12U) | (((0x31U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x11U) 
                                           | ((0x30U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x10U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xffc7ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfff80000U & (((0x35U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x15U) | (((0x34U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x14U) 
                                           | ((0x33U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x13U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfe3fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xffc00000U & (((0x38U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x18U) | (((0x37U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x17U) 
                                           | ((0x36U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x16U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xf1ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfe000000U & (((0x3bU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1bU) | (((0x3aU 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1aU) 
                                           | ((0x39U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x19U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0x8fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xf0000000U & (((0x3eU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1eU) | (((0x3dU 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1dU) 
                                           | ((0x3cU 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1cU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | ((0x3fU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                         >> 0x19U)) << 0x1fU));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfffffffcU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0x7fffffffU & ((0x7ffffffeU & ((0x41U 
                                              == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 1U)) 
                             | ((0x7fffffffU & (0x40U 
                                                == 
                                                (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U))) 
                                | ((0x3fU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x19U)) 
                                   >> 1U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xffffffe3U & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfffffffcU & (((0x44U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 4U) | (((0x43U == 
                                          (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 3U) | (
                                                   (0x42U 
                                                    == 
                                                    (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 2U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xffffff1fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xffffffe0U & (((0x47U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 7U) | (((0x46U == 
                                          (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 6U) | (
                                                   (0x45U 
                                                    == 
                                                    (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 5U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfffff8ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xffffff00U & (((0x4aU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xaU) | (((0x49U == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 9U) | 
                                          ((0x48U == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 8U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xffffc7ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfffff800U & (((0x4dU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xdU) | (((0x4cU == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xcU) 
                                          | ((0x4bU 
                                              == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xbU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfffe3fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xffffc000U & (((0x50U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x10U) | (((0x4fU 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0xfU) 
                                           | ((0x4eU 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0xeU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfff1ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfffe0000U & (((0x53U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x13U) | (((0x52U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x12U) 
                                           | ((0x51U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x11U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xff8fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfff00000U & (((0x56U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x16U) | (((0x55U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x15U) 
                                           | ((0x54U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x14U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfc7fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xff800000U & (((0x59U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x19U) | (((0x58U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x18U) 
                                           | ((0x57U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x17U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xe3ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfc000000U & (((0x5cU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1cU) | (((0x5bU 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1bU) 
                                           | ((0x5aU 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1aU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0x1fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xe0000000U & (((0x5fU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1fU) | (((0x5eU 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1eU) 
                                           | ((0x5dU 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1dU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xfffffff8U & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (((0x62U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                          >> 0x19U)) << 2U) | (((0x61U 
                                                 == 
                                                 (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                                << 1U) 
                                               | (0x60U 
                                                  == 
                                                  (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xffffffc7U & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xfffffff8U & (((0x65U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 5U) | (((0x64U == 
                                          (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 4U) | (
                                                   (0x63U 
                                                    == 
                                                    (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 3U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xfffffe3fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xffffffc0U & (((0x68U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 8U) | (((0x67U == 
                                          (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 7U) | (
                                                   (0x66U 
                                                    == 
                                                    (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 6U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xfffff1ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xfffffe00U & (((0x6bU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xbU) | (((0x6aU == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xaU) 
                                          | ((0x69U 
                                              == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 9U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xffff8fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xfffff000U & (((0x6eU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xeU) | (((0x6dU == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xdU) 
                                          | ((0x6cU 
                                              == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xcU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xfffc7fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xffff8000U & (((0x71U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x11U) | (((0x70U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x10U) 
                                           | ((0x6fU 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0xfU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xffe3ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xfffc0000U & (((0x74U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x14U) | (((0x73U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x13U) 
                                           | ((0x72U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x12U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xff1fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xffe00000U & (((0x77U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x17U) | (((0x76U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x16U) 
                                           | ((0x75U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x15U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xf8ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xff000000U & (((0x7aU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1aU) | (((0x79U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x19U) 
                                           | ((0x78U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x18U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xc7ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xf8000000U & (((0x7dU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1dU) | (((0x7cU 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1cU) 
                                           | ((0x7bU 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1bU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | ((0x7eU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                         >> 0x19U)) << 0x1eU));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d 
        = ((0xf8U & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
           | (((2U == (7U & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                             >> 0xcU))) << 2U) | ((
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                        >> 0xcU))) 
                                                   << 1U) 
                                                  | (0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                         >> 0xcU))))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d 
        = ((0xc7U & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
           | (((5U == (7U & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                             >> 0xcU))) << 5U) | ((
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                        >> 0xcU))) 
                                                   << 4U) 
                                                  | ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                          >> 0xcU))) 
                                                     << 3U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d 
        = ((0xbfU & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
           | ((6U == (7U & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                            >> 0xcU))) << 6U));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode = 
        (0x7fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i);
    vlSelf->top__DOT__fslu__DOT__stall = ((IData)(vlSelf->rst)
                                           ? 0U : ((IData)(vlSelf->top__DOT__fslu__DOT__stallreq_for_bru)
                                                    ? 0x24U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__stallreq_for_div)
                                                     ? 0x22U
                                                     : 
                                                    ((((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__ex_rd_last) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                           >> 0xbU))) 
                                                      | ((((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__ex_rd_last) 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                               >> 0x10U))) 
                                                          & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                             >> 8U)) 
                                                         & (~ 
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                             >> 7U))))
                                                      ? 0x21U
                                                      : 0U))));
    if ((0x8000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1_i 
            = ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_signed)
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1)))
                : (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1)));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2_i 
            = ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_signed)
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2)))
                : (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2)));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1_i 
            = vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2_i 
            = vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2;
    }
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xffffffe1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xfffffffeU & (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__3__KET____DOT__bitx__c) 
                              << 4U) | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__2__KET____DOT__bitx__c) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__1__KET____DOT__bitx__c) 
                                                    << 2U) 
                                                   | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__0__KET____DOT__bitx__c) 
                                                      << 1U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xfffffe1fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xffffffe0U & (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__7__KET____DOT__bitx__c) 
                              << 8U) | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__6__KET____DOT__bitx__c) 
                                         << 7U) | (
                                                   ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__5__KET____DOT__bitx__c) 
                                                    << 6U) 
                                                   | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__4__KET____DOT__bitx__c) 
                                                      << 5U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xffffe1ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xfffffe00U & (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__11__KET____DOT__bitx__c) 
                              << 0xcU) | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__10__KET____DOT__bitx__c) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__9__KET____DOT__bitx__c) 
                                              << 0xaU) 
                                             | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__8__KET____DOT__bitx__c) 
                                                << 9U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xfffe1fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xffffe000U & (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__15__KET____DOT__bitx__c) 
                              << 0x10U) | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__14__KET____DOT__bitx__c) 
                                            << 0xfU) 
                                           | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__13__KET____DOT__bitx__c) 
                                               << 0xeU) 
                                              | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__12__KET____DOT__bitx__c) 
                                                 << 0xdU))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xffe1ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xfffe0000U & (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__19__KET____DOT__bitx__c) 
                              << 0x14U) | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__18__KET____DOT__bitx__c) 
                                            << 0x13U) 
                                           | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__17__KET____DOT__bitx__c) 
                                               << 0x12U) 
                                              | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__16__KET____DOT__bitx__c) 
                                                 << 0x11U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xfe1fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xffe00000U & (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__23__KET____DOT__bitx__c) 
                              << 0x18U) | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__22__KET____DOT__bitx__c) 
                                            << 0x17U) 
                                           | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__21__KET____DOT__bitx__c) 
                                               << 0x16U) 
                                              | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__20__KET____DOT__bitx__c) 
                                                 << 0x15U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xe1ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xfe000000U & (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__27__KET____DOT__bitx__c) 
                              << 0x1cU) | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__26__KET____DOT__bitx__c) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__25__KET____DOT__bitx__c) 
                                               << 0x1aU) 
                                              | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__24__KET____DOT__bitx__c) 
                                                 << 0x19U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0x1fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xe0000000U & (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__30__KET____DOT__bitx__c) 
                              << 0x1fU) | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__29__KET____DOT__bitx__c) 
                                            << 0x1eU) 
                                           | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__28__KET____DOT__bitx__c) 
                                              << 0x1dU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0x1fffffffU & ((0x1fffffffU & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__31__KET____DOT__bitx__c)) 
                             | ((0x1fffffffU & ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__30__KET____DOT__bitx__c) 
                                                >> 1U)) 
                                | ((0x1fffffffU & ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__29__KET____DOT__bitx__c) 
                                                   >> 2U)) 
                                   | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__28__KET____DOT__bitx__c) 
                                      >> 3U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xffffffe1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xfffffffeU & (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__35__KET____DOT__bitx__c) 
                              << 4U) | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__34__KET____DOT__bitx__c) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__33__KET____DOT__bitx__c) 
                                                    << 2U) 
                                                   | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__32__KET____DOT__bitx__c) 
                                                      << 1U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xfffffe1fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xffffffe0U & (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__39__KET____DOT__bitx__c) 
                              << 8U) | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__38__KET____DOT__bitx__c) 
                                         << 7U) | (
                                                   ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__37__KET____DOT__bitx__c) 
                                                    << 6U) 
                                                   | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__36__KET____DOT__bitx__c) 
                                                      << 5U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xffffe1ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xfffffe00U & (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__43__KET____DOT__bitx__c) 
                              << 0xcU) | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__42__KET____DOT__bitx__c) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__41__KET____DOT__bitx__c) 
                                              << 0xaU) 
                                             | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__40__KET____DOT__bitx__c) 
                                                << 9U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xfffe1fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xffffe000U & (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__47__KET____DOT__bitx__c) 
                              << 0x10U) | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__46__KET____DOT__bitx__c) 
                                            << 0xfU) 
                                           | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__45__KET____DOT__bitx__c) 
                                               << 0xeU) 
                                              | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__44__KET____DOT__bitx__c) 
                                                 << 0xdU))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xffe1ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xfffe0000U & (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__51__KET____DOT__bitx__c) 
                              << 0x14U) | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__50__KET____DOT__bitx__c) 
                                            << 0x13U) 
                                           | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__49__KET____DOT__bitx__c) 
                                               << 0x12U) 
                                              | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__48__KET____DOT__bitx__c) 
                                                 << 0x11U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xfe1fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xffe00000U & (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__55__KET____DOT__bitx__c) 
                              << 0x18U) | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__54__KET____DOT__bitx__c) 
                                            << 0x17U) 
                                           | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__53__KET____DOT__bitx__c) 
                                               << 0x16U) 
                                              | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__52__KET____DOT__bitx__c) 
                                                 << 0x15U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xe1ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xfe000000U & (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__59__KET____DOT__bitx__c) 
                              << 0x1cU) | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__58__KET____DOT__bitx__c) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__57__KET____DOT__bitx__c) 
                                               << 0x1aU) 
                                              | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__56__KET____DOT__bitx__c) 
                                                 << 0x19U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0x1fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xe0000000U & (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__62__KET____DOT__bitx__c) 
                              << 0x1fU) | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__61__KET____DOT__bitx__c) 
                                            << 0x1eU) 
                                           | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__60__KET____DOT__bitx__c) 
                                              << 0x1dU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U] 
        = (1U & ((0x1fffffffU & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__63__KET____DOT__bitx__c)) 
                 | ((0x1fffffffU & ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__62__KET____DOT__bitx__c) 
                                    >> 1U)) | ((0x1fffffffU 
                                                & ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__61__KET____DOT__bitx__c) 
                                                   >> 2U)) 
                                               | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__60__KET____DOT__bitx__c) 
                                                  >> 3U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result 
        = ((0x4000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
            ? (((QData)((IData)((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U])))
            : (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xfU][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xfU][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xfU][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xfU][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xfU][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x10U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x10U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x10U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x10U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x10U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x11U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x11U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x11U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x11U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x11U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x15U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x15U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x15U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x15U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x15U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x16U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x16U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x16U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x16U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x16U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x17U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x17U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x17U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x17U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x17U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1cU][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1cU][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1cU][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1cU][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1cU][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xeU][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xeU][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xeU][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xeU][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xeU][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[0U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[0U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[0U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[0U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[0U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[0U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[0U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[0U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[0U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[0U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[3U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[3U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[3U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[3U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[3U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[4U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[4U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[4U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[4U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[4U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[3U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[3U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[3U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[3U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[3U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[4U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[4U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[4U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[4U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[4U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[5U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[5U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[5U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[5U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[5U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[6U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[6U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[6U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[6U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[6U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__s[4U];
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xfffffff8U & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (((2U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
               << 2U) | (((1U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                          << 1U) | (0U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xffffffc7U & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xfffffff8U & (((5U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 5U) | (((4U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 4U) | (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 3U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xfffffe3fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xffffffc0U & (((8U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 8U) | (((7U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 7U) | (
                                                   (6U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 6U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xfffff1ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xfffffe00U & (((0xbU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xbU) | (((0xaU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xaU) 
                                          | ((9U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 9U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xffff8fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xfffff000U & (((0xeU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xeU) | (((0xdU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xdU) 
                                          | ((0xcU 
                                              == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xcU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xfffc7fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xffff8000U & (((0x11U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x11U) | (((0x10U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x10U) 
                                           | ((0xfU 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0xfU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xffe3ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xfffc0000U & (((0x14U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x14U) | (((0x13U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x13U) 
                                           | ((0x12U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x12U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xff1fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xffe00000U & (((0x17U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x17U) | (((0x16U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x16U) 
                                           | ((0x15U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x15U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xf8ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xff000000U & (((0x1aU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1aU) | (((0x19U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x19U) 
                                           | ((0x18U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x18U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xc7ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xf8000000U & (((0x1dU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1dU) | (((0x1cU 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1cU) 
                                           | ((0x1bU 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1bU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0x3fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xc0000000U & (((0x1fU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1fU) | ((0x1eU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0x1eU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0x3fffffffU & ((0x3fffffffU & (0x20U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode))) 
                             | ((0x3fffffffU & ((0x1fU 
                                                 == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                >> 1U)) 
                                | ((0x1eU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                   >> 2U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfffffff1U & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfffffffeU & (((0x23U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 3U) | (((0x22U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 2U) | (
                                                   (0x21U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 1U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xffffff8fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfffffff0U & (((0x26U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 6U) | (((0x25U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 5U) | (
                                                   (0x24U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 4U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfffffc7fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xffffff80U & (((0x29U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 9U) | (((0x28U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 8U) | (
                                                   (0x27U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 7U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xffffe3ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfffffc00U & (((0x2cU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xcU) | (((0x2bU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xbU) 
                                          | ((0x2aU 
                                              == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xaU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xffff1fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xffffe000U & (((0x2fU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xfU) | (((0x2eU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xeU) 
                                          | ((0x2dU 
                                              == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xdU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfff8ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xffff0000U & (((0x32U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x12U) | (((0x31U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x11U) 
                                           | ((0x30U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x10U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xffc7ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfff80000U & (((0x35U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x15U) | (((0x34U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x14U) 
                                           | ((0x33U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x13U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfe3fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xffc00000U & (((0x38U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x18U) | (((0x37U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x17U) 
                                           | ((0x36U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x16U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xf1ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfe000000U & (((0x3bU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1bU) | (((0x3aU 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1aU) 
                                           | ((0x39U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x19U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0x8fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xf0000000U & (((0x3eU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1eU) | (((0x3dU 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1dU) 
                                           | ((0x3cU 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1cU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | ((0x3fU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
              << 0x1fU));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfffffffcU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0x7fffffffU & ((0x7ffffffeU & ((0x41U 
                                              == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 1U)) 
                             | ((0x7fffffffU & (0x40U 
                                                == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode))) 
                                | ((0x3fU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                   >> 1U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xffffffe3U & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfffffffcU & (((0x44U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 4U) | (((0x43U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 3U) | (
                                                   (0x42U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 2U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xffffff1fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xffffffe0U & (((0x47U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 7U) | (((0x46U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 6U) | (
                                                   (0x45U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 5U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfffff8ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xffffff00U & (((0x4aU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xaU) | (((0x49U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 9U) | 
                                          ((0x48U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 8U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xffffc7ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfffff800U & (((0x4dU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xdU) | (((0x4cU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xcU) 
                                          | ((0x4bU 
                                              == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xbU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfffe3fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xffffc000U & (((0x50U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x10U) | (((0x4fU 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0xfU) 
                                           | ((0x4eU 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0xeU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfff1ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfffe0000U & (((0x53U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x13U) | (((0x52U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x12U) 
                                           | ((0x51U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x11U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xff8fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfff00000U & (((0x56U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x16U) | (((0x55U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x15U) 
                                           | ((0x54U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x14U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfc7fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xff800000U & (((0x59U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x19U) | (((0x58U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x18U) 
                                           | ((0x57U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x17U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xe3ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfc000000U & (((0x5cU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1cU) | (((0x5bU 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1bU) 
                                           | ((0x5aU 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1aU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0x1fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xe0000000U & (((0x5fU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1fU) | (((0x5eU 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1eU) 
                                           | ((0x5dU 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1dU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xfffffff8U & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (((0x62U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
               << 2U) | (((0x61U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                          << 1U) | (0x60U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xffffffc7U & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xfffffff8U & (((0x65U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 5U) | (((0x64U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 4U) | (
                                                   (0x63U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 3U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xfffffe3fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xffffffc0U & (((0x68U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 8U) | (((0x67U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 7U) | (
                                                   (0x66U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 6U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xfffff1ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xfffffe00U & (((0x6bU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xbU) | (((0x6aU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xaU) 
                                          | ((0x69U 
                                              == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 9U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xffff8fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xfffff000U & (((0x6eU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xeU) | (((0x6dU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xdU) 
                                          | ((0x6cU 
                                              == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xcU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xfffc7fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xffff8000U & (((0x71U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x11U) | (((0x70U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x10U) 
                                           | ((0x6fU 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0xfU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xffe3ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xfffc0000U & (((0x74U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x14U) | (((0x73U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x13U) 
                                           | ((0x72U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x12U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xff1fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xffe00000U & (((0x77U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x17U) | (((0x76U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x16U) 
                                           | ((0x75U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x15U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xf8ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xff000000U & (((0x7aU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1aU) | (((0x79U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x19U) 
                                           | ((0x78U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x18U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xc7ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xf8000000U & (((0x7dU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1dU) | (((0x7cU 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1cU) 
                                           | ((0x7bU 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1bU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | ((0x7eU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
              << 0x1eU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result 
        = (QData)((IData)((1U & (~ ((IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                             >> 0x3fU)) 
                                    ^ ((IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2 
                                                >> 0x3fU)) 
                                       & (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result 
                                                  >> 0x3fU))))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [1U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xaU][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [0U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [1U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xaU][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [0U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [1U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xaU][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [0U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xaU][0U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [1U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xaU][0U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [1U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xaU][0U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [1U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xaU][0U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [1U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xaU][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [1U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xaU][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [1U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xaU][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [1U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xaU][0U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [1U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [1U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [1U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [1U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][0U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [1U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xaU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [1U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xaU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [1U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xaU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [1U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xaU][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [1U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xaU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [1U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xaU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [1U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xaU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [1U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xaU][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [1U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [1U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [1U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [1U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [1U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xaU][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [1U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xaU][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [1U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xaU][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [1U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xaU][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [1U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [0U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [0U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [1U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [0U][0U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [1U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xaU][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [0U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [1U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xaU][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [0U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [1U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xaU][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [0U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xaU][1U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [1U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xaU][1U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [1U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xaU][1U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [1U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xaU][1U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [1U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xaU][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [1U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xaU][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [1U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xaU][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [1U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xaU][1U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [1U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [1U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [1U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [1U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][1U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [1U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xaU][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [1U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xaU][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [1U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xaU][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [1U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xaU][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [1U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xaU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [1U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xaU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [1U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xaU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [1U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xaU][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [1U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [1U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [1U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [1U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [1U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xaU][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [1U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xaU][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [1U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xaU][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [1U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xaU][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [1U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [0U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [0U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [1U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [0U][1U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [1U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xaU][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [0U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [1U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xaU][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [0U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [1U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xaU][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [0U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xaU][2U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [1U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xaU][2U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [1U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xaU][2U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [1U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xaU][2U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [1U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xaU][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [1U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xaU][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [1U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xaU][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [1U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xaU][2U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [1U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [1U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [1U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [1U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][2U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [1U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xaU][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [1U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xaU][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [1U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xaU][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [1U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xaU][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [1U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xaU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [1U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xaU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [1U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xaU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [1U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xaU][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [1U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [1U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [1U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [1U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [1U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xaU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [1U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xaU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [1U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xaU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [1U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xaU][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [1U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [0U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [0U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [1U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [0U][2U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [1U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xaU][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [0U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [1U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xaU][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [0U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                    [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [1U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                                  [0xaU][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [0U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xaU][3U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [1U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xaU][3U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [1U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xaU][3U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [1U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                       [0xaU][3U] & 
                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [1U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                         [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xaU][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [1U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xaU][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [1U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xaU][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [1U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                        [0xaU][3U] 
                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [1U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [1U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [1U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [1U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [1U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xaU][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [1U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xaU][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [1U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xaU][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [1U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xaU][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [1U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xaU][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [1U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xaU][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [1U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xaU][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [1U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xaU][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [1U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [1U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [1U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [1U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xaU][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [1U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xaU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [1U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xaU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [1U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xaU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [1U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xaU][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [1U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                 [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [0U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[4U] 
        = ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
              [0U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
              [1U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xaU][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [1U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xaU][3U] 
                                         & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [0U][3U])) 
           >> 0x1fU);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                      [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xbU][0U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                      [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xbU][0U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                      [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xbU][0U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [5U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xbU][0U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [5U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xbU][0U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [5U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xbU][0U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [5U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xbU][0U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [5U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xbU][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [5U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xbU][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [5U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xbU][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [5U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xbU][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [5U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xbU][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [5U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xbU][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [5U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xbU][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [5U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xbU][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [5U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xbU][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [5U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xbU][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [5U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xbU][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [5U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xbU][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xbU][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xbU][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xbU][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xbU][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                              [5U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xbU][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                              [5U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xbU][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                              [5U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xbU][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                              [5U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xbU][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                               [5U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xbU][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                               [5U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xbU][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                               [5U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xbU][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                               [5U][0U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xbU][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [6U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [6U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0xbU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                [5U][0U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                [6U][0U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                      [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xbU][1U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                      [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xbU][1U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                      [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xbU][1U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [5U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xbU][1U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [5U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xbU][1U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [5U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xbU][1U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [5U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xbU][1U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [5U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xbU][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [5U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xbU][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [5U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xbU][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [5U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xbU][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [5U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xbU][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [5U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xbU][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [5U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xbU][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [5U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xbU][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [5U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xbU][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [5U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xbU][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [5U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xbU][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [5U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xbU][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xbU][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xbU][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xbU][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xbU][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                              [5U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xbU][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                              [5U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xbU][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                              [5U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xbU][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                              [5U][1U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xbU][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                               [5U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xbU][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                               [5U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xbU][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                               [5U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xbU][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                               [5U][1U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xbU][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [6U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [6U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0xbU][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                [5U][1U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                [6U][1U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                      [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xbU][2U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                      [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xbU][2U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                      [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xbU][2U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [5U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xbU][2U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [5U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xbU][2U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [5U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xbU][2U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [5U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xbU][2U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [5U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xbU][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [5U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xbU][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [5U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xbU][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [5U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xbU][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [5U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xbU][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [5U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xbU][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [5U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xbU][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [5U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xbU][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [5U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xbU][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [5U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xbU][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [5U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xbU][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [5U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xbU][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xbU][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xbU][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xbU][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xbU][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                              [5U][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xbU][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                              [5U][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xbU][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                              [5U][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xbU][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                              [5U][2U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xbU][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                               [5U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xbU][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                               [5U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xbU][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                               [5U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xbU][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                               [5U][2U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xbU][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [6U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [6U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                 [0xbU][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                [5U][2U] 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                [6U][2U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                      [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xbU][3U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                      [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xbU][3U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                       [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                      [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                      [0xbU][3U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                        [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [5U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xbU][3U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [5U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xbU][3U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [5U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xbU][3U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                          [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [5U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                         [0xbU][3U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [5U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xbU][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [5U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xbU][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [5U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xbU][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                           [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [5U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                          [0xbU][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [5U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xbU][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [5U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xbU][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [5U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xbU][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                            [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [5U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                           [0xbU][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [5U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xbU][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [5U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xbU][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [5U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xbU][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [5U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                            [0xbU][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xbU][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xbU][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xbU][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                              [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                             [0xbU][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                              [5U][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xbU][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                              [5U][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xbU][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                              [5U][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xbU][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                               [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                              [5U][3U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                              [0xbU][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                               [5U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xbU][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                               [5U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xbU][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                               [5U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xbU][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                               [5U][3U] 
                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                                               [0xbU][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [6U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[4U] 
        = ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
              [6U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
              [0xbU][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [5U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
                             [0xbU][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [5U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [6U][3U])) 
           >> 0x1fU);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [4U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [2U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [3U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [4U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [2U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [3U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [4U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [2U][0U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [3U][0U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [4U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [4U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [4U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [4U][0U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [2U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [4U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [2U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [4U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [2U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [4U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [2U][0U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [4U][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [4U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [4U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [4U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][0U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [4U][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [2U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [4U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [2U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [4U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [2U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [4U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [2U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [4U][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [2U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [4U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [2U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [4U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [2U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [4U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [2U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [4U][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [4U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [4U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [4U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [4U][0U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [2U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [4U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [2U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [4U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [2U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [4U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [2U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [4U][0U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [3U][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [3U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [4U][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][0U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [3U][0U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [4U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [2U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [3U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [4U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [2U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [3U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [4U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [2U][1U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [3U][1U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [4U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [4U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [4U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [4U][1U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [2U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [4U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [2U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [4U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [2U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [4U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [2U][1U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [4U][1U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [4U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [4U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [4U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][1U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [4U][1U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [2U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [4U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [2U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [4U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [2U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [4U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [2U][1U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [4U][1U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [2U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [4U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [2U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [4U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [2U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [4U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [2U][1U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [4U][1U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [4U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [4U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [4U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [4U][1U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [2U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [4U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [2U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [4U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [2U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [4U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[1U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [2U][1U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [4U][1U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [3U][1U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [3U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [4U][1U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][1U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][1U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][1U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [3U][1U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [4U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [2U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [3U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [4U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [2U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [3U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [4U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [2U][2U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [3U][2U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [4U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [4U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [4U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [4U][2U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [2U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [4U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [2U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [4U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [2U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [4U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [2U][2U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [4U][2U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [4U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [4U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [4U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][2U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [4U][2U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [2U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [4U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [2U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [4U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [2U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [4U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [2U][2U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [4U][2U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [2U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [4U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [2U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [4U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [2U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [4U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [2U][2U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [4U][2U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [4U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [4U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [4U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [4U][2U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [2U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [4U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [2U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [4U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x40000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [2U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [4U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[2U]) 
           | (0x80000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [2U][2U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [4U][2U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [3U][2U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [3U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                 [4U][2U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][2U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][2U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][2U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [3U][2U])) 
              >> 0x1fU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [4U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [2U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [3U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [4U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [2U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [3U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                       [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                    [4U][3U])) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [2U][3U] 
                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                                  [3U][3U])) 
                    << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [4U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [4U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [4U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                          [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                       [4U][3U])) | 
                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                         [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [2U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [4U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [2U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [4U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [2U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [4U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                           [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [2U][3U] & 
                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                        [4U][3U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [4U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [4U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [4U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                            [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [2U][3U] & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                         [4U][3U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [2U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [4U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [2U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [4U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [2U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [4U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                             [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [2U][3U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                          [4U][3U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [2U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [4U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x200000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [2U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [4U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x400000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [2U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [4U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x800000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                              [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [2U][3U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                           [4U][3U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x1000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [4U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x2000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [4U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x4000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [4U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x8000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                               [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [2U][3U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                            [4U][3U])) 
                             | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x10000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [2U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [4U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [3U][3U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[3U]) 
           | (0x20000000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [3U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                [4U][3U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [2U][3U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                             [4U][3U])) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [2U][3U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s
                                 [3U][3U])) << 1U)));
}
