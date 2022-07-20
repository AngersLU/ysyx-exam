// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "Vtest___024root.h"
#include "Vtest__Syms.h"

#include "verilated_dpi.h"

extern const VlWide<10>/*319:0*/ Vtest__ConstPool__CONST_6a3c0088_0;

void Vtest___024root___settle__TOP__2(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___settle__TOP__2\n"); );
    // Body
    if (vlSelf->top__DOT__fslu__DOT__idu__DOT__flag) {
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[0U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[0U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[1U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[1U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[2U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[2U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[3U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[3U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[4U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[4U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[5U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[5U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[6U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[6U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[7U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[7U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[8U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[8U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[9U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[9U];
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
}

void Vtest___024root____Vdpiimwrap_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtest___024root___initial__TOP__14(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___initial__TOP__14\n"); );
    // Body
    Vtest___024root____Vdpiimwrap_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs);
}

void Vtest___024root___eval_initial(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtest___024root___initial__TOP__14(vlSelf);
}

void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12(Vtest_ysyx_2022040010_cradder* vlSelf) VL_ATTR_COLD;
void Vtest___024root___settle__TOP__1(Vtest___024root* vlSelf) VL_ATTR_COLD;
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__33(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux__34(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux__35(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux__36(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux__37(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux__38(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux__39(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux__40(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux__41(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux__42(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux__43(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest___024root___settle__TOP__3(Vtest___024root* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11__45(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12__46(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13__47(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest___024root___settle__TOP__4(Vtest___024root* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15__48(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16__49(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17__50(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21__51(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22__52(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23__53(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28__54(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14__55(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest___024root___settle__TOP__5(Vtest___024root* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__56(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__57(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19__58(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest___024root___settle__TOP__6(Vtest___024root* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__59(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25__60(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest___024root___settle__TOP__7(Vtest___024root* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__61(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__62(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest___024root___settle__TOP__8(Vtest___024root* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__63(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest___024root___settle__TOP__9(Vtest___024root* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u30__64(Vtest_ysyx_2022040010_cradder* vlSelf);

void Vtest___024root___eval_settle(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_settle\n"); );
    // Body
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u30));
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__12((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux));
    Vtest___024root___settle__TOP__1(vlSelf);
    Vtest___024root___settle__TOP__2(vlSelf);
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__33((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux__34((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux__35((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux__36((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux__37((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux__38((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux__39((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux__40((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux__41((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux__42((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux__43((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__33((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux));
    Vtest___024root___settle__TOP__3(vlSelf);
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11__45((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12__46((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13__47((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13));
    Vtest___024root___settle__TOP__4(vlSelf);
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15__48((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16__49((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17__50((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21__51((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22__52((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23__53((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28__54((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14__55((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14));
    Vtest___024root___settle__TOP__5(vlSelf);
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__56((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__57((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19__58((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19));
    Vtest___024root___settle__TOP__6(vlSelf);
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__59((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25__60((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25));
    Vtest___024root___settle__TOP__7(vlSelf);
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__61((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__62((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27));
    Vtest___024root___settle__TOP__8(vlSelf);
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__63((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29));
    Vtest___024root___settle__TOP__9(vlSelf);
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u30__64((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u30));
}

void Vtest___024root___final(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___final\n"); );
}

void Vtest___024root___ctor_var_reset(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->addr_i = VL_RAND_RESET_Q(64);
    vlSelf->addr_o = VL_RAND_RESET_Q(64);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->isram_e = VL_RAND_RESET_I(1);
    vlSelf->isram_addr = VL_RAND_RESET_Q(64);
    vlSelf->isram_rdata = VL_RAND_RESET_I(32);
    vlSelf->dsram_e = VL_RAND_RESET_I(1);
    vlSelf->dsram_we = VL_RAND_RESET_I(1);
    vlSelf->debug_wb_pc = VL_RAND_RESET_Q(64);
    vlSelf->bubble = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dsram_rdata = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__fslu__DOT__if_to_id_bus);
    VL_RAND_RESET_W(291, vlSelf->top__DOT__fslu__DOT__id_to_ex_bus);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__fslu__DOT__br_bus);
    VL_RAND_RESET_W(70, vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus);
    VL_RAND_RESET_W(70, vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus);
    vlSelf->top__DOT__fslu__DOT__stall = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__fslu__DOT__stallreq_for_bru = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__ifu__DOT__pc_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__ifu__DOT__ce_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__ifu__DOT__next_pc = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__buf_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_subw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slti = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltiu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srai = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sllw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srlw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_andi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xor = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_or = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ebreak = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrs = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrci = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mul = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_div = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divuw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remuw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_rem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__alu_op = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src1 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(291, vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    VL_RAND_RESET_W(291, vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_S = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_J = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__ex_rd_last = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__stallreq_for_div = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_start = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_signed = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_res_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1_i = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2_i = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_signed = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_addr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_ueq_rs2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_rs1_forward = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_rs2_forward = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_forward_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__rs2_forward_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_src_temp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_result_temp);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__one_ina = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__one_inb = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<33; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[__Vi0]);
    }
    VL_RAND_RESET_W(65, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb);
    for (int __Vi0=0; __Vi0<33; ++__Vi0) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<30; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[__Vi0]);
    }
    VL_RAND_RESET_W(65, vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__cnt = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(129, vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__divisor = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(212, vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r);
    vlSelf->top__DOT__fslu__DOT__memu__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__memu__DOT__sel_rf_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fslu__DOT__memu__DOT__b_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__fslu__DOT__memu__DOT__h_data = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__fslu__DOT__memu__DOT__w_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__fslu__DOT__memu__DOT__rf_wdata = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(134, vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r);
    vlSelf->__Vtask_top__DOT__mem_read__0__rdata = 0;
    VL_RAND_RESET_W(65, vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c);
    for (int __Vi0=0; __Vi0<30; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[__Vi0]);
    }
    VL_RAND_RESET_W(129, vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__c);
    VL_RAND_RESET_W(129, vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__c);
    VL_RAND_RESET_W(129, vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__c);
    VL_RAND_RESET_W(129, vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__c);
    VL_RAND_RESET_W(129, vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__c);
    VL_RAND_RESET_W(129, vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__c);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
