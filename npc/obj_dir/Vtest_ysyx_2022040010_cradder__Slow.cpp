// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "Vtest_ysyx_2022040010_cradder.h"
#include "Vtest__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtest_ysyx_2022040010_cradder___ctor_var_reset(Vtest_ysyx_2022040010_cradder* vlSelf);

Vtest_ysyx_2022040010_cradder::Vtest_ysyx_2022040010_cradder(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtest_ysyx_2022040010_cradder___ctor_var_reset(this);
}

void Vtest_ysyx_2022040010_cradder::__Vconfigure(Vtest__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtest_ysyx_2022040010_cradder::~Vtest_ysyx_2022040010_cradder() {
}

void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12(Vtest_ysyx_2022040010_cradder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12\n"); );
    // Body
    vlSelf->c[0U] = (0xfffffffeU & vlSelf->c[0U]);
}

void Vtest_ysyx_2022040010_cradder___ctor_var_reset(Vtest_ysyx_2022040010_cradder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_ysyx_2022040010_cradder___ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(129, vlSelf->ina);
    VL_RAND_RESET_W(129, vlSelf->inb);
    VL_RAND_RESET_W(129, vlSelf->inc);
    VL_RAND_RESET_W(129, vlSelf->s);
    VL_RAND_RESET_W(129, vlSelf->c);
}
