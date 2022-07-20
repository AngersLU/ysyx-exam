// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "Vtest___024root.h"
#include "Vtest__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void mem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vtest___024root____Vdpiimwrap_top__DOT__mem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root____Vdpiimwrap_top__DOT__mem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    mem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void mem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vtest___024root____Vdpiimwrap_top__DOT__mem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root____Vdpiimwrap_top__DOT__mem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    mem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtest___024root____Vdpiimwrap_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root____Vdpiimwrap_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void ebreak();

VL_INLINE_OPT void Vtest___024root____Vdpiimwrap_top__DOT__fslu__DOT__exu__DOT__ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root____Vdpiimwrap_top__DOT__fslu__DOT__exu__DOT__ebreak_TOP\n"); );
    // Body
    ebreak();
}

VL_INLINE_OPT void Vtest___024root___settle__TOP__3(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[0U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[0U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[0U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[0U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[0U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[0U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[0U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[0U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[0U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[0U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[1U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[1U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[1U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[1U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[1U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[1U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[1U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[1U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[1U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[1U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[2U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[2U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[2U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[2U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[2U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[2U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[2U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[2U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[2U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[2U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[3U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[3U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[3U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[3U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[3U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[3U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[3U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[3U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[3U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[3U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[4U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[4U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[4U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[4U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[4U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[4U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[4U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[4U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[4U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[4U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[5U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[5U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[5U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[5U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[5U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[5U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[5U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[5U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[5U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[5U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[6U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[6U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[6U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[6U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[6U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[6U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[6U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[6U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[6U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[6U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[7U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[7U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[7U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[7U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[7U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[7U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[7U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[7U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[7U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[7U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[8U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[8U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[8U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[8U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[8U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[8U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[8U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[8U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[8U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[8U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[9U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[9U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[9U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[9U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[9U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[9U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[9U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[9U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[9U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[9U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xaU][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xaU][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xaU][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xaU][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xaU][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[0xaU][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[0xaU][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[0xaU][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[0xaU][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s[0xaU][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux.s[4U];
}

VL_INLINE_OPT void Vtest___024root___settle__TOP__4(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___settle__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[0U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[0U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[0U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[0U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[0U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xbU][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xbU][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xbU][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xbU][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xbU][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[1U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[1U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[1U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[1U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[1U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xcU][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xcU][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xcU][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xcU][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xcU][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[2U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[2U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[2U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[2U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[2U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xdU][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xdU][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xdU][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xdU][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xdU][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13.c[4U];
}

VL_INLINE_OPT void Vtest___024root___settle__TOP__5(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___settle__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xfU][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xfU][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xfU][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xfU][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xfU][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[4U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[4U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[4U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[4U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[4U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x10U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x10U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x10U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x10U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x10U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[5U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[5U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[5U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[5U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[5U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x11U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x11U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x11U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x11U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x11U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[6U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[6U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[6U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[6U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[6U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x15U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x15U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x15U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x15U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x15U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[3U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[3U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[3U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[3U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[3U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x16U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x16U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x16U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x16U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x16U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[4U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[4U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[4U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[4U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[4U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x17U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x17U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x17U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x17U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x17U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[0U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[0U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[0U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[0U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[0U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1cU][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1cU][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1cU][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1cU][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1cU][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[0U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[0U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[0U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[0U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[0U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xeU][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xeU][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xeU][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xeU][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xeU][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[3U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[3U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[3U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[3U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s[3U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14.s[4U];
}

VL_INLINE_OPT void Vtest___024root___settle__TOP__6(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___settle__TOP__6\n"); );
    // Body
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[0U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[0U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[0U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[0U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[0U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[2U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[2U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[2U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[2U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[2U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x13U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x13U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x13U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x13U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x13U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[1U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[1U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[1U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[1U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s[1U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19.s[4U];
}

VL_INLINE_OPT void Vtest___024root___settle__TOP__7(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___settle__TOP__7\n"); );
    // Body
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[1U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[1U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[1U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[1U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[1U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x19U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x19U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x19U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x19U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x19U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[2U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[2U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[2U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[2U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s[2U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25.s[4U];
}

VL_INLINE_OPT void Vtest___024root___settle__TOP__8(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___settle__TOP__8\n"); );
    // Body
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s[0U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s[0U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s[0U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s[0U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s[0U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.s[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s[1U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s[1U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s[1U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s[1U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s[1U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.s[4U];
}

VL_INLINE_OPT void Vtest___024root___settle__TOP__9(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___settle__TOP__9\n"); );
    // Body
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[1U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.s[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[1U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.s[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[1U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.s[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[1U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.s[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s[1U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.s[4U];
}

VL_INLINE_OPT void Vtest___024root___combo__TOP__10(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___combo__TOP__10\n"); );
    // Body
    vlSelf->addr_o = (vlSelf->addr_i - 0x80000000ULL);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[4U];
}

VL_INLINE_OPT void Vtest___024root___sequent__TOP__11(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___sequent__TOP__11\n"); );
    // Variables
    CData/*0:0*/ __Vdly__top__DOT__fslu__DOT__idu__DOT__flag;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0;
    CData/*0:0*/ __Vdly__top__DOT__fslu__DOT__exu__DOT__flag;
    CData/*1:0*/ __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state;
    VlWide<5>/*128:0*/ __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend;
    VlWide<3>/*95:0*/ __Vtemp1173;
    VlWide<3>/*95:0*/ __Vtemp1174;
    VlWide<3>/*95:0*/ __Vtemp1175;
    VlWide<5>/*159:0*/ __Vtemp1189;
    VlWide<3>/*95:0*/ __Vtemp1195;
    VlWide<3>/*95:0*/ __Vtemp1196;
    VlWide<3>/*95:0*/ __Vtemp1202;
    VlWide<3>/*95:0*/ __Vtemp1203;
    VlWide<3>/*95:0*/ __Vtemp1207;
    VlWide<3>/*95:0*/ __Vtemp1208;
    VlWide<3>/*95:0*/ __Vtemp1209;
    VlWide<3>/*95:0*/ __Vtemp1215;
    VlWide<3>/*95:0*/ __Vtemp1216;
    VlWide<3>/*95:0*/ __Vtemp1217;
    VlWide<3>/*95:0*/ __Vtemp1235;
    VlWide<3>/*95:0*/ __Vtemp1236;
    VlWide<3>/*95:0*/ __Vtemp1237;
    VlWide<3>/*95:0*/ __Vtemp1246;
    VlWide<3>/*95:0*/ __Vtemp1247;
    VlWide<3>/*95:0*/ __Vtemp1248;
    VlWide<3>/*95:0*/ __Vtemp1258;
    VlWide<3>/*95:0*/ __Vtemp1270;
    VlWide<3>/*95:0*/ __Vtemp1271;
    VlWide<3>/*95:0*/ __Vtemp1272;
    VlWide<3>/*95:0*/ __Vtemp1281;
    VlWide<3>/*95:0*/ __Vtemp1282;
    VlWide<3>/*95:0*/ __Vtemp1283;
    VlWide<3>/*95:0*/ __Vtemp1293;
    VlWide<3>/*95:0*/ __Vtemp1305;
    VlWide<3>/*95:0*/ __Vtemp1306;
    VlWide<3>/*95:0*/ __Vtemp1307;
    VlWide<3>/*95:0*/ __Vtemp1316;
    VlWide<3>/*95:0*/ __Vtemp1317;
    VlWide<3>/*95:0*/ __Vtemp1318;
    VlWide<3>/*95:0*/ __Vtemp1328;
    VlWide<3>/*95:0*/ __Vtemp1340;
    VlWide<3>/*95:0*/ __Vtemp1341;
    VlWide<3>/*95:0*/ __Vtemp1342;
    VlWide<3>/*95:0*/ __Vtemp1351;
    VlWide<3>/*95:0*/ __Vtemp1352;
    VlWide<3>/*95:0*/ __Vtemp1353;
    VlWide<3>/*95:0*/ __Vtemp1363;
    VlWide<3>/*95:0*/ __Vtemp1375;
    VlWide<3>/*95:0*/ __Vtemp1376;
    VlWide<3>/*95:0*/ __Vtemp1377;
    VlWide<3>/*95:0*/ __Vtemp1386;
    VlWide<3>/*95:0*/ __Vtemp1387;
    VlWide<3>/*95:0*/ __Vtemp1388;
    VlWide<3>/*95:0*/ __Vtemp1398;
    VlWide<3>/*95:0*/ __Vtemp1410;
    VlWide<3>/*95:0*/ __Vtemp1411;
    VlWide<3>/*95:0*/ __Vtemp1412;
    VlWide<3>/*95:0*/ __Vtemp1421;
    VlWide<3>/*95:0*/ __Vtemp1422;
    VlWide<3>/*95:0*/ __Vtemp1423;
    VlWide<3>/*95:0*/ __Vtemp1433;
    VlWide<3>/*95:0*/ __Vtemp1445;
    VlWide<3>/*95:0*/ __Vtemp1446;
    VlWide<3>/*95:0*/ __Vtemp1447;
    VlWide<3>/*95:0*/ __Vtemp1456;
    VlWide<3>/*95:0*/ __Vtemp1457;
    VlWide<3>/*95:0*/ __Vtemp1458;
    VlWide<3>/*95:0*/ __Vtemp1468;
    VlWide<3>/*95:0*/ __Vtemp1480;
    VlWide<3>/*95:0*/ __Vtemp1481;
    VlWide<3>/*95:0*/ __Vtemp1482;
    VlWide<3>/*95:0*/ __Vtemp1491;
    VlWide<3>/*95:0*/ __Vtemp1492;
    VlWide<3>/*95:0*/ __Vtemp1493;
    VlWide<3>/*95:0*/ __Vtemp1503;
    VlWide<3>/*95:0*/ __Vtemp1515;
    VlWide<3>/*95:0*/ __Vtemp1516;
    VlWide<3>/*95:0*/ __Vtemp1517;
    VlWide<3>/*95:0*/ __Vtemp1526;
    VlWide<3>/*95:0*/ __Vtemp1527;
    VlWide<3>/*95:0*/ __Vtemp1528;
    VlWide<3>/*95:0*/ __Vtemp1538;
    VlWide<3>/*95:0*/ __Vtemp1550;
    VlWide<3>/*95:0*/ __Vtemp1551;
    VlWide<3>/*95:0*/ __Vtemp1552;
    VlWide<3>/*95:0*/ __Vtemp1561;
    VlWide<3>/*95:0*/ __Vtemp1562;
    VlWide<3>/*95:0*/ __Vtemp1563;
    VlWide<3>/*95:0*/ __Vtemp1573;
    VlWide<3>/*95:0*/ __Vtemp1585;
    VlWide<3>/*95:0*/ __Vtemp1586;
    VlWide<3>/*95:0*/ __Vtemp1587;
    VlWide<3>/*95:0*/ __Vtemp1596;
    VlWide<3>/*95:0*/ __Vtemp1597;
    VlWide<3>/*95:0*/ __Vtemp1598;
    VlWide<3>/*95:0*/ __Vtemp1608;
    VlWide<3>/*95:0*/ __Vtemp1620;
    VlWide<3>/*95:0*/ __Vtemp1621;
    VlWide<3>/*95:0*/ __Vtemp1622;
    VlWide<3>/*95:0*/ __Vtemp1631;
    VlWide<3>/*95:0*/ __Vtemp1632;
    VlWide<3>/*95:0*/ __Vtemp1633;
    VlWide<3>/*95:0*/ __Vtemp1643;
    VlWide<3>/*95:0*/ __Vtemp1655;
    VlWide<3>/*95:0*/ __Vtemp1656;
    VlWide<3>/*95:0*/ __Vtemp1657;
    VlWide<3>/*95:0*/ __Vtemp1666;
    VlWide<3>/*95:0*/ __Vtemp1667;
    VlWide<3>/*95:0*/ __Vtemp1668;
    VlWide<3>/*95:0*/ __Vtemp1678;
    VlWide<3>/*95:0*/ __Vtemp1690;
    VlWide<3>/*95:0*/ __Vtemp1691;
    VlWide<3>/*95:0*/ __Vtemp1692;
    VlWide<3>/*95:0*/ __Vtemp1701;
    VlWide<3>/*95:0*/ __Vtemp1702;
    VlWide<3>/*95:0*/ __Vtemp1703;
    VlWide<3>/*95:0*/ __Vtemp1713;
    VlWide<3>/*95:0*/ __Vtemp1725;
    VlWide<3>/*95:0*/ __Vtemp1726;
    VlWide<3>/*95:0*/ __Vtemp1727;
    VlWide<3>/*95:0*/ __Vtemp1736;
    VlWide<3>/*95:0*/ __Vtemp1737;
    VlWide<3>/*95:0*/ __Vtemp1738;
    VlWide<3>/*95:0*/ __Vtemp1748;
    VlWide<3>/*95:0*/ __Vtemp1760;
    VlWide<3>/*95:0*/ __Vtemp1761;
    VlWide<3>/*95:0*/ __Vtemp1762;
    VlWide<3>/*95:0*/ __Vtemp1771;
    VlWide<3>/*95:0*/ __Vtemp1772;
    VlWide<3>/*95:0*/ __Vtemp1773;
    VlWide<3>/*95:0*/ __Vtemp1783;
    VlWide<3>/*95:0*/ __Vtemp1795;
    VlWide<3>/*95:0*/ __Vtemp1796;
    VlWide<3>/*95:0*/ __Vtemp1797;
    VlWide<3>/*95:0*/ __Vtemp1806;
    VlWide<3>/*95:0*/ __Vtemp1807;
    VlWide<3>/*95:0*/ __Vtemp1808;
    VlWide<3>/*95:0*/ __Vtemp1818;
    VlWide<3>/*95:0*/ __Vtemp1830;
    VlWide<3>/*95:0*/ __Vtemp1831;
    VlWide<3>/*95:0*/ __Vtemp1832;
    VlWide<3>/*95:0*/ __Vtemp1841;
    VlWide<3>/*95:0*/ __Vtemp1842;
    VlWide<3>/*95:0*/ __Vtemp1843;
    VlWide<3>/*95:0*/ __Vtemp1853;
    VlWide<3>/*95:0*/ __Vtemp1865;
    VlWide<3>/*95:0*/ __Vtemp1866;
    VlWide<3>/*95:0*/ __Vtemp1867;
    VlWide<3>/*95:0*/ __Vtemp1876;
    VlWide<3>/*95:0*/ __Vtemp1877;
    VlWide<3>/*95:0*/ __Vtemp1878;
    VlWide<3>/*95:0*/ __Vtemp1888;
    VlWide<3>/*95:0*/ __Vtemp1900;
    VlWide<3>/*95:0*/ __Vtemp1901;
    VlWide<3>/*95:0*/ __Vtemp1902;
    VlWide<3>/*95:0*/ __Vtemp1911;
    VlWide<3>/*95:0*/ __Vtemp1912;
    VlWide<3>/*95:0*/ __Vtemp1913;
    VlWide<3>/*95:0*/ __Vtemp1923;
    VlWide<3>/*95:0*/ __Vtemp1935;
    VlWide<3>/*95:0*/ __Vtemp1936;
    VlWide<3>/*95:0*/ __Vtemp1937;
    VlWide<3>/*95:0*/ __Vtemp1946;
    VlWide<3>/*95:0*/ __Vtemp1947;
    VlWide<3>/*95:0*/ __Vtemp1948;
    VlWide<3>/*95:0*/ __Vtemp1958;
    VlWide<3>/*95:0*/ __Vtemp1970;
    VlWide<3>/*95:0*/ __Vtemp1971;
    VlWide<3>/*95:0*/ __Vtemp1972;
    VlWide<3>/*95:0*/ __Vtemp1981;
    VlWide<3>/*95:0*/ __Vtemp1982;
    VlWide<3>/*95:0*/ __Vtemp1983;
    VlWide<3>/*95:0*/ __Vtemp1993;
    VlWide<3>/*95:0*/ __Vtemp2005;
    VlWide<3>/*95:0*/ __Vtemp2006;
    VlWide<3>/*95:0*/ __Vtemp2007;
    VlWide<3>/*95:0*/ __Vtemp2016;
    VlWide<3>/*95:0*/ __Vtemp2017;
    VlWide<3>/*95:0*/ __Vtemp2018;
    VlWide<3>/*95:0*/ __Vtemp2028;
    VlWide<3>/*95:0*/ __Vtemp2040;
    VlWide<3>/*95:0*/ __Vtemp2041;
    VlWide<3>/*95:0*/ __Vtemp2042;
    VlWide<3>/*95:0*/ __Vtemp2051;
    VlWide<3>/*95:0*/ __Vtemp2052;
    VlWide<3>/*95:0*/ __Vtemp2053;
    VlWide<3>/*95:0*/ __Vtemp2063;
    VlWide<3>/*95:0*/ __Vtemp2075;
    VlWide<3>/*95:0*/ __Vtemp2076;
    VlWide<3>/*95:0*/ __Vtemp2077;
    VlWide<3>/*95:0*/ __Vtemp2086;
    VlWide<3>/*95:0*/ __Vtemp2087;
    VlWide<3>/*95:0*/ __Vtemp2088;
    VlWide<3>/*95:0*/ __Vtemp2098;
    VlWide<3>/*95:0*/ __Vtemp2110;
    VlWide<3>/*95:0*/ __Vtemp2111;
    VlWide<3>/*95:0*/ __Vtemp2112;
    VlWide<3>/*95:0*/ __Vtemp2121;
    VlWide<3>/*95:0*/ __Vtemp2122;
    VlWide<3>/*95:0*/ __Vtemp2123;
    VlWide<3>/*95:0*/ __Vtemp2133;
    VlWide<3>/*95:0*/ __Vtemp2145;
    VlWide<3>/*95:0*/ __Vtemp2146;
    VlWide<3>/*95:0*/ __Vtemp2147;
    VlWide<3>/*95:0*/ __Vtemp2156;
    VlWide<3>/*95:0*/ __Vtemp2157;
    VlWide<3>/*95:0*/ __Vtemp2158;
    VlWide<3>/*95:0*/ __Vtemp2168;
    VlWide<3>/*95:0*/ __Vtemp2180;
    VlWide<3>/*95:0*/ __Vtemp2181;
    VlWide<3>/*95:0*/ __Vtemp2182;
    VlWide<3>/*95:0*/ __Vtemp2191;
    VlWide<3>/*95:0*/ __Vtemp2192;
    VlWide<3>/*95:0*/ __Vtemp2193;
    VlWide<3>/*95:0*/ __Vtemp2203;
    VlWide<3>/*95:0*/ __Vtemp2215;
    VlWide<3>/*95:0*/ __Vtemp2216;
    VlWide<3>/*95:0*/ __Vtemp2217;
    VlWide<3>/*95:0*/ __Vtemp2226;
    VlWide<3>/*95:0*/ __Vtemp2227;
    VlWide<3>/*95:0*/ __Vtemp2228;
    VlWide<3>/*95:0*/ __Vtemp2238;
    VlWide<3>/*95:0*/ __Vtemp2250;
    VlWide<3>/*95:0*/ __Vtemp2251;
    VlWide<3>/*95:0*/ __Vtemp2252;
    VlWide<3>/*95:0*/ __Vtemp2261;
    VlWide<3>/*95:0*/ __Vtemp2262;
    VlWide<3>/*95:0*/ __Vtemp2263;
    VlWide<3>/*95:0*/ __Vtemp2273;
    VlWide<3>/*95:0*/ __Vtemp2285;
    VlWide<3>/*95:0*/ __Vtemp2286;
    VlWide<3>/*95:0*/ __Vtemp2287;
    VlWide<3>/*95:0*/ __Vtemp2296;
    VlWide<3>/*95:0*/ __Vtemp2297;
    VlWide<3>/*95:0*/ __Vtemp2298;
    VlWide<3>/*95:0*/ __Vtemp2308;
    QData/*63:0*/ __Vdlyvval__top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0;
    // Body
    __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state;
    __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U];
    __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U];
    __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U];
    __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U];
    __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U];
    __Vdly__top__DOT__fslu__DOT__idu__DOT__flag = vlSelf->top__DOT__fslu__DOT__idu__DOT__flag;
    __Vdly__top__DOT__fslu__DOT__exu__DOT__flag = vlSelf->top__DOT__fslu__DOT__exu__DOT__flag;
    __Vdlyvset__top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0 = 0U;
    if (vlSelf->rst) {
        vlSelf->top__DOT__fslu__DOT__ifu__DOT__ce_reg = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__fslu__DOT__stall) 
                         >> 5U)))) {
        vlSelf->top__DOT__fslu__DOT__ifu__DOT__ce_reg = 1U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__fslu__DOT__ifu__DOT__pc_reg = 0x80000000ULL;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__fslu__DOT__stall) 
                         >> 5U)))) {
        vlSelf->top__DOT__fslu__DOT__ifu__DOT__pc_reg 
            = vlSelf->top__DOT__fslu__DOT__ifu__DOT__next_pc;
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[3U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over = 0U;
    } else if ((2U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state))) {
        if ((1U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[0U] 
                = (IData)((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U]))));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[1U] 
                = (IData)(((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U]))) 
                           >> 0x20U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[2U] 
                = (IData)((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U])) 
                            << 0x3fU) | (((QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                          << 0x1fU) 
                                         | ((QData)((IData)(
                                                            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U])) 
                                            >> 1U))));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[3U] 
                = (IData)(((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U])) 
                             << 0x3fU) | (((QData)((IData)(
                                                           vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                           << 0x1fU) 
                                          | ((QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U])) 
                                             >> 1U))) 
                           >> 0x20U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over = 1U;
            if ((1U & (~ (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_start)))) {
                __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state = 0U;
                vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over = 0U;
                vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[0U] = 0U;
                vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[1U] = 0U;
                vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[2U] = 0U;
                vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[3U] = 0U;
            }
        } else if ((0x40U != (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__cnt))) {
            if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[2U])) {
                __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] 
                    = (vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] 
                       << 1U);
                __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] 
                    = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] 
                        >> 0x1fU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] 
                                     << 1U));
                __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] 
                    = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] 
                        >> 0x1fU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] 
                                     << 1U));
                __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] 
                    = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] 
                        >> 0x1fU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] 
                                     << 1U));
                __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U] 
                    = (vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] 
                       >> 0x1fU);
            } else {
                __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] 
                    = (1U | ((IData)((((QData)((IData)(
                                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U])))) 
                             << 1U));
                __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] 
                    = (((IData)((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U])))) 
                        >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U]))) 
                                              >> 0x20U)) 
                                     << 1U));
                __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] 
                    = (((IData)(((((QData)((IData)(
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U]))) 
                                 >> 0x20U)) >> 0x1fU) 
                       | ((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[0U])))) 
                          << 1U));
                __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] 
                    = (((IData)((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[0U])))) 
                        >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[0U]))) 
                                              >> 0x20U)) 
                                     << 1U));
                __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U] 
                    = ((IData)(((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[0U]))) 
                                >> 0x20U)) >> 0x1fU);
            }
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__cnt 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__cnt)));
        } else {
            if (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_signed) 
                 & ((IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1_i 
                             >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2_i 
                                                   >> 0x3fU))))) {
                __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] 
                    = (IData)((1ULL + (~ (((QData)((IData)(
                                                           vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U]))))));
                __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] 
                    = (IData)(((1ULL + (~ (((QData)((IData)(
                                                            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U]))))) 
                               >> 0x20U));
            }
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__cnt = 0U;
            if (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_signed) 
                 & ((IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1_i 
                             >> 0x3fU)) ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U]))) {
                __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] 
                    = ((1U & __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U]) 
                       | ((IData)((1ULL + (~ (((QData)((IData)(
                                                               vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U])) 
                                               << 0x3fU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U])) 
                                                    >> 1U)))))) 
                          << 1U));
                __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] 
                    = (((IData)((1ULL + (~ (((QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U])) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U])) 
                                                  >> 1U)))))) 
                        >> 0x1fU) | ((IData)(((1ULL 
                                               + (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U])) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                                       << 0x1fU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U])) 
                                                         >> 1U))))) 
                                              >> 0x20U)) 
                                     << 1U));
                __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U] 
                    = ((IData)(((1ULL + (~ (((QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U])) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U])) 
                                                  >> 1U))))) 
                                >> 0x20U)) >> 0x1fU);
            }
            __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state))) {
        __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] = 0U;
        __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] = 0U;
        __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] = 0U;
        __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] = 0U;
        __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U] = 0U;
        __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state = 3U;
    } else if (vlSelf->top__DOT__fslu__DOT__exu__DOT__div_start) {
        if ((0ULL == vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2_i)) {
            __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state = 1U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__cnt = 0U;
            __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] = 0U;
            __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] = 0U;
            __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] = 0U;
            __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] = 0U;
            __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U] = 0U;
            __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state = 2U;
            __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] 
                = ((1U & __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U]) 
                   | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op1) 
                      << 1U));
            __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] 
                = (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op1) 
                    >> 0x1fU) | ((IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op1 
                                          >> 0x20U)) 
                                 << 1U));
            __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] 
                = ((0xfffffffeU & __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U]) 
                   | ((IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op1 
                               >> 0x20U)) >> 0x1fU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__divisor 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op2;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op1 
                = (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_signed) 
                    & (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1_i 
                               >> 0x3fU))) ? (1ULL 
                                              + (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1_i))
                    : vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1_i);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op2 
                = (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_signed) 
                    & (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2_i 
                               >> 0x3fU))) ? (1ULL 
                                              + (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2_i))
                    : vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2_i);
        }
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[3U] = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[2U] = 0U;
        __Vdly__top__DOT__fslu__DOT__idu__DOT__flag = 0U;
        vlSelf->top__DOT__fslu__DOT__idu__DOT__buf_inst = 0U;
    } else if ((4U & (IData)(vlSelf->top__DOT__fslu__DOT__stall))) {
        vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__idu__DOT__buf_inst = 0U;
        __Vdly__top__DOT__fslu__DOT__idu__DOT__flag = 0U;
    } else if ((1U & ((IData)((0U != (6U & (IData)(vlSelf->top__DOT__fslu__DOT__stall)))) 
                      & (~ (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__flag))))) {
        vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U] 
            = vlSelf->top__DOT__fslu__DOT__if_to_id_bus[0U];
        vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U] 
            = vlSelf->top__DOT__fslu__DOT__if_to_id_bus[1U];
        vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[2U] 
            = vlSelf->top__DOT__fslu__DOT__if_to_id_bus[2U];
        vlSelf->top__DOT__fslu__DOT__idu__DOT__buf_inst 
            = vlSelf->isram_rdata;
        __Vdly__top__DOT__fslu__DOT__idu__DOT__flag = 1U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__fslu__DOT__stall) 
                         >> 5U)))) {
        vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U] 
            = vlSelf->top__DOT__fslu__DOT__if_to_id_bus[0U];
        vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U] 
            = vlSelf->top__DOT__fslu__DOT__if_to_id_bus[1U];
        vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[2U] 
            = vlSelf->top__DOT__fslu__DOT__if_to_id_bus[2U];
        vlSelf->top__DOT__fslu__DOT__idu__DOT__buf_inst 
            = vlSelf->isram_rdata;
        __Vdly__top__DOT__fslu__DOT__idu__DOT__flag = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (VL_UNLIKELY(((vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                          >> 5U) & (0U != (0x1fU & 
                                           vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]))))) {
            VL_WRITEF("rd = %x\n",64,(((QData)((IData)(
                                                       vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U]))));
            __Vdlyvval__top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0 
                = (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])));
            __Vdlyvset__top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0 = 1U;
            __Vdlyvdim0__top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0 
                = (0x1fU & vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]);
        }
    }
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state 
        = __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state;
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U] 
        = __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U] 
        = __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U] 
        = __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U] 
        = __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U] 
        = __Vdly__top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[4U];
    vlSelf->top__DOT__fslu__DOT__idu__DOT__flag = __Vdly__top__DOT__fslu__DOT__idu__DOT__flag;
    if (__Vdlyvset__top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0) {
        vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[__Vdlyvdim0__top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0] 
            = __Vdlyvval__top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs__v0;
    }
    vlSelf->isram_e = vlSelf->top__DOT__fslu__DOT__ifu__DOT__ce_reg;
    vlSelf->isram_addr = vlSelf->top__DOT__fslu__DOT__ifu__DOT__pc_reg;
    vlSelf->top__DOT__fslu__DOT__if_to_id_bus[0U] = (IData)(vlSelf->top__DOT__fslu__DOT__ifu__DOT__pc_reg);
    vlSelf->top__DOT__fslu__DOT__if_to_id_bus[1U] = (IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__ifu__DOT__pc_reg 
                                                             >> 0x20U));
    vlSelf->top__DOT__fslu__DOT__if_to_id_bus[2U] = vlSelf->top__DOT__fslu__DOT__ifu__DOT__ce_reg;
    VL_EXTEND_WQ(65,64, __Vtemp1173, (((QData)((IData)(
                                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U]))));
    VL_EXTEND_WQ(65,64, __Vtemp1174, vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__divisor);
    VL_SUB_W(3, __Vtemp1175, __Vtemp1173, __Vtemp1174);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[0U] 
        = __Vtemp1175[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[1U] 
        = __Vtemp1175[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[2U] 
        = (1U & __Vtemp1175[2U]);
    if (vlSelf->rst) {
        vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[3U] = 0U;
        vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[4U] = 0U;
    } else {
        vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U] 
            = (IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__rf_wdata);
        vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U] 
            = (IData)((vlSelf->top__DOT__fslu__DOT__memu__DOT__rf_wdata 
                       >> 0x20U));
        vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
            = (((IData)((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])) 
                          << 0x33U) | (((QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[3U])) 
                                        << 0x13U) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])) 
                                        >> 0xdU)))) 
                << 6U) | ((0x20U & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U]) 
                          | (0x1fU & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])));
        vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[3U] 
            = (((IData)((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])) 
                          << 0x33U) | (((QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[3U])) 
                                        << 0x13U) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])) 
                                        >> 0xdU)))) 
                >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])) 
                                        << 0x33U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[3U])) 
                                         << 0x13U) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])) 
                                           >> 0xdU))) 
                                      >> 0x20U)) << 6U));
        vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[4U] 
            = ((IData)(((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])) 
                          << 0x33U) | (((QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[3U])) 
                                        << 0x13U) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])) 
                                        >> 0xdU))) 
                        >> 0x20U)) >> 0x1aU);
    }
    vlSelf->debug_wb_pc = (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[4U])) 
                            << 0x3aU) | (((QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[3U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U])) 
                                            >> 6U)));
    vlSelf->bubble = (1U & (~ (vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[4U] 
                               >> 5U)));
    __Vtemp1189[2U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                  << 0x24U) | (((QData)((IData)(
                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                  >> 0x1cU)))) 
                        << 0xdU) | ((0x1000U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                << 4U)) 
                                    | ((0x800U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                  << 4U)) 
                                       | ((0xffffff80U 
                                           & ((0x400U 
                                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                  >> 0x13U)) 
                                              | ((0x200U 
                                                  & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                     >> 0x15U)) 
                                                 | ((0x100U 
                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                        >> 0x17U)) 
                                                    | (0x80U 
                                                       & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[9U] 
                                                          << 7U)))))) 
                                          | ((0x40U 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                 << 6U)) 
                                             | ((0x20U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                    >> 1U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                      >> 1U))))))));
    if (vlSelf->rst) {
        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[3U] = 0U;
        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] = 0U;
        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[5U] = 0U;
        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[6U] = 0U;
    } else {
        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[0U] 
            = (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_result);
        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[1U] 
            = (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_result 
                       >> 0x20U));
        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U] 
            = __Vtemp1189[2U];
        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[3U] 
            = (((IData)((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                          << 0x24U) | (((QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                        << 4U) | ((QData)((IData)(
                                                                  vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                  >> 0x1cU)))) 
                >> 0x13U) | ((IData)(((((QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                   >> 0x1cU))) 
                                      >> 0x20U)) << 0xdU));
        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] 
            = (((IData)(vlSelf->top__DOT__dsram_rdata) 
                << 0x14U) | ((0xfe000U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                          >> 6U)) | 
                             ((IData)(((((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                              >> 0x1cU))) 
                                       >> 0x20U)) >> 0x13U)));
        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[5U] 
            = (((IData)(vlSelf->top__DOT__dsram_rdata) 
                >> 0xcU) | ((IData)((vlSelf->top__DOT__dsram_rdata 
                                     >> 0x20U)) << 0x14U));
        vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[6U] 
            = ((IData)((vlSelf->top__DOT__dsram_rdata 
                        >> 0x20U)) >> 0xcU);
    }
    vlSelf->top__DOT__fslu__DOT__memu__DOT__b_data 
        = ((0x80U & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])
            ? (0xffU & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] 
                        >> 0x14U)) : 0U);
    vlSelf->top__DOT__fslu__DOT__memu__DOT__h_data 
        = ((0x100U & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])
            ? (0xffffU & ((vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[5U] 
                           << 0xcU) | (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] 
                                       >> 0x14U))) : 0U);
    vlSelf->top__DOT__fslu__DOT__memu__DOT__w_data 
        = ((0x200U & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])
            ? ((vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[5U] 
                << 0xcU) | (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] 
                            >> 0x14U)) : 0U);
    if (vlSelf->rst) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[9U] = 0U;
        __Vdly__top__DOT__fslu__DOT__exu__DOT__flag = 0U;
    } else if ((1U & ((((IData)(vlSelf->top__DOT__fslu__DOT__stall) 
                        >> 1U) | (IData)(vlSelf->top__DOT__fslu__DOT__stall)) 
                      & (~ (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__flag))))) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[0U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[1U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[2U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[3U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[4U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[5U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[6U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[7U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[8U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[9U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[9U];
        __Vdly__top__DOT__fslu__DOT__exu__DOT__flag = 1U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__fslu__DOT__stall) 
                         >> 5U)))) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[0U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[1U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[2U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[3U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[4U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[5U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[6U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[7U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[8U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[9U] 
            = vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[9U];
        __Vdly__top__DOT__fslu__DOT__exu__DOT__flag = 0U;
    }
    vlSelf->top__DOT__fslu__DOT__memu__DOT__rf_wdata 
        = ((1U & ((vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U] 
                   >> 6U) & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U] 
                             >> 0xcU))) ? ((0x80000U 
                                            & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                            ? (((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__b_data) 
                                                                       >> 7U))))) 
                                                << 8U) 
                                               | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__b_data)))
                                            : ((0x8000U 
                                                & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                ? (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__b_data))
                                                : (
                                                   (0x40000U 
                                                    & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__h_data) 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__h_data)))
                                                    : 
                                                   ((0x4000U 
                                                     & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                     ? (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__h_data))
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__memu__DOT__w_data 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__w_data)))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                       ? (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__w_data))
                                                       : 
                                                      ((0x10000U 
                                                        & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                        ? 
                                                       ((0x400U 
                                                         & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[6U])) 
                                                          << 0x2cU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[5U])) 
                                                             << 0xcU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])) 
                                                               >> 0x14U)))
                                                         : 0ULL)
                                                        : 0ULL)))))))
            : (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__flag = __Vdly__top__DOT__fslu__DOT__exu__DOT__flag;
    vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[0U] 
        = (IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__rf_wdata);
    vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[1U] 
        = (IData)((vlSelf->top__DOT__fslu__DOT__memu__DOT__rf_wdata 
                   >> 0x20U));
    vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
        = ((0x20U & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U]) 
           | (0x1fU & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U]));
    if ((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                >> 0x10U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[9U] 
                             >> 1U)))) {
        Vtest___024root____Vdpiimwrap_top__DOT__fslu__DOT__exu__DOT__ebreak_TOP();
    }
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_S = 
        ((0xfe0U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                    >> 0x10U)) | (0x1fU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                           >> 3U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_J = 
        ((0x100000U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                       >> 7U)) | ((0xff000U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                               << 4U)) 
                                  | ((0x800U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                >> 5U)) 
                                     | (0x7feU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                  >> 0x10U)))));
    vlSelf->dsram_e = (1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                             >> 8U));
    vlSelf->dsram_we = (1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                              >> 7U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo 
        = ((4U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo)) 
           | ((2U & (((0xffffeU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                   >> 0xcU)) | (0x1ffffeU 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                   >> 0xbU))) 
                     | (0xffffeU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                    >> 0xcU)))) | (1U 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                      >> 0xaU))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo 
        = ((3U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo)) 
           | (4U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                    >> 0xcU)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_res_sel 
        = ((2U & ((((0xffffffeU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                   >> 4U)) | (0x1ffffffeU 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                 >> 3U))) 
                   | (0x3ffffffeU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                     >> 2U))) | (0x7ffffffeU 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                    >> 1U)))) 
           | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                       >> 9U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                 >> 8U)) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 7U)) 
                    | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                       >> 6U))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B = 
        ((0x1000U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                     >> 0xfU)) | ((0x800U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                             << 8U)) 
                                  | ((0x7e0U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                >> 0x10U)) 
                                     | (0x1eU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                 >> 3U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_signed 
        = (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                    >> 9U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                              >> 7U)) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                         >> 5U)) | 
                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                  >> 3U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned 
        = (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                    >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                              >> 6U)) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                         >> 4U)) | 
                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                  >> 2U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                      >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                   >> 0x19U)) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                 >> 0x18U))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
        = ((0x4000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
            ? (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                << 0x24U) | (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                              << 4U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                        >> 0x1cU)))
            : ((0x8000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                ? 0ULL : ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_rs1_forward)
                           ? vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_forward_data
                           : (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U]))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend 
        = (((- (QData)((IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                      >> 0x1bU))))) 
            << 0xcU) | (QData)((IData)((0xfffU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                  >> 0x10U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2 
        = ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_rs2_forward)
            ? vlSelf->top__DOT__fslu__DOT__exu__DOT__rs2_forward_data
            : (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 
        = ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_rs1_forward)
            ? vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_forward_data
            : (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp 
        = ((2U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_res_sel))
            ? (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[0U])))
            : ((1U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_res_sel))
                ? (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[2U])))
                : 0ULL));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend 
        = (((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B) 
                                      >> 0xbU))))) 
            << 0xcU) | (QData)((IData)((0xfffU & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_src_temp 
        = (((0x100000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
             ? 0U : 1U) ? (((QData)((IData)((((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1) 
                                              << 0x1fU) 
                                             | ((0x40000000U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                             >> 1U)) 
                                                    << 0x1eU)) 
                                                | ((0x20000000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                >> 2U)) 
                                                       << 0x1dU)) 
                                                   | ((0x10000000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                   >> 3U)) 
                                                          << 0x1cU)) 
                                                      | ((0x8000000U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                      >> 4U)) 
                                                             << 0x1bU)) 
                                                         | ((0x4000000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                         >> 5U)) 
                                                                << 0x1aU)) 
                                                            | ((0x2000000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                            >> 6U)) 
                                                                   << 0x19U)) 
                                                               | ((0x1000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                               >> 7U)) 
                                                                      << 0x18U)) 
                                                                  | ((0x800000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 8U)) 
                                                                         << 0x17U)) 
                                                                     | ((0x400000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 9U)) 
                                                                            << 0x16U)) 
                                                                        | ((0x200000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xaU)) 
                                                                               << 0x15U)) 
                                                                           | ((0x100000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xbU)) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (((IData)(
                                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                   >> 0x20U)) 
                                                          << 0x1fU) 
                                                         | ((0x40000000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                         >> 0x21U)) 
                                                                << 0x1eU)) 
                                                            | ((0x20000000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                            >> 0x22U)) 
                                                                   << 0x1dU)) 
                                                               | ((0x10000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                               >> 0x23U)) 
                                                                      << 0x1cU)) 
                                                                  | ((0x8000000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x24U)) 
                                                                         << 0x1bU)) 
                                                                     | ((0x4000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x25U)) 
                                                                            << 0x1aU)) 
                                                                        | ((0x2000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x26U)) 
                                                                               << 0x19U)) 
                                                                           | ((0x1000000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x27U)) 
                                                                                << 0x18U)) 
                                                                              | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x28U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x29U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2aU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2bU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3fU)))))))))))))))))))))))))))))))))))))
            : vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1);
    VL_EXTEND_WI(65,32, __Vtemp1195, (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1));
    VL_EXTEND_WQ(65,64, __Vtemp1196, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1);
    if ((0x4000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
            = __Vtemp1195[0U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
            = __Vtemp1195[1U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[2U] 
            = __Vtemp1195[2U];
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
            = __Vtemp1196[0U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
            = __Vtemp1196[1U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[2U] 
            = __Vtemp1196[2U];
    }
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2 
        = ((0x400U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
            ? vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend
            : ((0x800U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                ? (((QData)((IData)((- (IData)((1U 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                   >> 0x1bU)))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                    << 4U)))))
                : ((0x1000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                    ? (QData)((IData)((0x3fU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                >> 0x10U))))
                    : ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_rs2_forward)
                        ? vlSelf->top__DOT__fslu__DOT__exu__DOT__rs2_forward_data
                        : (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
        = (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
        = (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2 
                   >> 0x20U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
        = (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                    >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                >> 0xdU)) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                             >> 0xaU)) 
                 & (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2 
                            >> 0x3fU))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2 
        = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 
            == vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
            ? 1U : 0U);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
        = (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
        = (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 
                   >> 0x20U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[2U] 
        = (1U & (((((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                     >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                 >> 0xdU)) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                              >> 0xcU)) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                     >> 0xaU)) & (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 
                                          >> 0x3fU))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_addr 
        = ((0x20U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op))
            ? (4ULL + ((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                         << 0x24U) | (((QData)((IData)(
                                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                       << 4U) | ((QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                 >> 0x1cU))) 
                       + vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
            : ((0x10U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op))
                ? (4ULL + ((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                             << 0x24U) | (((QData)((IData)(
                                                           vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                           << 4U) | 
                                          ((QData)((IData)(
                                                           vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                           >> 0x1cU))) 
                           + vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                : ((8U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op))
                    ? (4ULL + ((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                 << 0x24U) | (((QData)((IData)(
                                                               vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                 >> 0x1cU))) 
                               + vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                    : ((4U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op))
                        ? (4ULL + ((((QData)((IData)(
                                                     vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                     << 0x24U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                     >> 0x1cU))) 
                                   + vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                        : ((2U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op))
                            ? (4ULL + ((((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                              >> 0x1cU))) 
                                       + vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                            : ((1U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op))
                                ? (4ULL + ((((QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                  >> 0x1cU))) 
                                           + vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                                : ((0x80U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op))
                                    ? (4ULL + ((((QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                      >> 0x1cU))) 
                                               + vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                                    : ((0x40U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op))
                                        ? (4ULL + (
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                          >> 0x1cU))) 
                                                   + 
                                                   (0xfffffffffffffffeULL 
                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend)))
                                        : 0ULL))))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_src_temp, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b 
        = ((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                    >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                 >> 0x19U)) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                               >> 0x18U)))
            ? (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)
            : vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0U]) | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                            >> 1U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0U]) | (2U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              << 1U))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[1U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [1U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 1U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                        >> 2U)) & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 3U))) 
                           + (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                   >> 1U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 2U))) 
                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                 >> 3U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[1U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [1U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 1U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 2U)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 3U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 2U)) 
                                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                              >> 3U))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[2U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [2U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 3U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                        >> 4U)) & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 5U))) 
                           + (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                   >> 3U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 4U))) 
                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                 >> 5U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[2U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [2U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 3U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 4U)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 5U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 4U)) 
                                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                              >> 5U))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[3U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [3U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 5U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                        >> 6U)) & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 7U))) 
                           + (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                   >> 5U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 6U))) 
                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                 >> 7U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[3U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [3U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 5U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 6U)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 7U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 6U)) 
                                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                              >> 7U))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[4U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [4U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 7U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                        >> 8U)) & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 9U))) 
                           + (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                   >> 7U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 8U))) 
                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                 >> 9U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[4U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [4U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 7U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 8U)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 9U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 8U)) 
                                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                              >> 9U))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[5U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [5U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 9U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                        >> 0xaU)) & 
                            (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0xbU))) + (((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 9U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0xaU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0xbU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[5U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [5U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 9U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0xaU)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0xbU)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0xaU)) 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                >> 0xbU))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[6U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [6U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 0xbU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                          >> 0xcU)) 
                            & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0xdU))) + (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0xbU)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                     >> 0xcU))) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0xdU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[6U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [6U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0xbU)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 0xcU)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0xdU)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0xcU)) 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                >> 0xdU))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[7U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [7U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 0xdU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                          >> 0xeU)) 
                            & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0xfU))) + (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0xdU)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                     >> 0xeU))) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0xfU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[7U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [7U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0xdU)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 0xeU)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0xfU)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0xeU)) 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                >> 0xfU))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[8U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [8U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 0xfU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                          >> 0x10U)) 
                            & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x11U))) + (((~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 0xfU)) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x10U))) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 0x11U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[8U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [8U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0xfU)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 0x10U)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x11U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x10U)) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0x11U))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[9U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [9U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 0x11U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                           >> 0x12U)) 
                            & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x13U))) + (((~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 0x11U)) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x12U))) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 0x13U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[9U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [9U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x11U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                >> 0x12U)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x13U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x12U)) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0x13U))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xaU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xaU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x13U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x14U)) 
                              & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x15U))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x13U)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x14U))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x15U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xaU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xaU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x13U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x14U)) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x15U)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x14U)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x15U))) 
                             << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xbU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xbU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x15U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x16U)) 
                              & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x17U))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x15U)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x16U))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x17U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xbU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xbU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x15U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x16U)) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x17U)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x16U)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x17U))) 
                             << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xcU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xcU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x17U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x18U)) 
                              & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x19U))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x17U)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x18U))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x19U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xcU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xcU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x17U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x18U)) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x19U)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x18U)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x19U))) 
                             << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xdU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xdU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x19U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x1aU)) 
                              & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x1bU))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x19U)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x1aU))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x1bU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xdU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xdU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x19U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1aU)) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x1bU)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1aU)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x1bU))) 
                             << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xeU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xeU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x1bU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x1cU)) 
                              & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x1dU))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x1bU)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x1cU))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x1dU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xeU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xeU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x1bU)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1cU)) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x1dU)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1cU)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x1dU))) 
                             << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xfU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xfU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x1dU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x1eU)) 
                              & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x1fU))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x1dU)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x1eU))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x1fU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xfU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xfU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x1dU)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1eU)) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x1fU)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1eU)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x1fU))) 
                             << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x10U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x10U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                 >> 0x1fU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U]) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 1U))) + (((~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 0x1fU)) 
                                                  & (~ 
                                                     vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U])) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 1U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x10U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x10U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                     >> 0x1fU)) & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U]) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 1U)) + ((~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U]) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                 >> 1U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x11U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x11U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 1U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                           >> 2U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 3U))) + (((~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 1U)) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 2U))) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 3U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x11U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x11U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 1U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                >> 2U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 3U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 2U)) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                 >> 3U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x12U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x12U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 3U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                           >> 4U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 5U))) + (((~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 3U)) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 4U))) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 5U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x12U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x12U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 3U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                >> 4U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 5U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 4U)) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                 >> 5U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x13U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x13U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 5U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                           >> 6U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 7U))) + (((~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 5U)) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 6U))) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 7U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x13U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x13U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 5U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                >> 6U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 7U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 6U)) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                 >> 7U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x14U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x14U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 7U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                           >> 8U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 9U))) + (((~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 7U)) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 8U))) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 9U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x14U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x14U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 7U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                >> 8U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 9U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 8U)) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                 >> 9U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x15U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x15U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 9U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                           >> 0xaU)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xbU))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 9U)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                        >> 0xaU))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 0xbU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x15U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x15U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 9U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                >> 0xaU)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0xbU)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0xaU)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0xbU))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x16U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x16U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0xbU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                             >> 0xcU)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xdU))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 0xbU)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                        >> 0xcU))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 0xdU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x16U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x16U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xbU)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0xcU)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0xdU)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0xcU)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0xdU))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x17U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x17U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0xdU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                             >> 0xeU)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xfU))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 0xdU)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                        >> 0xeU))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 0xfU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x17U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x17U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xdU)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0xeU)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0xfU)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0xeU)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0xfU))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x18U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x18U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0xfU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                             >> 0x10U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x11U))) + 
                              (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0xfU)) & (~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0x10U))) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x11U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x18U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x18U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xfU)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0x10U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x11U)) + ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x10U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x11U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x19U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x19U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x11U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x12U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x13U))) + 
                              (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x11U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x12U))) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x13U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x19U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x19U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x11U)) & (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x12U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x13U)) + ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x12U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x13U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1aU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1aU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x13U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x14U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x15U))) + 
                              (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x13U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x14U))) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x15U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1aU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1aU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x13U)) & (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x14U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x15U)) + ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x14U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x15U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1bU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1bU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x15U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x16U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x17U))) + 
                              (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x15U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x16U))) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x17U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1bU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1bU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x15U)) & (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x16U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x17U)) + ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x16U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x17U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1cU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1cU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x17U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x18U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x19U))) + 
                              (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x17U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x18U))) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x19U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1cU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1cU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x17U)) & (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x18U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x19U)) + ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x18U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x19U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1dU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1dU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x19U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x1aU)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x1bU))) + 
                              (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x19U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1aU))) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x1bU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1dU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1dU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x19U)) & (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1aU)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x1bU)) + ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1aU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x1bU))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1eU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1eU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x1bU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x1cU)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x1dU))) + 
                              (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x1bU)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1cU))) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x1dU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1eU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1eU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x1bU)) & (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1cU)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x1dU)) + ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1cU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x1dU))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1fU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1fU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x1dU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x1eU)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x1fU))) + 
                              (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x1dU)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1eU))) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x1fU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1fU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1fU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x1dU)) & (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1eU)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x1fU)) + ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1eU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x1fU))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__br_bus[0U] = (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_addr);
    vlSelf->top__DOT__fslu__DOT__br_bus[1U] = (IData)(
                                                      (vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_addr 
                                                       >> 0x20U));
    vlSelf->top__DOT__fslu__DOT__br_bus[2U] = (1U & 
                                               (((((((IData)(
                                                             (0U 
                                                              != 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op)))) 
                                                     | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                         >> 5U) 
                                                        & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2))) 
                                                    | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                        >> 4U) 
                                                       & (~ (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2)))) 
                                                   | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                       >> 3U) 
                                                      & (VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1, vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
                                                          ? 1U
                                                          : 0U))) 
                                                  | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                      >> 2U) 
                                                     & (VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1, vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
                                                         ? 1U
                                                         : 0U))) 
                                                 | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                     >> 1U) 
                                                    & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 
                                                        < vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
                                                        ? 1U
                                                        : 0U))) 
                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                   & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 
                                                       >= vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
                                                       ? 1U
                                                       : 0U))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res 
        = (((QData)((IData)((((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                        >> 1U)) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                           >> 2U)) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                              >> 3U)) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                 >> 4U)) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                    >> 5U)) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                       >> 6U)) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                          >> 7U)) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                             >> 8U)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 9U)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xaU)) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xbU)) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))) 
            << 0x20U) | (QData)((IData)((((IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                   >> 0x20U)) 
                                          << 0x1fU) 
                                         | ((0x40000000U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                         >> 0x21U)) 
                                                << 0x1eU)) 
                                            | ((0x20000000U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                            >> 0x22U)) 
                                                   << 0x1dU)) 
                                               | ((0x10000000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                               >> 0x23U)) 
                                                      << 0x1cU)) 
                                                  | ((0x8000000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                  >> 0x24U)) 
                                                         << 0x1bU)) 
                                                     | ((0x4000000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                     >> 0x25U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                        >> 0x26U)) 
                                                               << 0x19U)) 
                                                           | ((0x1000000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                           >> 0x27U)) 
                                                                  << 0x18U)) 
                                                              | ((0x800000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                              >> 0x28U)) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x29U)) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2aU)) 
                                                                           << 0x15U)) 
                                                                       | ((0x100000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2bU)) 
                                                                              << 0x14U)) 
                                                                          | ((0x80000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                             | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3fU)))))))))))))))))))))))))))))))))))));
    VL_EXTEND_WI(65,32, __Vtemp1202, (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b));
    VL_EXTEND_WQ(65,64, __Vtemp1203, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b);
    if ((0x4000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
            = __Vtemp1202[0U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
            = __Vtemp1202[1U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[2U] 
            = __Vtemp1202[2U];
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
            = __Vtemp1203[0U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
            = __Vtemp1203[1U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[2U] 
            = __Vtemp1203[2U];
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0U])) {
            __Vtemp1207[0U] = 1U;
            __Vtemp1207[1U] = 0U;
            __Vtemp1207[2U] = 0U;
            __Vtemp1208[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1208[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1208[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1209, __Vtemp1207, __Vtemp1208);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0U][0U] 
                = __Vtemp1209[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0U][1U] 
                = __Vtemp1209[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0U][2U] 
                = (1U & __Vtemp1209[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][0U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                [0U][0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][1U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                [0U][1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][2U] 
                = (((IData)((- (QData)((IData)((1U 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0U][2U]))))) 
                    << 1U) | vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0U][2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][3U] 
                = (((IData)((- (QData)((IData)((1U 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0U][2U]))))) 
                    >> 0x1fU) | ((IData)(((- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0U][2U])))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][4U] 
                = ((IData)(((- (QData)((IData)((1U 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0U][2U])))) 
                            >> 0x20U)) >> 0x1fU);
        } else {
            __Vtemp1215[0U] = 1U;
            __Vtemp1215[1U] = 0U;
            __Vtemp1215[2U] = 0U;
            __Vtemp1216[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1216[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1216[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1217, __Vtemp1215, __Vtemp1216);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0U][0U] 
                = (__Vtemp1217[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0U][1U] 
                = ((__Vtemp1217[0U] >> 0x1fU) | (__Vtemp1217[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0U][2U] 
                = ((__Vtemp1217[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1217[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][0U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                [0U][0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][1U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                [0U][1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][2U] 
                = (((IData)((0x7fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [0U][2U] 
                                                      >> 1U))))))) 
                    << 2U) | vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0U][2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][3U] 
                = (((IData)((0x7fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [0U][2U] 
                                                      >> 1U))))))) 
                    >> 0x1eU) | ((IData)(((0x7fffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [0U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 2U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][4U] 
                = ((IData)(((0x7fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [0U][2U] 
                                                      >> 1U)))))) 
                            >> 0x20U)) >> 0x1eU);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][0U] 
            = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][1U] 
            = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][2U] 
            = (((IData)((- (QData)((IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                            >> 0x1fU))))) 
                << 1U) | vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][3U] 
            = (((IData)((- (QData)((IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                            >> 0x1fU))))) 
                >> 0x1fU) | ((IData)(((- (QData)((IData)(
                                                         (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU)))) 
                                      >> 0x20U)) << 1U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][4U] 
            = ((IData)(((- (QData)((IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                            >> 0x1fU)))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][3U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][4U] = 0U;
    }
    if ((0U == vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x20U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][2U] 
            = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                >> 0x1fU) ? vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]
                : 0U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][3U] 
            = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                >> 0x1fU) ? vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]
                : 0U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][4U] 
            = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                >> 0x1fU) ? vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]
                : 0U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][3U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][4U] = 0U;
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [1U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [1U])) {
            __Vtemp1235[0U] = 1U;
            __Vtemp1235[1U] = 0U;
            __Vtemp1235[2U] = 0U;
            __Vtemp1236[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1236[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1236[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1237, __Vtemp1235, __Vtemp1236);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][0U] 
                = (__Vtemp1237[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][1U] 
                = ((__Vtemp1237[0U] >> 0x1fU) | (__Vtemp1237[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][2U] 
                = ((__Vtemp1237[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1237[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [1U][0U] << 2U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [1U][0U] >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [1U][1U] 
                                          << 2U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] 
                = (((IData)((0x1fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [1U][2U] 
                                                      >> 1U))))))) 
                    << 4U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [1U][1U] >> 0x1eU) | 
                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [1U][2U] << 2U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][3U] 
                = (((IData)((0x1fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [1U][2U] 
                                                      >> 1U))))))) 
                    >> 0x1cU) | ((IData)(((0x1fffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [1U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 4U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][4U] 
                = ((IData)(((0x1fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [1U][2U] 
                                                      >> 1U)))))) 
                            >> 0x20U)) >> 0x1cU);
        } else {
            __Vtemp1246[0U] = 1U;
            __Vtemp1246[1U] = 0U;
            __Vtemp1246[2U] = 0U;
            __Vtemp1247[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1247[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1247[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1248, __Vtemp1246, __Vtemp1247);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][0U] 
                = __Vtemp1248[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][1U] 
                = __Vtemp1248[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][2U] 
                = (1U & __Vtemp1248[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [1U][0U] << 2U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [1U][0U] >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [1U][1U] 
                                          << 2U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] 
                = (((IData)((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                   [1U][2U])))))) 
                    << 3U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [1U][1U] >> 0x1eU) | 
                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [1U][2U] << 2U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][3U] 
                = (((IData)((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                   [1U][2U])))))) 
                    >> 0x1dU) | ((IData)(((0x3fffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [1U][2U]))))) 
                                          >> 0x20U)) 
                                 << 3U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][4U] 
                = ((IData)(((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                   [1U][2U]))))) 
                            >> 0x20U)) >> 0x1dU);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [1U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1258, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] 
            = (__Vtemp1258[0U] << 2U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] 
            = ((__Vtemp1258[0U] >> 0x1eU) | (__Vtemp1258[1U] 
                                             << 2U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] 
            = (((IData)((0x3fffffffffffffffULL & (- (QData)((IData)(
                                                                    (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                     >> 0x1fU)))))) 
                << 3U) | ((__Vtemp1258[1U] >> 0x1eU) 
                          | (4U & (__Vtemp1258[2U] 
                                   << 2U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][3U] 
            = (((IData)((0x3fffffffffffffffULL & (- (QData)((IData)(
                                                                    (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                     >> 0x1fU)))))) 
                >> 0x1dU) | ((IData)(((0x3fffffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 3U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][4U] 
            = ((IData)(((0x3fffffffffffffffULL & (- (QData)((IData)(
                                                                    (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                     >> 0x1fU))))) 
                        >> 0x20U)) >> 0x1dU);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][2U] = 0U;
        if ((IData)((0U == (6U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 2U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 2U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] 
                = (((IData)((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 3U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 2U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][3U] 
                = (((IData)((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x1dU) | ((IData)(((0x3fffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 3U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][4U] 
                = ((IData)(((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x1dU);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [2U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [2U])) {
            __Vtemp1270[0U] = 1U;
            __Vtemp1270[1U] = 0U;
            __Vtemp1270[2U] = 0U;
            __Vtemp1271[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1271[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1271[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1272, __Vtemp1270, __Vtemp1271);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][0U] 
                = (__Vtemp1272[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][1U] 
                = ((__Vtemp1272[0U] >> 0x1fU) | (__Vtemp1272[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][2U] 
                = ((__Vtemp1272[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1272[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [2U][0U] << 4U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [2U][0U] >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [2U][1U] 
                                          << 4U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] 
                = (((IData)((0x7ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [2U][2U] 
                                                    >> 1U))))))) 
                    << 6U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [2U][1U] >> 0x1cU) | 
                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [2U][2U] << 4U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][3U] 
                = (((IData)((0x7ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [2U][2U] 
                                                    >> 1U))))))) 
                    >> 0x1aU) | ((IData)(((0x7ffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [2U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 6U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][4U] 
                = ((IData)(((0x7ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [2U][2U] 
                                                    >> 1U)))))) 
                            >> 0x20U)) >> 0x1aU);
        } else {
            __Vtemp1281[0U] = 1U;
            __Vtemp1281[1U] = 0U;
            __Vtemp1281[2U] = 0U;
            __Vtemp1282[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1282[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1282[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1283, __Vtemp1281, __Vtemp1282);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][0U] 
                = __Vtemp1283[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][1U] 
                = __Vtemp1283[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][2U] 
                = (1U & __Vtemp1283[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [2U][0U] << 4U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [2U][0U] >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [2U][1U] 
                                          << 4U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] 
                = (((IData)((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [2U][2U])))))) 
                    << 5U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [2U][1U] >> 0x1cU) | 
                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [2U][2U] << 4U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][3U] 
                = (((IData)((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [2U][2U])))))) 
                    >> 0x1bU) | ((IData)(((0xfffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [2U][2U]))))) 
                                          >> 0x20U)) 
                                 << 5U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][4U] 
                = ((IData)(((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [2U][2U]))))) 
                            >> 0x20U)) >> 0x1bU);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [2U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1293, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] 
            = (__Vtemp1293[0U] << 4U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] 
            = ((__Vtemp1293[0U] >> 0x1cU) | (__Vtemp1293[1U] 
                                             << 4U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] 
            = (((IData)((0xfffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU)))))) 
                << 5U) | ((__Vtemp1293[1U] >> 0x1cU) 
                          | (0x10U & (__Vtemp1293[2U] 
                                      << 4U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][3U] 
            = (((IData)((0xfffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU)))))) 
                >> 0x1bU) | ((IData)(((0xfffffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 5U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][4U] 
            = ((IData)(((0xfffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU))))) 
                        >> 0x20U)) >> 0x1bU);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][2U] = 0U;
        if ((IData)((0U == (0xcU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 4U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 4U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] 
                = (((IData)((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 5U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 4U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][3U] 
                = (((IData)((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x1bU) | ((IData)(((0xfffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 5U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][4U] 
                = ((IData)(((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x1bU);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [3U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [3U])) {
            __Vtemp1305[0U] = 1U;
            __Vtemp1305[1U] = 0U;
            __Vtemp1305[2U] = 0U;
            __Vtemp1306[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1306[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1306[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1307, __Vtemp1305, __Vtemp1306);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][0U] 
                = (__Vtemp1307[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][1U] 
                = ((__Vtemp1307[0U] >> 0x1fU) | (__Vtemp1307[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][2U] 
                = ((__Vtemp1307[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1307[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [3U][0U] << 6U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [3U][0U] >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [3U][1U] 
                                          << 6U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] 
                = (((IData)((0x1ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [3U][2U] 
                                                    >> 1U))))))) 
                    << 8U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [3U][1U] >> 0x1aU) | 
                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [3U][2U] << 6U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][3U] 
                = (((IData)((0x1ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [3U][2U] 
                                                    >> 1U))))))) 
                    >> 0x18U) | ((IData)(((0x1ffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [3U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 8U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][4U] 
                = ((IData)(((0x1ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [3U][2U] 
                                                    >> 1U)))))) 
                            >> 0x20U)) >> 0x18U);
        } else {
            __Vtemp1316[0U] = 1U;
            __Vtemp1316[1U] = 0U;
            __Vtemp1316[2U] = 0U;
            __Vtemp1317[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1317[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1317[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1318, __Vtemp1316, __Vtemp1317);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][0U] 
                = __Vtemp1318[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][1U] 
                = __Vtemp1318[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][2U] 
                = (1U & __Vtemp1318[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [3U][0U] << 6U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [3U][0U] >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [3U][1U] 
                                          << 6U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] 
                = (((IData)((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [3U][2U])))))) 
                    << 7U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [3U][1U] >> 0x1aU) | 
                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [3U][2U] << 6U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][3U] 
                = (((IData)((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [3U][2U])))))) 
                    >> 0x19U) | ((IData)(((0x3ffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [3U][2U]))))) 
                                          >> 0x20U)) 
                                 << 7U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][4U] 
                = ((IData)(((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [3U][2U]))))) 
                            >> 0x20U)) >> 0x19U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [3U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1328, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] 
            = (__Vtemp1328[0U] << 6U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] 
            = ((__Vtemp1328[0U] >> 0x1aU) | (__Vtemp1328[1U] 
                                             << 6U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] 
            = (((IData)((0x3ffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU)))))) 
                << 7U) | ((__Vtemp1328[1U] >> 0x1aU) 
                          | (0x40U & (__Vtemp1328[2U] 
                                      << 6U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][3U] 
            = (((IData)((0x3ffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU)))))) 
                >> 0x19U) | ((IData)(((0x3ffffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 7U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][4U] 
            = ((IData)(((0x3ffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU))))) 
                        >> 0x20U)) >> 0x19U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][2U] = 0U;
        if ((IData)((0U == (0x18U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 6U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 6U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] 
                = (((IData)((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 7U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 6U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][3U] 
                = (((IData)((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x19U) | ((IData)(((0x3ffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 7U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][4U] 
                = ((IData)(((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x19U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [4U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [4U])) {
            __Vtemp1340[0U] = 1U;
            __Vtemp1340[1U] = 0U;
            __Vtemp1340[2U] = 0U;
            __Vtemp1341[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1341[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1341[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1342, __Vtemp1340, __Vtemp1341);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][0U] 
                = (__Vtemp1342[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][1U] 
                = ((__Vtemp1342[0U] >> 0x1fU) | (__Vtemp1342[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][2U] 
                = ((__Vtemp1342[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1342[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [4U][0U] << 8U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [4U][0U] >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [4U][1U] 
                                          << 8U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] 
                = (((IData)((0x7fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [4U][2U] 
                                                    >> 1U))))))) 
                    << 0xaU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [4U][1U] >> 0x18U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [4U][2U] << 8U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][3U] 
                = (((IData)((0x7fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [4U][2U] 
                                                    >> 1U))))))) 
                    >> 0x16U) | ((IData)(((0x7fffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [4U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 0xaU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][4U] 
                = ((IData)(((0x7fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [4U][2U] 
                                                    >> 1U)))))) 
                            >> 0x20U)) >> 0x16U);
        } else {
            __Vtemp1351[0U] = 1U;
            __Vtemp1351[1U] = 0U;
            __Vtemp1351[2U] = 0U;
            __Vtemp1352[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1352[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1352[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1353, __Vtemp1351, __Vtemp1352);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][0U] 
                = __Vtemp1353[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][1U] 
                = __Vtemp1353[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][2U] 
                = (1U & __Vtemp1353[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [4U][0U] << 8U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [4U][0U] >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [4U][1U] 
                                          << 8U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] 
                = (((IData)((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [4U][2U])))))) 
                    << 9U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [4U][1U] >> 0x18U) | 
                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [4U][2U] << 8U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][3U] 
                = (((IData)((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [4U][2U])))))) 
                    >> 0x17U) | ((IData)(((0xffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [4U][2U]))))) 
                                          >> 0x20U)) 
                                 << 9U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][4U] 
                = ((IData)(((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [4U][2U]))))) 
                            >> 0x20U)) >> 0x17U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [4U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1363, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] 
            = (__Vtemp1363[0U] << 8U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] 
            = ((__Vtemp1363[0U] >> 0x18U) | (__Vtemp1363[1U] 
                                             << 8U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] 
            = (((IData)((0xffffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU)))))) 
                << 9U) | ((__Vtemp1363[1U] >> 0x18U) 
                          | (0x100U & (__Vtemp1363[2U] 
                                       << 8U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][3U] 
            = (((IData)((0xffffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU)))))) 
                >> 0x17U) | ((IData)(((0xffffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 9U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][4U] 
            = ((IData)(((0xffffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU))))) 
                        >> 0x20U)) >> 0x17U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][2U] = 0U;
        if ((IData)((0U == (0x30U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 8U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 8U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] 
                = (((IData)((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 9U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 8U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][3U] 
                = (((IData)((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x17U) | ((IData)(((0xffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 9U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][4U] 
                = ((IData)(((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x17U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [5U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [5U])) {
            __Vtemp1375[0U] = 1U;
            __Vtemp1375[1U] = 0U;
            __Vtemp1375[2U] = 0U;
            __Vtemp1376[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1376[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1376[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1377, __Vtemp1375, __Vtemp1376);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][0U] 
                = (__Vtemp1377[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][1U] 
                = ((__Vtemp1377[0U] >> 0x1fU) | (__Vtemp1377[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][2U] 
                = ((__Vtemp1377[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1377[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [5U][0U] << 0xaU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [5U][0U] >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [5U][1U] 
                                          << 0xaU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] 
                = (((IData)((0x1fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [5U][2U] 
                                                    >> 1U))))))) 
                    << 0xcU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [5U][1U] >> 0x16U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [5U][2U] << 0xaU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][3U] 
                = (((IData)((0x1fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [5U][2U] 
                                                    >> 1U))))))) 
                    >> 0x14U) | ((IData)(((0x1fffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [5U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 0xcU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][4U] 
                = ((IData)(((0x1fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [5U][2U] 
                                                    >> 1U)))))) 
                            >> 0x20U)) >> 0x14U);
        } else {
            __Vtemp1386[0U] = 1U;
            __Vtemp1386[1U] = 0U;
            __Vtemp1386[2U] = 0U;
            __Vtemp1387[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1387[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1387[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1388, __Vtemp1386, __Vtemp1387);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][0U] 
                = __Vtemp1388[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][1U] 
                = __Vtemp1388[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][2U] 
                = (1U & __Vtemp1388[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [5U][0U] << 0xaU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [5U][0U] >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [5U][1U] 
                                          << 0xaU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] 
                = (((IData)((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [5U][2U])))))) 
                    << 0xbU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                 [5U][1U] >> 0x16U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                   [5U][2U] << 0xaU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][3U] 
                = (((IData)((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [5U][2U])))))) 
                    >> 0x15U) | ((IData)(((0x3fffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [5U][2U]))))) 
                                          >> 0x20U)) 
                                 << 0xbU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][4U] 
                = ((IData)(((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [5U][2U]))))) 
                            >> 0x20U)) >> 0x15U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [5U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1398, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] 
            = (__Vtemp1398[0U] << 0xaU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] 
            = ((__Vtemp1398[0U] >> 0x16U) | (__Vtemp1398[1U] 
                                             << 0xaU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] 
            = (((IData)((0x3fffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU)))))) 
                << 0xbU) | ((__Vtemp1398[1U] >> 0x16U) 
                            | (0x400U & (__Vtemp1398[2U] 
                                         << 0xaU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][3U] 
            = (((IData)((0x3fffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU)))))) 
                >> 0x15U) | ((IData)(((0x3fffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 0xbU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][4U] 
            = ((IData)(((0x3fffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU))))) 
                        >> 0x20U)) >> 0x15U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][2U] = 0U;
        if ((IData)((0U == (0x60U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xaU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xaU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] 
                = (((IData)((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0xbU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xaU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][3U] 
                = (((IData)((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x15U) | ((IData)(((0x3fffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 0xbU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][4U] 
                = ((IData)(((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x15U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [6U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [6U])) {
            __Vtemp1410[0U] = 1U;
            __Vtemp1410[1U] = 0U;
            __Vtemp1410[2U] = 0U;
            __Vtemp1411[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1411[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1411[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1412, __Vtemp1410, __Vtemp1411);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][0U] 
                = (__Vtemp1412[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][1U] 
                = ((__Vtemp1412[0U] >> 0x1fU) | (__Vtemp1412[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][2U] 
                = ((__Vtemp1412[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1412[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [6U][0U] << 0xcU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [6U][0U] >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [6U][1U] 
                                          << 0xcU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] 
                = (((IData)((0x7ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [6U][2U] 
                                                                         >> 1U))))))) 
                    << 0xeU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [6U][1U] >> 0x14U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [6U][2U] << 0xcU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][3U] 
                = (((IData)((0x7ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [6U][2U] 
                                                                         >> 1U))))))) 
                    >> 0x12U) | ((IData)(((0x7ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [6U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 0xeU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][4U] 
                = ((IData)(((0x7ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [6U][2U] 
                                                                         >> 1U)))))) 
                            >> 0x20U)) >> 0x12U);
        } else {
            __Vtemp1421[0U] = 1U;
            __Vtemp1421[1U] = 0U;
            __Vtemp1421[2U] = 0U;
            __Vtemp1422[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1422[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1422[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1423, __Vtemp1421, __Vtemp1422);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][0U] 
                = __Vtemp1423[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][1U] 
                = __Vtemp1423[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][2U] 
                = (1U & __Vtemp1423[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [6U][0U] << 0xcU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [6U][0U] >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [6U][1U] 
                                          << 0xcU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] 
                = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [6U][2U])))))) 
                    << 0xdU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                 [6U][1U] >> 0x14U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                   [6U][2U] << 0xcU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][3U] 
                = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [6U][2U])))))) 
                    >> 0x13U) | ((IData)(((0xfffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [6U][2U]))))) 
                                          >> 0x20U)) 
                                 << 0xdU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][4U] 
                = ((IData)(((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [6U][2U]))))) 
                            >> 0x20U)) >> 0x13U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [6U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1433, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] 
            = (__Vtemp1433[0U] << 0xcU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] 
            = ((__Vtemp1433[0U] >> 0x14U) | (__Vtemp1433[1U] 
                                             << 0xcU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] 
            = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU)))))) 
                << 0xdU) | ((__Vtemp1433[1U] >> 0x14U) 
                            | (0x1000U & (__Vtemp1433[2U] 
                                          << 0xcU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][3U] 
            = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU)))))) 
                >> 0x13U) | ((IData)(((0xfffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 0xdU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][4U] 
            = ((IData)(((0xfffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU))))) 
                        >> 0x20U)) >> 0x13U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][2U] = 0U;
        if ((IData)((0U == (0xc0U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xcU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xcU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] 
                = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0xdU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xcU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][3U] 
                = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x13U) | ((IData)(((0xfffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 0xdU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][4U] 
                = ((IData)(((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x13U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [7U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [7U])) {
            __Vtemp1445[0U] = 1U;
            __Vtemp1445[1U] = 0U;
            __Vtemp1445[2U] = 0U;
            __Vtemp1446[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1446[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1446[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1447, __Vtemp1445, __Vtemp1446);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][0U] 
                = (__Vtemp1447[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][1U] 
                = ((__Vtemp1447[0U] >> 0x1fU) | (__Vtemp1447[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][2U] 
                = ((__Vtemp1447[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1447[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [7U][0U] << 0xeU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [7U][0U] >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [7U][1U] 
                                          << 0xeU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] 
                = (((IData)((0x1ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [7U][2U] 
                                                                         >> 1U))))))) 
                    << 0x10U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [7U][1U] >> 0x12U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [7U][2U] << 0xeU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][3U] 
                = (((IData)((0x1ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [7U][2U] 
                                                                         >> 1U))))))) 
                    >> 0x10U) | ((IData)(((0x1ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [7U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 0x10U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][4U] 
                = ((IData)(((0x1ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [7U][2U] 
                                                                         >> 1U)))))) 
                            >> 0x20U)) >> 0x10U);
        } else {
            __Vtemp1456[0U] = 1U;
            __Vtemp1456[1U] = 0U;
            __Vtemp1456[2U] = 0U;
            __Vtemp1457[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1457[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1457[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1458, __Vtemp1456, __Vtemp1457);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][0U] 
                = __Vtemp1458[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][1U] 
                = __Vtemp1458[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][2U] 
                = (1U & __Vtemp1458[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [7U][0U] << 0xeU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [7U][0U] >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [7U][1U] 
                                          << 0xeU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] 
                = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [7U][2U])))))) 
                    << 0xfU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                 [7U][1U] >> 0x12U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                   [7U][2U] << 0xeU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][3U] 
                = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [7U][2U])))))) 
                    >> 0x11U) | ((IData)(((0x3ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [7U][2U]))))) 
                                          >> 0x20U)) 
                                 << 0xfU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][4U] 
                = ((IData)(((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [7U][2U]))))) 
                            >> 0x20U)) >> 0x11U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [7U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1468, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] 
            = (__Vtemp1468[0U] << 0xeU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] 
            = ((__Vtemp1468[0U] >> 0x12U) | (__Vtemp1468[1U] 
                                             << 0xeU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] 
            = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU)))))) 
                << 0xfU) | ((__Vtemp1468[1U] >> 0x12U) 
                            | (0x4000U & (__Vtemp1468[2U] 
                                          << 0xeU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][3U] 
            = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU)))))) 
                >> 0x11U) | ((IData)(((0x3ffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 0xfU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][4U] 
            = ((IData)(((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU))))) 
                        >> 0x20U)) >> 0x11U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][2U] = 0U;
        if ((IData)((0U == (0x180U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xeU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xeU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] 
                = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0xfU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xeU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][3U] 
                = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x11U) | ((IData)(((0x3ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 0xfU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][4U] 
                = ((IData)(((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x11U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [8U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [8U])) {
            __Vtemp1480[0U] = 1U;
            __Vtemp1480[1U] = 0U;
            __Vtemp1480[2U] = 0U;
            __Vtemp1481[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1481[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1481[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1482, __Vtemp1480, __Vtemp1481);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][0U] 
                = (__Vtemp1482[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][1U] 
                = ((__Vtemp1482[0U] >> 0x1fU) | (__Vtemp1482[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][2U] 
                = ((__Vtemp1482[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1482[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [8U][0U] << 0x10U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [8U][0U] >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [8U][1U] 
                                          << 0x10U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] 
                = (((IData)((0x7fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [8U][2U] 
                                                                        >> 1U))))))) 
                    << 0x12U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [8U][1U] >> 0x10U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [8U][2U] << 0x10U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][3U] 
                = (((IData)((0x7fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [8U][2U] 
                                                                        >> 1U))))))) 
                    >> 0xeU) | ((IData)(((0x7fffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                   [8U][2U] 
                                                                   >> 1U)))))) 
                                         >> 0x20U)) 
                                << 0x12U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][4U] 
                = ((IData)(((0x7fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [8U][2U] 
                                                                        >> 1U)))))) 
                            >> 0x20U)) >> 0xeU);
        } else {
            __Vtemp1491[0U] = 1U;
            __Vtemp1491[1U] = 0U;
            __Vtemp1491[2U] = 0U;
            __Vtemp1492[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1492[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1492[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1493, __Vtemp1491, __Vtemp1492);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][0U] 
                = __Vtemp1493[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][1U] 
                = __Vtemp1493[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][2U] 
                = (1U & __Vtemp1493[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [8U][0U] << 0x10U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [8U][0U] >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [8U][1U] 
                                          << 0x10U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] 
                = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [8U][2U])))))) 
                    << 0x11U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [8U][1U] >> 0x10U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [8U][2U] << 0x10U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][3U] 
                = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [8U][2U])))))) 
                    >> 0xfU) | ((IData)(((0xffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                [8U][2U]))))) 
                                         >> 0x20U)) 
                                << 0x11U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][4U] 
                = ((IData)(((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [8U][2U]))))) 
                            >> 0x20U)) >> 0xfU);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [8U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1503, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] 
            = (__Vtemp1503[0U] << 0x10U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] 
            = ((__Vtemp1503[0U] >> 0x10U) | (__Vtemp1503[1U] 
                                             << 0x10U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] 
            = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU)))))) 
                << 0x11U) | ((__Vtemp1503[1U] >> 0x10U) 
                             | (0x10000U & (__Vtemp1503[2U] 
                                            << 0x10U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][3U] 
            = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU)))))) 
                >> 0xfU) | ((IData)(((0xffffffffffffULL 
                                      & (- (QData)((IData)(
                                                           (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                            >> 0x1fU))))) 
                                     >> 0x20U)) << 0x11U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][4U] 
            = ((IData)(((0xffffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU))))) 
                        >> 0x20U)) >> 0xfU);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][2U] = 0U;
        if ((IData)((0U == (0x300U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x10U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0x10U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] 
                = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x11U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                               << 0x10U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][3U] 
                = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0xfU) | ((IData)(((0xffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                         >> 0x20U)) 
                                << 0x11U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][4U] 
                = ((IData)(((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0xfU);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [9U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [9U])) {
            __Vtemp1515[0U] = 1U;
            __Vtemp1515[1U] = 0U;
            __Vtemp1515[2U] = 0U;
            __Vtemp1516[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1516[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1516[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1517, __Vtemp1515, __Vtemp1516);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][0U] 
                = (__Vtemp1517[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][1U] 
                = ((__Vtemp1517[0U] >> 0x1fU) | (__Vtemp1517[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][2U] 
                = ((__Vtemp1517[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1517[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [9U][0U] << 0x12U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [9U][0U] >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [9U][1U] << 0x12U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] 
                = (((IData)((0x1fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [9U][2U] 
                                                                        >> 1U))))))) 
                    << 0x14U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [9U][1U] >> 0xeU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [9U][2U] << 0x12U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][3U] 
                = (((IData)((0x1fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [9U][2U] 
                                                                        >> 1U))))))) 
                    >> 0xcU) | ((IData)(((0x1fffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                   [9U][2U] 
                                                                   >> 1U)))))) 
                                         >> 0x20U)) 
                                << 0x14U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][4U] 
                = ((IData)(((0x1fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [9U][2U] 
                                                                        >> 1U)))))) 
                            >> 0x20U)) >> 0xcU);
        } else {
            __Vtemp1526[0U] = 1U;
            __Vtemp1526[1U] = 0U;
            __Vtemp1526[2U] = 0U;
            __Vtemp1527[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1527[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1527[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1528, __Vtemp1526, __Vtemp1527);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][0U] 
                = __Vtemp1528[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][1U] 
                = __Vtemp1528[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][2U] 
                = (1U & __Vtemp1528[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [9U][0U] << 0x12U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [9U][0U] >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                         [9U][1U] << 0x12U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] 
                = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [9U][2U])))))) 
                    << 0x13U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [9U][1U] >> 0xeU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [9U][2U] << 0x12U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][3U] 
                = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [9U][2U])))))) 
                    >> 0xdU) | ((IData)(((0x3fffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                [9U][2U]))))) 
                                         >> 0x20U)) 
                                << 0x13U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][4U] 
                = ((IData)(((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [9U][2U]))))) 
                            >> 0x20U)) >> 0xdU);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [9U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1538, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] 
            = (__Vtemp1538[0U] << 0x12U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] 
            = ((__Vtemp1538[0U] >> 0xeU) | (__Vtemp1538[1U] 
                                            << 0x12U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] 
            = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU)))))) 
                << 0x13U) | ((__Vtemp1538[1U] >> 0xeU) 
                             | (0x40000U & (__Vtemp1538[2U] 
                                            << 0x12U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][3U] 
            = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU)))))) 
                >> 0xdU) | ((IData)(((0x3fffffffffffULL 
                                      & (- (QData)((IData)(
                                                           (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                            >> 0x1fU))))) 
                                     >> 0x20U)) << 0x13U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][4U] 
            = ((IData)(((0x3fffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU))))) 
                        >> 0x20U)) >> 0xdU);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][2U] = 0U;
        if ((IData)((0U == (0x600U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x12U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x12U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] 
                = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x13U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x12U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][3U] 
                = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0xdU) | ((IData)(((0x3fffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                         >> 0x20U)) 
                                << 0x13U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][4U] 
                = ((IData)(((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0xdU);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xaU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xaU])) {
            __Vtemp1550[0U] = 1U;
            __Vtemp1550[1U] = 0U;
            __Vtemp1550[2U] = 0U;
            __Vtemp1551[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1551[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1551[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1552, __Vtemp1550, __Vtemp1551);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][0U] 
                = (__Vtemp1552[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][1U] 
                = ((__Vtemp1552[0U] >> 0x1fU) | (__Vtemp1552[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][2U] 
                = ((__Vtemp1552[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1552[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xaU][0U] << 0x14U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xaU][0U] >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0xaU][1U] 
                                           << 0x14U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] 
                = (((IData)((0x7ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xaU][2U] 
                                                                       >> 1U))))))) 
                    << 0x16U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0xaU][1U] >> 0xcU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0xaU][2U] << 0x14U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][3U] 
                = (((IData)((0x7ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xaU][2U] 
                                                                       >> 1U))))))) 
                    >> 0xaU) | ((IData)(((0x7ffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                   [0xaU][2U] 
                                                                   >> 1U)))))) 
                                         >> 0x20U)) 
                                << 0x16U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][4U] 
                = ((IData)(((0x7ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xaU][2U] 
                                                                       >> 1U)))))) 
                            >> 0x20U)) >> 0xaU);
        } else {
            __Vtemp1561[0U] = 1U;
            __Vtemp1561[1U] = 0U;
            __Vtemp1561[2U] = 0U;
            __Vtemp1562[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1562[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1562[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1563, __Vtemp1561, __Vtemp1562);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][0U] 
                = __Vtemp1563[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][1U] 
                = __Vtemp1563[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][2U] 
                = (1U & __Vtemp1563[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xaU][0U] << 0x14U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xaU][0U] >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                           [0xaU][1U] 
                                           << 0x14U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] 
                = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xaU][2U])))))) 
                    << 0x15U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xaU][1U] >> 0xcU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xaU][2U] << 0x14U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][3U] 
                = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xaU][2U])))))) 
                    >> 0xbU) | ((IData)(((0xfffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                [0xaU][2U]))))) 
                                         >> 0x20U)) 
                                << 0x15U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][4U] 
                = ((IData)(((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xaU][2U]))))) 
                            >> 0x20U)) >> 0xbU);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xaU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1573, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] 
            = (__Vtemp1573[0U] << 0x14U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] 
            = ((__Vtemp1573[0U] >> 0xcU) | (__Vtemp1573[1U] 
                                            << 0x14U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] 
            = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU)))))) 
                << 0x15U) | ((__Vtemp1573[1U] >> 0xcU) 
                             | (0x100000U & (__Vtemp1573[2U] 
                                             << 0x14U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][3U] 
            = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU)))))) 
                >> 0xbU) | ((IData)(((0xfffffffffffULL 
                                      & (- (QData)((IData)(
                                                           (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                            >> 0x1fU))))) 
                                     >> 0x20U)) << 0x15U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][4U] 
            = ((IData)(((0xfffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU))))) 
                        >> 0x20U)) >> 0xbU);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][2U] = 0U;
        if ((IData)((0U == (0xc00U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x14U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x14U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] 
                = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x15U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x14U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][3U] 
                = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0xbU) | ((IData)(((0xfffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                         >> 0x20U)) 
                                << 0x15U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][4U] 
                = ((IData)(((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0xbU);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xbU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xbU])) {
            __Vtemp1585[0U] = 1U;
            __Vtemp1585[1U] = 0U;
            __Vtemp1585[2U] = 0U;
            __Vtemp1586[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1586[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1586[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1587, __Vtemp1585, __Vtemp1586);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][0U] 
                = (__Vtemp1587[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][1U] 
                = ((__Vtemp1587[0U] >> 0x1fU) | (__Vtemp1587[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][2U] 
                = ((__Vtemp1587[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1587[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xbU][0U] << 0x16U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xbU][0U] >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0xbU][1U] 
                                           << 0x16U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] 
                = (((IData)((0x1ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xbU][2U] 
                                                                       >> 1U))))))) 
                    << 0x18U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0xbU][1U] >> 0xaU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0xbU][2U] << 0x16U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][3U] 
                = (((IData)((0x1ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xbU][2U] 
                                                                       >> 1U))))))) 
                    >> 8U) | ((IData)(((0x1ffffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                 [0xbU][2U] 
                                                                 >> 1U)))))) 
                                       >> 0x20U)) << 0x18U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][4U] 
                = ((IData)(((0x1ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xbU][2U] 
                                                                       >> 1U)))))) 
                            >> 0x20U)) >> 8U);
        } else {
            __Vtemp1596[0U] = 1U;
            __Vtemp1596[1U] = 0U;
            __Vtemp1596[2U] = 0U;
            __Vtemp1597[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1597[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1597[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1598, __Vtemp1596, __Vtemp1597);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][0U] 
                = __Vtemp1598[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][1U] 
                = __Vtemp1598[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][2U] 
                = (1U & __Vtemp1598[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xbU][0U] << 0x16U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xbU][0U] >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                           [0xbU][1U] 
                                           << 0x16U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] 
                = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xbU][2U])))))) 
                    << 0x17U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xbU][1U] >> 0xaU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xbU][2U] << 0x16U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][3U] 
                = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xbU][2U])))))) 
                    >> 9U) | ((IData)(((0x3ffffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0xbU][2U]))))) 
                                       >> 0x20U)) << 0x17U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][4U] 
                = ((IData)(((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xbU][2U]))))) 
                            >> 0x20U)) >> 9U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xbU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1608, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] 
            = (__Vtemp1608[0U] << 0x16U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] 
            = ((__Vtemp1608[0U] >> 0xaU) | (__Vtemp1608[1U] 
                                            << 0x16U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] 
            = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU)))))) 
                << 0x17U) | ((__Vtemp1608[1U] >> 0xaU) 
                             | (0x400000U & (__Vtemp1608[2U] 
                                             << 0x16U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][3U] 
            = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU)))))) 
                >> 9U) | ((IData)(((0x3ffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU))))) 
                                   >> 0x20U)) << 0x17U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][4U] 
            = ((IData)(((0x3ffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU))))) 
                        >> 0x20U)) >> 9U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][2U] = 0U;
        if ((IData)((0U == (0x1800U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x16U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x16U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] 
                = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x17U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x16U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][3U] 
                = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 9U) | ((IData)(((0x3ffffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                       >> 0x20U)) << 0x17U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][4U] 
                = ((IData)(((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 9U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xcU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xcU])) {
            __Vtemp1620[0U] = 1U;
            __Vtemp1620[1U] = 0U;
            __Vtemp1620[2U] = 0U;
            __Vtemp1621[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1621[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1621[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1622, __Vtemp1620, __Vtemp1621);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][0U] 
                = (__Vtemp1622[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][1U] 
                = ((__Vtemp1622[0U] >> 0x1fU) | (__Vtemp1622[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][2U] 
                = ((__Vtemp1622[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1622[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xcU][0U] << 0x18U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xcU][0U] >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [0xcU][1U] 
                                         << 0x18U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] 
                = (((IData)((0x7fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xcU][2U] 
                                                                      >> 1U))))))) 
                    << 0x1aU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0xcU][1U] >> 8U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0xcU][2U] << 0x18U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][3U] 
                = (((IData)((0x7fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xcU][2U] 
                                                                      >> 1U))))))) 
                    >> 6U) | ((IData)(((0x7fffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                 [0xcU][2U] 
                                                                 >> 1U)))))) 
                                       >> 0x20U)) << 0x1aU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][4U] 
                = ((IData)(((0x7fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xcU][2U] 
                                                                      >> 1U)))))) 
                            >> 0x20U)) >> 6U);
        } else {
            __Vtemp1631[0U] = 1U;
            __Vtemp1631[1U] = 0U;
            __Vtemp1631[2U] = 0U;
            __Vtemp1632[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1632[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1632[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1633, __Vtemp1631, __Vtemp1632);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][0U] 
                = __Vtemp1633[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][1U] 
                = __Vtemp1633[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][2U] 
                = (1U & __Vtemp1633[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xcU][0U] << 0x18U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xcU][0U] >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                         [0xcU][1U] 
                                         << 0x18U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] 
                = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xcU][2U])))))) 
                    << 0x19U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xcU][1U] >> 8U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xcU][2U] << 0x18U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][3U] 
                = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xcU][2U])))))) 
                    >> 7U) | ((IData)(((0xffffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0xcU][2U]))))) 
                                       >> 0x20U)) << 0x19U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][4U] 
                = ((IData)(((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xcU][2U]))))) 
                            >> 0x20U)) >> 7U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xcU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1643, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] 
            = (__Vtemp1643[0U] << 0x18U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] 
            = ((__Vtemp1643[0U] >> 8U) | (__Vtemp1643[1U] 
                                          << 0x18U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] 
            = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU)))))) 
                << 0x19U) | ((__Vtemp1643[1U] >> 8U) 
                             | (0x1000000U & (__Vtemp1643[2U] 
                                              << 0x18U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][3U] 
            = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU)))))) 
                >> 7U) | ((IData)(((0xffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU))))) 
                                   >> 0x20U)) << 0x19U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][4U] 
            = ((IData)(((0xffffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU))))) 
                        >> 0x20U)) >> 7U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][2U] = 0U;
        if ((IData)((0U == (0x3000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x18U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x18U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] 
                = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x19U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x18U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][3U] 
                = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 7U) | ((IData)(((0xffffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                       >> 0x20U)) << 0x19U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][4U] 
                = ((IData)(((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 7U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xdU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xdU])) {
            __Vtemp1655[0U] = 1U;
            __Vtemp1655[1U] = 0U;
            __Vtemp1655[2U] = 0U;
            __Vtemp1656[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1656[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1656[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1657, __Vtemp1655, __Vtemp1656);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][0U] 
                = (__Vtemp1657[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][1U] 
                = ((__Vtemp1657[0U] >> 0x1fU) | (__Vtemp1657[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][2U] 
                = ((__Vtemp1657[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1657[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xdU][0U] << 0x1aU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xdU][0U] >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [0xdU][1U] 
                                         << 0x1aU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] 
                = (((IData)((0x1fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xdU][2U] 
                                                                      >> 1U))))))) 
                    << 0x1cU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0xdU][1U] >> 6U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0xdU][2U] << 0x1aU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][3U] 
                = (((IData)((0x1fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xdU][2U] 
                                                                      >> 1U))))))) 
                    >> 4U) | ((IData)(((0x1fffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                 [0xdU][2U] 
                                                                 >> 1U)))))) 
                                       >> 0x20U)) << 0x1cU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][4U] 
                = ((IData)(((0x1fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xdU][2U] 
                                                                      >> 1U)))))) 
                            >> 0x20U)) >> 4U);
        } else {
            __Vtemp1666[0U] = 1U;
            __Vtemp1666[1U] = 0U;
            __Vtemp1666[2U] = 0U;
            __Vtemp1667[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1667[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1667[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1668, __Vtemp1666, __Vtemp1667);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][0U] 
                = __Vtemp1668[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][1U] 
                = __Vtemp1668[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][2U] 
                = (1U & __Vtemp1668[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xdU][0U] << 0x1aU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xdU][0U] >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                         [0xdU][1U] 
                                         << 0x1aU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] 
                = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xdU][2U])))))) 
                    << 0x1bU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xdU][1U] >> 6U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xdU][2U] << 0x1aU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][3U] 
                = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xdU][2U])))))) 
                    >> 5U) | ((IData)(((0x3fffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0xdU][2U]))))) 
                                       >> 0x20U)) << 0x1bU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][4U] 
                = ((IData)(((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xdU][2U]))))) 
                            >> 0x20U)) >> 5U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xdU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1678, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] 
            = (__Vtemp1678[0U] << 0x1aU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] 
            = ((__Vtemp1678[0U] >> 6U) | (__Vtemp1678[1U] 
                                          << 0x1aU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] 
            = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU)))))) 
                << 0x1bU) | ((__Vtemp1678[1U] >> 6U) 
                             | (0x4000000U & (__Vtemp1678[2U] 
                                              << 0x1aU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][3U] 
            = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU)))))) 
                >> 5U) | ((IData)(((0x3fffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU))))) 
                                   >> 0x20U)) << 0x1bU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][4U] 
            = ((IData)(((0x3fffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU))))) 
                        >> 0x20U)) >> 5U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][2U] = 0U;
        if ((IData)((0U == (0x6000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1aU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1aU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] 
                = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x1bU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1aU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][3U] 
                = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 5U) | ((IData)(((0x3fffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                       >> 0x20U)) << 0x1bU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][4U] 
                = ((IData)(((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 5U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xeU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xeU])) {
            __Vtemp1690[0U] = 1U;
            __Vtemp1690[1U] = 0U;
            __Vtemp1690[2U] = 0U;
            __Vtemp1691[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1691[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1691[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1692, __Vtemp1690, __Vtemp1691);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][0U] 
                = (__Vtemp1692[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][1U] 
                = ((__Vtemp1692[0U] >> 0x1fU) | (__Vtemp1692[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][2U] 
                = ((__Vtemp1692[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1692[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xeU][0U] << 0x1cU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xeU][0U] >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [0xeU][1U] 
                                         << 0x1cU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] 
                = (((IData)((0x7ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                     [0xeU][2U] 
                                                                     >> 1U))))))) 
                    << 0x1eU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0xeU][1U] >> 4U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0xeU][2U] << 0x1cU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][3U] 
                = (((IData)((0x7ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                     [0xeU][2U] 
                                                                     >> 1U))))))) 
                    >> 2U) | ((IData)(((0x7ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                 [0xeU][2U] 
                                                                 >> 1U)))))) 
                                       >> 0x20U)) << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][4U] 
                = ((IData)(((0x7ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                     [0xeU][2U] 
                                                                     >> 1U)))))) 
                            >> 0x20U)) >> 2U);
        } else {
            __Vtemp1701[0U] = 1U;
            __Vtemp1701[1U] = 0U;
            __Vtemp1701[2U] = 0U;
            __Vtemp1702[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1702[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1702[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1703, __Vtemp1701, __Vtemp1702);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][0U] 
                = __Vtemp1703[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][1U] 
                = __Vtemp1703[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][2U] 
                = (1U & __Vtemp1703[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xeU][0U] << 0x1cU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xeU][0U] >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                         [0xeU][1U] 
                                         << 0x1cU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] 
                = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xeU][2U])))))) 
                    << 0x1dU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xeU][1U] >> 4U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xeU][2U] << 0x1cU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][3U] 
                = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xeU][2U])))))) 
                    >> 3U) | ((IData)(((0xfffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0xeU][2U]))))) 
                                       >> 0x20U)) << 0x1dU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][4U] 
                = ((IData)(((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xeU][2U]))))) 
                            >> 0x20U)) >> 3U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xeU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1713, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] 
            = (__Vtemp1713[0U] << 0x1cU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] 
            = ((__Vtemp1713[0U] >> 4U) | (__Vtemp1713[1U] 
                                          << 0x1cU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] 
            = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU)))))) 
                << 0x1dU) | ((__Vtemp1713[1U] >> 4U) 
                             | (0x10000000U & (__Vtemp1713[2U] 
                                               << 0x1cU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][3U] 
            = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU)))))) 
                >> 3U) | ((IData)(((0xfffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU))))) 
                                   >> 0x20U)) << 0x1dU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][4U] 
            = ((IData)(((0xfffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU))))) 
                        >> 0x20U)) >> 3U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][2U] = 0U;
        if ((IData)((0U == (0xc000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1cU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1cU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] 
                = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x1dU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1cU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][3U] 
                = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 3U) | ((IData)(((0xfffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                       >> 0x20U)) << 0x1dU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][4U] 
                = ((IData)(((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 3U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xfU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xfU])) {
            __Vtemp1725[0U] = 1U;
            __Vtemp1725[1U] = 0U;
            __Vtemp1725[2U] = 0U;
            __Vtemp1726[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1726[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1726[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1727, __Vtemp1725, __Vtemp1726);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][0U] 
                = (__Vtemp1727[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][1U] 
                = ((__Vtemp1727[0U] >> 0x1fU) | (__Vtemp1727[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][2U] 
                = ((__Vtemp1727[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1727[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xfU][0U] << 0x1eU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xfU][0U] >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [0xfU][1U] 
                                         << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xfU][1U] >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [0xfU][2U] 
                                         << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][3U] 
                = (IData)((0x1ffffffffULL & (- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                   [0xfU][2U] 
                                                                   >> 1U)))))));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][4U] 
                = (IData)(((0x1ffffffffULL & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [0xfU][2U] 
                                                                    >> 1U)))))) 
                           >> 0x20U));
        } else {
            __Vtemp1736[0U] = 1U;
            __Vtemp1736[1U] = 0U;
            __Vtemp1736[2U] = 0U;
            __Vtemp1737[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1737[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1737[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1738, __Vtemp1736, __Vtemp1737);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][0U] 
                = __Vtemp1738[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][1U] 
                = __Vtemp1738[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][2U] 
                = (1U & __Vtemp1738[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xfU][0U] << 0x1eU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xfU][0U] >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                         [0xfU][1U] 
                                         << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] 
                = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xfU][2U])))))) 
                    << 0x1fU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xfU][1U] >> 2U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xfU][2U] << 0x1eU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][3U] 
                = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xfU][2U])))))) 
                    >> 1U) | ((IData)(((0x3ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0xfU][2U]))))) 
                                       >> 0x20U)) << 0x1fU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][4U] 
                = ((IData)(((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xfU][2U]))))) 
                            >> 0x20U)) >> 1U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xfU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1748, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] 
            = (__Vtemp1748[0U] << 0x1eU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] 
            = ((__Vtemp1748[0U] >> 2U) | (__Vtemp1748[1U] 
                                          << 0x1eU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] 
            = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU)))))) 
                << 0x1fU) | ((__Vtemp1748[1U] >> 2U) 
                             | (0x40000000U & (__Vtemp1748[2U] 
                                               << 0x1eU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][3U] 
            = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU)))))) 
                >> 1U) | ((IData)(((0x3ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU))))) 
                                   >> 0x20U)) << 0x1fU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][4U] 
            = ((IData)(((0x3ffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU))))) 
                        >> 0x20U)) >> 1U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][2U] = 0U;
        if ((IData)((0U == (0x18000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1eU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] 
                = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x1fU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1eU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][3U] 
                = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 1U) | ((IData)(((0x3ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                       >> 0x20U)) << 0x1fU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][4U] 
                = ((IData)(((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 1U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x10U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x10U])) {
            __Vtemp1760[0U] = 1U;
            __Vtemp1760[1U] = 0U;
            __Vtemp1760[2U] = 0U;
            __Vtemp1761[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1761[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1761[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1762, __Vtemp1760, __Vtemp1761);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][0U] 
                = (__Vtemp1762[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][1U] 
                = ((__Vtemp1762[0U] >> 0x1fU) | (__Vtemp1762[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][2U] 
                = ((__Vtemp1762[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1762[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                [0x10U][0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                [0x10U][1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x10U][2U] >> 1U)))) 
                    << 2U) | vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x10U][2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x10U][2U] 
                                           >> 1U)))) 
                         >> 0x1eU));
        } else {
            __Vtemp1771[0U] = 1U;
            __Vtemp1771[1U] = 0U;
            __Vtemp1771[2U] = 0U;
            __Vtemp1772[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1772[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1772[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1773, __Vtemp1771, __Vtemp1772);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][0U] 
                = __Vtemp1773[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][1U] 
                = __Vtemp1773[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][2U] 
                = (1U & __Vtemp1773[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                [0x10U][0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                [0x10U][1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x10U][2U]))) << 1U) 
                   | vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x10U][2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][4U] 
                = ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [0x10U][2U]))) >> 0x1fU);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x10U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1783, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] 
            = __Vtemp1783[0U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] 
            = __Vtemp1783[1U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 1U) | (1U 
                                                  & __Vtemp1783[2U]));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][4U] 
            = ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                           >> 0x1fU))) >> 0x1fU);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][0U] = 0U;
        if ((IData)((0U == (0x30000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 1U) | vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][4U] 
                = ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                   >> 0x1fU);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x11U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x11U])) {
            __Vtemp1795[0U] = 1U;
            __Vtemp1795[1U] = 0U;
            __Vtemp1795[2U] = 0U;
            __Vtemp1796[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1796[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1796[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1797, __Vtemp1795, __Vtemp1796);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][0U] 
                = (__Vtemp1797[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][1U] 
                = ((__Vtemp1797[0U] >> 0x1fU) | (__Vtemp1797[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][2U] 
                = ((__Vtemp1797[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1797[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x11U][0U] << 2U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x11U][0U] >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x11U][1U] 
                                             << 2U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x11U][2U] >> 1U)))) 
                    << 4U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [0x11U][1U] >> 0x1eU) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x11U][2U] << 2U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x11U][2U] 
                                           >> 1U)))) 
                         >> 0x1cU));
        } else {
            __Vtemp1806[0U] = 1U;
            __Vtemp1806[1U] = 0U;
            __Vtemp1806[2U] = 0U;
            __Vtemp1807[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1807[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1807[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1808, __Vtemp1806, __Vtemp1807);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][0U] 
                = __Vtemp1808[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][1U] 
                = __Vtemp1808[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][2U] 
                = (1U & __Vtemp1808[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x11U][0U] << 2U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x11U][0U] >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x11U][1U] 
                                             << 2U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x11U][2U]))) << 3U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x11U][1U] >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x11U][2U] 
                                                << 2U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x11U][2U]))) 
                         >> 0x1dU));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x11U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1818, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] 
            = (__Vtemp1818[0U] << 2U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] 
            = ((__Vtemp1818[0U] >> 0x1eU) | (__Vtemp1818[1U] 
                                             << 2U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 3U) | ((
                                                   __Vtemp1818[1U] 
                                                   >> 0x1eU) 
                                                  | (4U 
                                                     & (__Vtemp1818[2U] 
                                                        << 2U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x1dU));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][0U] = 0U;
        if ((IData)((0U == (0x60000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 2U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 2U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 3U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 2U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x1dU));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x12U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x12U])) {
            __Vtemp1830[0U] = 1U;
            __Vtemp1830[1U] = 0U;
            __Vtemp1830[2U] = 0U;
            __Vtemp1831[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1831[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1831[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1832, __Vtemp1830, __Vtemp1831);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][0U] 
                = (__Vtemp1832[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][1U] 
                = ((__Vtemp1832[0U] >> 0x1fU) | (__Vtemp1832[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][2U] 
                = ((__Vtemp1832[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1832[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x12U][0U] << 4U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x12U][0U] >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x12U][1U] 
                                             << 4U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x12U][2U] >> 1U)))) 
                    << 6U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [0x12U][1U] >> 0x1cU) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x12U][2U] << 4U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x12U][2U] 
                                           >> 1U)))) 
                         >> 0x1aU));
        } else {
            __Vtemp1841[0U] = 1U;
            __Vtemp1841[1U] = 0U;
            __Vtemp1841[2U] = 0U;
            __Vtemp1842[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1842[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1842[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1843, __Vtemp1841, __Vtemp1842);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][0U] 
                = __Vtemp1843[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][1U] 
                = __Vtemp1843[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][2U] 
                = (1U & __Vtemp1843[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x12U][0U] << 4U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x12U][0U] >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x12U][1U] 
                                             << 4U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x12U][2U]))) << 5U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x12U][1U] >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x12U][2U] 
                                                << 4U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x12U][2U]))) 
                         >> 0x1bU));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x12U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1853, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] 
            = (__Vtemp1853[0U] << 4U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] 
            = ((__Vtemp1853[0U] >> 0x1cU) | (__Vtemp1853[1U] 
                                             << 4U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 5U) | ((
                                                   __Vtemp1853[1U] 
                                                   >> 0x1cU) 
                                                  | (0x10U 
                                                     & (__Vtemp1853[2U] 
                                                        << 4U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x1bU));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][0U] = 0U;
        if ((IData)((0U == (0xc0000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 4U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 4U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 5U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 4U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x1bU));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x13U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x13U])) {
            __Vtemp1865[0U] = 1U;
            __Vtemp1865[1U] = 0U;
            __Vtemp1865[2U] = 0U;
            __Vtemp1866[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1866[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1866[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1867, __Vtemp1865, __Vtemp1866);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][0U] 
                = (__Vtemp1867[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][1U] 
                = ((__Vtemp1867[0U] >> 0x1fU) | (__Vtemp1867[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][2U] 
                = ((__Vtemp1867[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1867[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x13U][0U] << 6U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x13U][0U] >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x13U][1U] 
                                             << 6U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x13U][2U] >> 1U)))) 
                    << 8U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [0x13U][1U] >> 0x1aU) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x13U][2U] << 6U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x13U][2U] 
                                           >> 1U)))) 
                         >> 0x18U));
        } else {
            __Vtemp1876[0U] = 1U;
            __Vtemp1876[1U] = 0U;
            __Vtemp1876[2U] = 0U;
            __Vtemp1877[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1877[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1877[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1878, __Vtemp1876, __Vtemp1877);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][0U] 
                = __Vtemp1878[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][1U] 
                = __Vtemp1878[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][2U] 
                = (1U & __Vtemp1878[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x13U][0U] << 6U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x13U][0U] >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x13U][1U] 
                                             << 6U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x13U][2U]))) << 7U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x13U][1U] >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x13U][2U] 
                                                << 6U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x13U][2U]))) 
                         >> 0x19U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x13U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1888, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] 
            = (__Vtemp1888[0U] << 6U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] 
            = ((__Vtemp1888[0U] >> 0x1aU) | (__Vtemp1888[1U] 
                                             << 6U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 7U) | ((
                                                   __Vtemp1888[1U] 
                                                   >> 0x1aU) 
                                                  | (0x40U 
                                                     & (__Vtemp1888[2U] 
                                                        << 6U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x19U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][0U] = 0U;
        if ((IData)((0U == (0x180000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 6U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 6U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 7U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 6U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x19U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x14U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x14U])) {
            __Vtemp1900[0U] = 1U;
            __Vtemp1900[1U] = 0U;
            __Vtemp1900[2U] = 0U;
            __Vtemp1901[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1901[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1901[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1902, __Vtemp1900, __Vtemp1901);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][0U] 
                = (__Vtemp1902[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][1U] 
                = ((__Vtemp1902[0U] >> 0x1fU) | (__Vtemp1902[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][2U] 
                = ((__Vtemp1902[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1902[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x14U][0U] << 8U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x14U][0U] >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x14U][1U] 
                                             << 8U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x14U][2U] >> 1U)))) 
                    << 0xaU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x14U][1U] >> 0x18U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [0x14U][2U] << 8U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x14U][2U] 
                                           >> 1U)))) 
                         >> 0x16U));
        } else {
            __Vtemp1911[0U] = 1U;
            __Vtemp1911[1U] = 0U;
            __Vtemp1911[2U] = 0U;
            __Vtemp1912[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1912[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1912[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1913, __Vtemp1911, __Vtemp1912);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][0U] 
                = __Vtemp1913[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][1U] 
                = __Vtemp1913[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][2U] 
                = (1U & __Vtemp1913[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x14U][0U] << 8U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x14U][0U] >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x14U][1U] 
                                             << 8U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x14U][2U]))) << 9U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x14U][1U] >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x14U][2U] 
                                                << 8U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x14U][2U]))) 
                         >> 0x17U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x14U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1923, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] 
            = (__Vtemp1923[0U] << 8U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] 
            = ((__Vtemp1923[0U] >> 0x18U) | (__Vtemp1923[1U] 
                                             << 8U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 9U) | ((
                                                   __Vtemp1923[1U] 
                                                   >> 0x18U) 
                                                  | (0x100U 
                                                     & (__Vtemp1923[2U] 
                                                        << 8U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x17U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][0U] = 0U;
        if ((IData)((0U == (0x300000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 8U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 8U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 9U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 8U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x17U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x15U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x15U])) {
            __Vtemp1935[0U] = 1U;
            __Vtemp1935[1U] = 0U;
            __Vtemp1935[2U] = 0U;
            __Vtemp1936[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1936[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1936[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1937, __Vtemp1935, __Vtemp1936);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][0U] 
                = (__Vtemp1937[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][1U] 
                = ((__Vtemp1937[0U] >> 0x1fU) | (__Vtemp1937[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][2U] 
                = ((__Vtemp1937[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1937[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x15U][0U] << 0xaU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x15U][0U] >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x15U][1U] 
                                             << 0xaU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x15U][2U] >> 1U)))) 
                    << 0xcU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x15U][1U] >> 0x16U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [0x15U][2U] << 0xaU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x15U][2U] 
                                           >> 1U)))) 
                         >> 0x14U));
        } else {
            __Vtemp1946[0U] = 1U;
            __Vtemp1946[1U] = 0U;
            __Vtemp1946[2U] = 0U;
            __Vtemp1947[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1947[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1947[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1948, __Vtemp1946, __Vtemp1947);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][0U] 
                = __Vtemp1948[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][1U] 
                = __Vtemp1948[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][2U] 
                = (1U & __Vtemp1948[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x15U][0U] << 0xaU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x15U][0U] >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x15U][1U] 
                                             << 0xaU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x15U][2U]))) << 0xbU) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x15U][1U] >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x15U][2U] 
                                                << 0xaU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x15U][2U]))) 
                         >> 0x15U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x15U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1958, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] 
            = (__Vtemp1958[0U] << 0xaU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] 
            = ((__Vtemp1958[0U] >> 0x16U) | (__Vtemp1958[1U] 
                                             << 0xaU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0xbU) | 
               ((__Vtemp1958[1U] >> 0x16U) | (0x400U 
                                              & (__Vtemp1958[2U] 
                                                 << 0xaU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x15U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][0U] = 0U;
        if ((IData)((0U == (0x600000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xaU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xaU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0xbU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xaU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x15U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x16U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x16U])) {
            __Vtemp1970[0U] = 1U;
            __Vtemp1970[1U] = 0U;
            __Vtemp1970[2U] = 0U;
            __Vtemp1971[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1971[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1971[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1972, __Vtemp1970, __Vtemp1971);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][0U] 
                = (__Vtemp1972[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][1U] 
                = ((__Vtemp1972[0U] >> 0x1fU) | (__Vtemp1972[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][2U] 
                = ((__Vtemp1972[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1972[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x16U][0U] << 0xcU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x16U][0U] >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x16U][1U] 
                                             << 0xcU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x16U][2U] >> 1U)))) 
                    << 0xeU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x16U][1U] >> 0x14U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [0x16U][2U] << 0xcU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x16U][2U] 
                                           >> 1U)))) 
                         >> 0x12U));
        } else {
            __Vtemp1981[0U] = 1U;
            __Vtemp1981[1U] = 0U;
            __Vtemp1981[2U] = 0U;
            __Vtemp1982[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1982[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1982[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1983, __Vtemp1981, __Vtemp1982);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][0U] 
                = __Vtemp1983[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][1U] 
                = __Vtemp1983[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][2U] 
                = (1U & __Vtemp1983[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x16U][0U] << 0xcU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x16U][0U] >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x16U][1U] 
                                             << 0xcU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x16U][2U]))) << 0xdU) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x16U][1U] >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x16U][2U] 
                                                << 0xcU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x16U][2U]))) 
                         >> 0x13U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x16U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1993, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] 
            = (__Vtemp1993[0U] << 0xcU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] 
            = ((__Vtemp1993[0U] >> 0x14U) | (__Vtemp1993[1U] 
                                             << 0xcU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0xdU) | 
               ((__Vtemp1993[1U] >> 0x14U) | (0x1000U 
                                              & (__Vtemp1993[2U] 
                                                 << 0xcU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x13U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][0U] = 0U;
        if ((IData)((0U == (0xc00000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xcU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xcU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0xdU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xcU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x13U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x17U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x17U])) {
            __Vtemp2005[0U] = 1U;
            __Vtemp2005[1U] = 0U;
            __Vtemp2005[2U] = 0U;
            __Vtemp2006[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2006[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2006[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2007, __Vtemp2005, __Vtemp2006);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][0U] 
                = (__Vtemp2007[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][1U] 
                = ((__Vtemp2007[0U] >> 0x1fU) | (__Vtemp2007[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][2U] 
                = ((__Vtemp2007[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp2007[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x17U][0U] << 0xeU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x17U][0U] >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x17U][1U] 
                                             << 0xeU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x17U][2U] >> 1U)))) 
                    << 0x10U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x17U][1U] >> 0x12U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x17U][2U] << 0xeU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x17U][2U] 
                                           >> 1U)))) 
                         >> 0x10U));
        } else {
            __Vtemp2016[0U] = 1U;
            __Vtemp2016[1U] = 0U;
            __Vtemp2016[2U] = 0U;
            __Vtemp2017[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2017[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2017[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2018, __Vtemp2016, __Vtemp2017);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][0U] 
                = __Vtemp2018[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][1U] 
                = __Vtemp2018[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][2U] 
                = (1U & __Vtemp2018[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x17U][0U] << 0xeU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x17U][0U] >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x17U][1U] 
                                             << 0xeU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x17U][2U]))) << 0xfU) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x17U][1U] >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x17U][2U] 
                                                << 0xeU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x17U][2U]))) 
                         >> 0x11U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x17U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp2028, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] 
            = (__Vtemp2028[0U] << 0xeU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] 
            = ((__Vtemp2028[0U] >> 0x12U) | (__Vtemp2028[1U] 
                                             << 0xeU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0xfU) | 
               ((__Vtemp2028[1U] >> 0x12U) | (0x4000U 
                                              & (__Vtemp2028[2U] 
                                                 << 0xeU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x11U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][0U] = 0U;
        if ((IData)((0U == (0x1800000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xeU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xeU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0xfU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xeU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x11U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x18U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x18U])) {
            __Vtemp2040[0U] = 1U;
            __Vtemp2040[1U] = 0U;
            __Vtemp2040[2U] = 0U;
            __Vtemp2041[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2041[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2041[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2042, __Vtemp2040, __Vtemp2041);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][0U] 
                = (__Vtemp2042[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][1U] 
                = ((__Vtemp2042[0U] >> 0x1fU) | (__Vtemp2042[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][2U] 
                = ((__Vtemp2042[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp2042[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x18U][0U] << 0x10U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x18U][0U] >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x18U][1U] 
                                             << 0x10U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x18U][2U] >> 1U)))) 
                    << 0x12U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x18U][1U] >> 0x10U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x18U][2U] << 0x10U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x18U][2U] 
                                           >> 1U)))) 
                         >> 0xeU));
        } else {
            __Vtemp2051[0U] = 1U;
            __Vtemp2051[1U] = 0U;
            __Vtemp2051[2U] = 0U;
            __Vtemp2052[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2052[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2052[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2053, __Vtemp2051, __Vtemp2052);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][0U] 
                = __Vtemp2053[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][1U] 
                = __Vtemp2053[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][2U] 
                = (1U & __Vtemp2053[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x18U][0U] << 0x10U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x18U][0U] >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x18U][1U] 
                                             << 0x10U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x18U][2U]))) << 0x11U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x18U][1U] >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x18U][2U] 
                                                << 0x10U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x18U][2U]))) 
                         >> 0xfU));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x18U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp2063, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] 
            = (__Vtemp2063[0U] << 0x10U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] 
            = ((__Vtemp2063[0U] >> 0x10U) | (__Vtemp2063[1U] 
                                             << 0x10U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x11U) | 
               ((__Vtemp2063[1U] >> 0x10U) | (0x10000U 
                                              & (__Vtemp2063[2U] 
                                                 << 0x10U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0xfU));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][0U] = 0U;
        if ((IData)((0U == (0x3000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x10U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0x10U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x11U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                               << 0x10U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0xfU));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x19U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x19U])) {
            __Vtemp2075[0U] = 1U;
            __Vtemp2075[1U] = 0U;
            __Vtemp2075[2U] = 0U;
            __Vtemp2076[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2076[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2076[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2077, __Vtemp2075, __Vtemp2076);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][0U] 
                = (__Vtemp2077[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][1U] 
                = ((__Vtemp2077[0U] >> 0x1fU) | (__Vtemp2077[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][2U] 
                = ((__Vtemp2077[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp2077[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x19U][0U] << 0x12U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x19U][0U] >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                            [0x19U][1U] 
                                            << 0x12U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x19U][2U] >> 1U)))) 
                    << 0x14U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x19U][1U] >> 0xeU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x19U][2U] << 0x12U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x19U][2U] 
                                           >> 1U)))) 
                         >> 0xcU));
        } else {
            __Vtemp2086[0U] = 1U;
            __Vtemp2086[1U] = 0U;
            __Vtemp2086[2U] = 0U;
            __Vtemp2087[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2087[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2087[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2088, __Vtemp2086, __Vtemp2087);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][0U] 
                = __Vtemp2088[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][1U] 
                = __Vtemp2088[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][2U] 
                = (1U & __Vtemp2088[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x19U][0U] << 0x12U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x19U][0U] >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                            [0x19U][1U] 
                                            << 0x12U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x19U][2U]))) << 0x13U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x19U][1U] >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                               [0x19U][2U] 
                                               << 0x12U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x19U][2U]))) 
                         >> 0xdU));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x19U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp2098, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] 
            = (__Vtemp2098[0U] << 0x12U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] 
            = ((__Vtemp2098[0U] >> 0xeU) | (__Vtemp2098[1U] 
                                            << 0x12U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x13U) | 
               ((__Vtemp2098[1U] >> 0xeU) | (0x40000U 
                                             & (__Vtemp2098[2U] 
                                                << 0x12U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0xdU));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][0U] = 0U;
        if ((IData)((0U == (0x6000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x12U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x12U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x13U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x12U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0xdU));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1aU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1aU])) {
            __Vtemp2110[0U] = 1U;
            __Vtemp2110[1U] = 0U;
            __Vtemp2110[2U] = 0U;
            __Vtemp2111[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2111[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2111[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2112, __Vtemp2110, __Vtemp2111);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][0U] 
                = (__Vtemp2112[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][1U] 
                = ((__Vtemp2112[0U] >> 0x1fU) | (__Vtemp2112[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][2U] 
                = ((__Vtemp2112[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp2112[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1aU][0U] << 0x14U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1aU][0U] >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                            [0x1aU][1U] 
                                            << 0x14U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x1aU][2U] >> 1U)))) 
                    << 0x16U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x1aU][1U] >> 0xcU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x1aU][2U] << 0x14U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x1aU][2U] 
                                           >> 1U)))) 
                         >> 0xaU));
        } else {
            __Vtemp2121[0U] = 1U;
            __Vtemp2121[1U] = 0U;
            __Vtemp2121[2U] = 0U;
            __Vtemp2122[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2122[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2122[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2123, __Vtemp2121, __Vtemp2122);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][0U] 
                = __Vtemp2123[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][1U] 
                = __Vtemp2123[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][2U] 
                = (1U & __Vtemp2123[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1aU][0U] << 0x14U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1aU][0U] >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                            [0x1aU][1U] 
                                            << 0x14U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1aU][2U]))) << 0x15U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1aU][1U] >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                               [0x1aU][2U] 
                                               << 0x14U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1aU][2U]))) 
                         >> 0xbU));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1aU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp2133, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] 
            = (__Vtemp2133[0U] << 0x14U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] 
            = ((__Vtemp2133[0U] >> 0xcU) | (__Vtemp2133[1U] 
                                            << 0x14U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x15U) | 
               ((__Vtemp2133[1U] >> 0xcU) | (0x100000U 
                                             & (__Vtemp2133[2U] 
                                                << 0x14U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0xbU));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][0U] = 0U;
        if ((IData)((0U == (0xc000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x14U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x14U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x15U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x14U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0xbU));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1bU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1bU])) {
            __Vtemp2145[0U] = 1U;
            __Vtemp2145[1U] = 0U;
            __Vtemp2145[2U] = 0U;
            __Vtemp2146[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2146[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2146[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2147, __Vtemp2145, __Vtemp2146);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][0U] 
                = (__Vtemp2147[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][1U] 
                = ((__Vtemp2147[0U] >> 0x1fU) | (__Vtemp2147[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][2U] 
                = ((__Vtemp2147[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp2147[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1bU][0U] << 0x16U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1bU][0U] >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                            [0x1bU][1U] 
                                            << 0x16U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x1bU][2U] >> 1U)))) 
                    << 0x18U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x1bU][1U] >> 0xaU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x1bU][2U] << 0x16U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x1bU][2U] 
                                           >> 1U)))) 
                         >> 8U));
        } else {
            __Vtemp2156[0U] = 1U;
            __Vtemp2156[1U] = 0U;
            __Vtemp2156[2U] = 0U;
            __Vtemp2157[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2157[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2157[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2158, __Vtemp2156, __Vtemp2157);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][0U] 
                = __Vtemp2158[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][1U] 
                = __Vtemp2158[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][2U] 
                = (1U & __Vtemp2158[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1bU][0U] << 0x16U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1bU][0U] >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                            [0x1bU][1U] 
                                            << 0x16U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1bU][2U]))) << 0x17U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1bU][1U] >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                               [0x1bU][2U] 
                                               << 0x16U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1bU][2U]))) 
                         >> 9U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1bU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp2168, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] 
            = (__Vtemp2168[0U] << 0x16U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] 
            = ((__Vtemp2168[0U] >> 0xaU) | (__Vtemp2168[1U] 
                                            << 0x16U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x17U) | 
               ((__Vtemp2168[1U] >> 0xaU) | (0x400000U 
                                             & (__Vtemp2168[2U] 
                                                << 0x16U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 9U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][0U] = 0U;
        if ((IData)((0U == (0x18000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x16U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x16U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x17U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x16U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 9U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1cU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1cU])) {
            __Vtemp2180[0U] = 1U;
            __Vtemp2180[1U] = 0U;
            __Vtemp2180[2U] = 0U;
            __Vtemp2181[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2181[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2181[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2182, __Vtemp2180, __Vtemp2181);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][0U] 
                = (__Vtemp2182[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][1U] 
                = ((__Vtemp2182[0U] >> 0x1fU) | (__Vtemp2182[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][2U] 
                = ((__Vtemp2182[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp2182[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1cU][0U] << 0x18U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1cU][0U] >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [0x1cU][1U] 
                                          << 0x18U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x1cU][2U] >> 1U)))) 
                    << 0x1aU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x1cU][1U] >> 8U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x1cU][2U] << 0x18U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x1cU][2U] 
                                           >> 1U)))) 
                         >> 6U));
        } else {
            __Vtemp2191[0U] = 1U;
            __Vtemp2191[1U] = 0U;
            __Vtemp2191[2U] = 0U;
            __Vtemp2192[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2192[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2192[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2193, __Vtemp2191, __Vtemp2192);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][0U] 
                = __Vtemp2193[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][1U] 
                = __Vtemp2193[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][2U] 
                = (1U & __Vtemp2193[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1cU][0U] << 0x18U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1cU][0U] >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [0x1cU][1U] 
                                          << 0x18U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1cU][2U]))) << 0x19U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1cU][1U] >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x1cU][2U] 
                                             << 0x18U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1cU][2U]))) 
                         >> 7U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1cU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp2203, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] 
            = (__Vtemp2203[0U] << 0x18U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] 
            = ((__Vtemp2203[0U] >> 8U) | (__Vtemp2203[1U] 
                                          << 0x18U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x19U) | 
               ((__Vtemp2203[1U] >> 8U) | (0x1000000U 
                                           & (__Vtemp2203[2U] 
                                              << 0x18U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 7U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][0U] = 0U;
        if ((IData)((0U == (0x30000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x18U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x18U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x19U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x18U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 7U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1dU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1dU])) {
            __Vtemp2215[0U] = 1U;
            __Vtemp2215[1U] = 0U;
            __Vtemp2215[2U] = 0U;
            __Vtemp2216[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2216[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2216[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2217, __Vtemp2215, __Vtemp2216);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][0U] 
                = (__Vtemp2217[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][1U] 
                = ((__Vtemp2217[0U] >> 0x1fU) | (__Vtemp2217[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][2U] 
                = ((__Vtemp2217[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp2217[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1dU][0U] << 0x1aU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1dU][0U] >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [0x1dU][1U] 
                                          << 0x1aU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x1dU][2U] >> 1U)))) 
                    << 0x1cU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x1dU][1U] >> 6U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x1dU][2U] << 0x1aU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x1dU][2U] 
                                           >> 1U)))) 
                         >> 4U));
        } else {
            __Vtemp2226[0U] = 1U;
            __Vtemp2226[1U] = 0U;
            __Vtemp2226[2U] = 0U;
            __Vtemp2227[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2227[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2227[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2228, __Vtemp2226, __Vtemp2227);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][0U] 
                = __Vtemp2228[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][1U] 
                = __Vtemp2228[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][2U] 
                = (1U & __Vtemp2228[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1dU][0U] << 0x1aU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1dU][0U] >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [0x1dU][1U] 
                                          << 0x1aU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1dU][2U]))) << 0x1bU) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1dU][1U] >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x1dU][2U] 
                                             << 0x1aU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1dU][2U]))) 
                         >> 5U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1dU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp2238, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] 
            = (__Vtemp2238[0U] << 0x1aU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] 
            = ((__Vtemp2238[0U] >> 6U) | (__Vtemp2238[1U] 
                                          << 0x1aU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x1bU) | 
               ((__Vtemp2238[1U] >> 6U) | (0x4000000U 
                                           & (__Vtemp2238[2U] 
                                              << 0x1aU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 5U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][0U] = 0U;
        if ((IData)((0U == (0x60000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1aU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1aU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x1bU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1aU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 5U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1eU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1eU])) {
            __Vtemp2250[0U] = 1U;
            __Vtemp2250[1U] = 0U;
            __Vtemp2250[2U] = 0U;
            __Vtemp2251[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2251[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2251[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2252, __Vtemp2250, __Vtemp2251);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][0U] 
                = (__Vtemp2252[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][1U] 
                = ((__Vtemp2252[0U] >> 0x1fU) | (__Vtemp2252[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][2U] 
                = ((__Vtemp2252[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp2252[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1eU][0U] << 0x1cU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1eU][0U] >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [0x1eU][1U] 
                                          << 0x1cU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x1eU][2U] >> 1U)))) 
                    << 0x1eU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x1eU][1U] >> 4U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x1eU][2U] << 0x1cU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x1eU][2U] 
                                           >> 1U)))) 
                         >> 2U));
        } else {
            __Vtemp2261[0U] = 1U;
            __Vtemp2261[1U] = 0U;
            __Vtemp2261[2U] = 0U;
            __Vtemp2262[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2262[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2262[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2263, __Vtemp2261, __Vtemp2262);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][0U] 
                = __Vtemp2263[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][1U] 
                = __Vtemp2263[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][2U] 
                = (1U & __Vtemp2263[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1eU][0U] << 0x1cU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1eU][0U] >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [0x1eU][1U] 
                                          << 0x1cU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1eU][2U]))) << 0x1dU) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1eU][1U] >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x1eU][2U] 
                                             << 0x1cU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1eU][2U]))) 
                         >> 3U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1eU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp2273, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] 
            = (__Vtemp2273[0U] << 0x1cU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] 
            = ((__Vtemp2273[0U] >> 4U) | (__Vtemp2273[1U] 
                                          << 0x1cU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x1dU) | 
               ((__Vtemp2273[1U] >> 4U) | (0x10000000U 
                                           & (__Vtemp2273[2U] 
                                              << 0x1cU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 3U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][0U] = 0U;
        if ((IData)((0U == (0xc0000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1cU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1cU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x1dU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1cU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 3U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1fU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1fU])) {
            __Vtemp2285[0U] = 1U;
            __Vtemp2285[1U] = 0U;
            __Vtemp2285[2U] = 0U;
            __Vtemp2286[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2286[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2286[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2287, __Vtemp2285, __Vtemp2286);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][0U] 
                = (__Vtemp2287[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][1U] 
                = ((__Vtemp2287[0U] >> 0x1fU) | (__Vtemp2287[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][2U] 
                = ((__Vtemp2287[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp2287[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1fU][0U] << 0x1eU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1fU][0U] >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [0x1fU][1U] 
                                          << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1fU][1U] >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [0x1fU][2U] 
                                          << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][4U] 
                = (1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                         [0x1fU][2U] >> 1U));
        } else {
            __Vtemp2296[0U] = 1U;
            __Vtemp2296[1U] = 0U;
            __Vtemp2296[2U] = 0U;
            __Vtemp2297[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp2297[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp2297[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp2298, __Vtemp2296, __Vtemp2297);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][0U] 
                = __Vtemp2298[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][1U] 
                = __Vtemp2298[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][2U] 
                = (1U & __Vtemp2298[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1fU][0U] << 0x1eU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1fU][0U] >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [0x1fU][1U] 
                                          << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1fU][2U]))) << 0x1fU) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1fU][1U] >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x1fU][2U] 
                                             << 0x1eU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1fU][2U]))) 
                         >> 1U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1fU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp2308, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] 
            = (__Vtemp2308[0U] << 0x1eU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] 
            = ((__Vtemp2308[0U] >> 2U) | (__Vtemp2308[1U] 
                                          << 0x1eU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x1fU) | 
               ((__Vtemp2308[1U] >> 2U) | (0x40000000U 
                                           & (__Vtemp2308[2U] 
                                              << 0x1eU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 1U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][0U] = 0U;
        if ((1U & (((~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U]) 
                    & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                          >> 0x1fU))) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                            >> 0x1fU))))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1eU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x1fU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1eU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 1U));
        }
    }
    vlSelf->top__DOT__fslu__DOT__ifu__DOT__next_pc 
        = ((1U & vlSelf->top__DOT__fslu__DOT__br_bus[2U])
            ? (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__br_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__br_bus[0U])))
            : (4ULL + vlSelf->top__DOT__fslu__DOT__ifu__DOT__pc_reg));
}
